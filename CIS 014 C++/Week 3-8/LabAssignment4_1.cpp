#include <iostream>
#include <stdio.h> //from a site
#include <string.h> //from a site
using namespace std;

int main(){
    //Problem 0
    int a, b;
    a = 10;
    cout << ++a;
    cout << --a;

    //Problem 1
    char c_test[] = "pasadena city college";
    int cSize = strlen(c_test);

    string cpp_test = "pasadena city college";

    for(int i = 0; i < cSize; i++){
        cout << c_test[i];
    }

    for(int j = 0; j < length(cpp_test); j++){
        cout << cpp_test[j];
    }
    
    return 0;
}