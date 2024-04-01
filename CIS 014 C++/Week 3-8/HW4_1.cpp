#include <iostream>
#include <vector>
using namespace std;

// API DOCUMENTATION BELOW. PLEASE FILL THE FOLLOWING API PRIOR TO CODING
/**
 * PURPOSE: determines whether or not the inputted integer 
 *          is a Champion Number- if it is divisible by all
 *          of its digits. 
 * PARAMETER: 
 *          2 integers: begin and end, specify the range of
 *          where we need to check for Champion Numbers
 * RETURN VALUE: a vector listing the integers found to be
 *          Champion Numbers.
 */ 
vector<int> getChampions(int begin, int end) {
    // YOUR CODE HERE
    vector<int> championsList;

    int currentNumber = begin;
    for(currentNumber; currentNumber <= end; currentNumber++){
        
        string numSt = to_string(currentNumber); //to go through digits
        int size = numSt.length(); //size of string for for loop
        int success = 0; //counts if it's divisible by each digit
        
        for(int i = 0; i < size; i++){
            int digit = numSt[i] - '0'; //takes string's char to a digit
            if(digit == 0){
                break; //can't divide by 0!!
            }
            else if(currentNumber % digit == 0){ //checks if number is divisible by the digit
                success++; //if it is then counts it as a success
            }
        }

        if(success == size){ //every digit worked!
            championsList.push_back(currentNumber);
        }
    }

    return championsList;
}

int main()
{
    // your target function will be tested as such, 
    // with a random begin and end value such as:
    //vector<int> a = getChampions(1, 5);
    vector<int> a = getChampions(1, 22);
    
    // this is one example to print out your vector content
    // in the ascending order
    for(int i=0; i < a.size(); i++)
        cout << a.at(i) << ' ';
    return 0;
}