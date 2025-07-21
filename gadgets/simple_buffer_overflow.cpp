#include <iostream>
#include <cstdlib>
#include <cstring>


void sayhello(){
	std::cout<<"why does it work with execv?"<<std::endl;
	char buffer[50];
	std::cin >> buffer;
}
int main(){
	sayhello();
        return 0;
}
