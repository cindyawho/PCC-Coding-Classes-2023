#include <iostream>
using namespace std;

//The function that finds the character that happens L/2 times
char findHalfDuplicate(string s){
    int size = s.length();
    char currentChar;

    for(int i = 0; i < size; i++){
        int count = 0;
        currentChar = s[i];
        for(int j = 0; j < size; j++){
            if(currentChar == s[j]){
                count++;
                //cout << "Found a letter" << currentChar << "\n";
            }
        }
        //cout<< "exiting j for loop \n with a count of " << count;
        if(count == size/2){
            //cout << "in count == size/2 for loop";
            return currentChar;
        }
    }
    
    return currentChar;
}

int main(){
    string s = "aaaaabcdef";
    cout << findHalfDuplicate(s);

    //***************************More Tests***************************
    string test1 = "1a2a3a4a"; // L = 8; 'a' occurs 4 times; the other characters are all different
    cout << findHalfDuplicate(test1);

    string test2 = "1a2a1a";   // L = 6; 'a' occurs 3 times; the other characters are all different
    cout << findHalfDuplicate(test2);
    
    string test3 = "a2a3a1";   // L = 6; 'a' occurs 3 times; the other characters are all different
    cout << findHalfDuplicate(test3);

    string test4 = "2aa3";     // L = 4; 'a' occurs 2 times; the other characters are all different
    cout << findHalfDuplicate(test4);
    return 0;
}