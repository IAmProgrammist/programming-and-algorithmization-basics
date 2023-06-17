#include <iostream>

int main() {
    char *y = new char;
    char* &x = y;

    delete x;

    return 0;
}