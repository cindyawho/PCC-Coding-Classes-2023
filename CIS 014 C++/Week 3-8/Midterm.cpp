#include <iostream>
using namespace std;

#include <string.h> //.h means c libraries
#include <stdio.h>

int main(){
    // cout << "Hi";
    // int k = 10;
    // int b = 1;
    // while( k >= 1 ) {
    //     b = b * k;
    //     cout << b;
    //     k--;
    // }
    // cout << endl;
    // int a = 1;
    // for(int k = 10; k >=1; k--){
    //     cout<<a;
    //     a = a*k;
    // }

    //string a = "C++";
    //cout << strlen(a);
    
    for(int row = 0; row <=2; row++){
        for(int col = 0; col <= 6; col++){
            if(row%2 == 0 && col%2 == 0){
                cout << "#";
            }
            else if(row%2 == 0 && col%2 == 1){
                cout << "_";
            }
            else if(row%2 == 1 && col%2 == 0){
                cout << "_";
            }
            else if(row%2 == 1 && col%2 == 1){
                cout << "#";
            }

            if(row == 1 && col == 6){
                cout << "#_";
            }
        }
        cout << "\n";
    }

    return 0;
}