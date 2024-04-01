#include<iostream>
#include <cstring>
using namespace std;
int findNeedle(const char* haystack, const char* needle) {
    // YOUR CODE HERE
    int size = strlen(haystack);
    int needleSize = strlen(needle);
    int needleLocation = -1;

    for(int i = 0; i < size; i++){
        if(needle[0] != haystack[i]){
            continue;
        }
        else if(needle[0] == haystack[i]){
            int check = 0;
            for(int j = 0; j < needleSize; j++){
                if(needle[j] != haystack[i+j]){
                    needleLocation = -1;
                    break;
                }
                else if(needle[j] == haystack[i+j]){
                    check ++;
                    continue;
                }
            }
            if(check == needleSize){
                needleLocation = i;
                break;
            }
        }
    }


    return needleLocation;
}

int main() {
    // Your code will be tested with random input. For example:
    cout << (findNeedle("mississippi","issip") == 4); // 1
    cout << (findNeedle("pasadena","pas") == 0);      // 1
    // etc.
    return 0;
}