#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    
    //Problem 1
    for(int i = 1; i < 10; i++){
        cout << i << " ";
        if(i % 3 == 0){
            cout << "\n";
        }
    }

    cout << "\n";

    for(int i = 2; i < 20; i+=2){
        cout << i << " ";
        if(i % 6 == 0){
            cout << "\n";
        }
    }


    //Problem 2
    for(int i = 50; i > -1; i-=2){
        cout << i << " ";
    }

    cout << "\n";

    //Problem 3
    int sum = 0;
    for(int n = 1; n < 51; n++){
        sum += n;
    }
    string sentence = "\nThe sum of the numbers from 1 to 50 is ";
    cout << sentence << sum << ".";
    //sprintf("The sum of the numbers from 1 to 50 is", "%sum");
    return 0;
}