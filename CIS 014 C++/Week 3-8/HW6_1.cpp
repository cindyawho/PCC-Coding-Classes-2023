#include <iostream>
#include <string>
using namespace std;

/**
* PURPOSE: Given two version strings, determine which product 
            version is the latesst. 
* PARAMETERS: two strings, representing the two version numbers
* RETURN VALUES: int:
            -if ver1 is the latest, the int is 1
            -if ver2 is the latest, the int is -1
            -if ver1 and ver2 are the same, then the int will be 0
*/ 
int compareVersions(string ver1, string ver2) {
    // YOUR CODE HERE
    int size1 = ver1.length();
    int size2 = ver2.length();

    int size;

    if(size1 < size2){
        int difference = size2 - size1;
        for(int i = 0; i < difference; i++){
            ver1 = ver1 + ".0";
        }
        size = size2;
    } else if(size1 > size2){
        int difference = size1 - size2;
        for(int i = 0; i < difference; i++){
            ver2 = ver2 + ".0";
        }
        size = size1;
    } else{
        size = size1;
    }

    for(int i = 0; i < size; i++){
        if(ver1[i] == '.'){
            continue;
        }
        else if(ver1[i] > ver2[i]){
            return 1;
        }
        else if(ver1[i] < ver2[i]){
            return -1;
        }
        else{
            continue;
        }
    }
    return 0;
}
int main() {
    // your target function will be tested as such, with 
    // random input. To streamline your testing, you may
    // also test your own code this way:
    // cout << (compareVersions("0.1", "0.1") == 0); // 1, which is true
    // cout << compareVersions("0.1", "0.1") << endl; // 0
    // cout << compareVersions("1.0", "1.1") << endl; // -1
    // cout << compareVersions("2.0", "2.0.1") << endl; // -1
    // cout << compareVersions("2.0.1", "2.0") << endl; // 1
    // cout << compareVersions("1.1", "1.1.0") << endl; // 0
    // cout << compareVersions("7.5", "7.5.0") << endl; // 0
    // cout << compareVersions("300.2.1", "256") << endl; // 1
    // cout << compareVersions("0.1.2.3.4.5.6.7", "0.1.1.1") << endl; // 1
    return 0;
}