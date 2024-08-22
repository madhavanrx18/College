#include <iostream>

#include <cstring>

using namespace std;

int main() {

char str[50];

strncpy(str, "This is a bounded string now", sizeof(str) - 1);

str[sizeof(str) - 1] = '\0';

cout << str << endl;

return 0;

}