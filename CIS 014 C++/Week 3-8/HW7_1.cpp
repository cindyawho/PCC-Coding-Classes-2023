#include <iostream>
#include <vector>
using namespace std;

/**
 * PURPOSE: to take a large number stored in a vector, and subtract one 
 * PARAMETERS: a vector that has stored a large number
 * RETURN VALUES: a vector that has subtracted 1 from the inputted number
 */
vector<int> minusMinusN(vector<int> digits) {
    // YOUR CODE HERE
    int size = digits.size();
    if(digits[size-1] != 0){ //Easy case where you just subtract one from the last digit
        digits[size - 1] = digits[size - 1] - 1;
    } 
    
    else{ //Challenging case, where we need to consider borrowing
        int check = digits[size-1]; //cout << "check: " << check << "\n";
        int j = 1;

        while(check == 0){
            digits[size-j] = 9;
            j++;
            check = digits[size-j]; //cout << "check in while loop: " << check << "\n";
        }
        
        digits[size-j]--; 

        if(digits[0] == 0){
            digits.erase (digits.begin());
        }
    }
    return digits;
}

int main() {
    // your target function will be tested like so, with random input
    vector<int> v {1,0};
    vector <int> retVal = minusMinusN(v); // retVal = [9]
    for(int i = 0; i < retVal.size(); i++){
        cout << retVal[i];
    }

    return 0;
}