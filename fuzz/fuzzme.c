// fuzz_target.cpp
#include <cstdint>
#include <cstddef>
#include <cstring>
#include <string>
#include <iostream>

void vulnerable_function(const char* input) {
    char buffer[32];
    strcpy(buffer, input); // Vulnerability: buffer overflow
}

void tryCrashIfStringMatches(const std::string& find_me, const std::string& s){

    if(s.find(find_me) != std::string::npos)
    {
	std::cout<<s<<"\n";
        vulnerable_function(s.c_str());
    }

}

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    if (size == 0 || size > 1024) return 0;

    char *input = new char[size + 1];
    memcpy(input, data, size);
    input[size] = '\0';
    vulnerable_function(input);
    auto s = std::string(input, size);
    tryCrashIfStringMatches("foozbar", s);


    delete[] input;
    return 0;
}
