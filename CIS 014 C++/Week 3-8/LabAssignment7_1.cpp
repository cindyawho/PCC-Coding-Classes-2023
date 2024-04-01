#include<iostream>
using namespace std;
int getLargestConsecutiveSum(const int arr[], int length) {
    // YOUR CODE HERE
    int sum = arr[0]; //will be returned as the largest sum, compare it to an integer in the array to start with
    int testSum = 0; //will be used to compare with the current largest Sum
    int amountNum = 0; //amount of numbers being added

    for(amountNum = 1; amountNum <= length; amountNum++){ // a for loop to add the correct amount of Numbers
        //cout << "\nNEW AMOUNT: Testing adding up " << amountNum << " numbers.\n";
        for(int i = 0; i < length - amountNum; i++){ // will tell us where to start adding from
            testSum = 0;

            for(int j = 0; j <= amountNum; j++){
                testSum += arr[i + j];
            }

            if(testSum > sum){
                //cout << "\n\n\nFound that the testSum " << testSum << " is greater than the previously saved Sum of " << sum <<"\n\n\n";
                sum = testSum;
            }
        }
    }
    return sum;
}
int main() {
    // Your code will be tested with random input. For example:
    int int_array[] = {1, -3, 23, 4, 9, 2, 29, -3, 0, 2, 48, 7, 6, -1};
    cout << "Largest Consecutive Sum: " << getLargestConsecutiveSum(int_array, sizeof(int_array)/sizeof(*int_array));
    return 0;
}