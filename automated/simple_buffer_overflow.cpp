#include <cstdlib>
#include <cstring>
#include <iostream>

void giveshell() { system("/bin/sh"); }

void checkpwd() {

  char buffer[5];
  std::cin >> buffer;

  if (strcmp(buffer, "foobar") == 0) {
    giveshell();
  }
}
int main() {

  checkpwd();
  return 0;
}
