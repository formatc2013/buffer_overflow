#include <iostream>
#include <cstdlib>
#include <cstring>


void sayhello(){
	
	std::cout << "what is your name?" << std::endl;
	char buffer[50];
	std::cin >> buffer;
        
	std::cout <<"hey " << buffer << "! I am sure you can do something wicked with this little app!" << std::endl;

}
int main(){
	
	sayhello();
        return 0;
}
