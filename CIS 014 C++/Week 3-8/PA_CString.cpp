#include <iostream>
#include <cstring> //c string is the same thing as string.h
#include <string.h> //.h means c libraries
#include <stdio.h>
using namespace std;

int main(){
    char str[8];
    cout << "The size of the array str is " << sizeof(str);
    cout << "\nThe SIZE of the array str is " << size(str);
    cout << "\nThe length of the array str is " << strlen(str);

    strcpy(str, "abc");
    cout << "\nThe size of the array str is " << sizeof(str);
    cout << "\nThe SIZE of the array str is " << size(str);
    cout << "\nThe length of the array str is " << strlen(str);

    return 0;
}