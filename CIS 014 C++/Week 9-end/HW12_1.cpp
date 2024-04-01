#include <iostream>
#include <climits>
#include <vector>
using namespace std;

class CIS14
{
public:
    int getSignal(vector<int> &);
};
// ------------------------------------------------------------
// DO NOT MODIFY ABOVE THIS LINE. The above is your C++ class
// named CIS14 with its method and the Node class you will use.
// <climits> is included to accommodate use of INT_MAX and/or INT_MIN.
// ------------------------------------------------------------

/**
 * PURPOSE: to determine whether a product of integers is positive, 
 *          negative, or 0.
 * PARAMETERS: a vector array of integers. 
 * RETURN VALUE: -1 if the product is positive, 1 if the product
 *              is negative, and 0 if the product is 0.
*/
int CIS14::getSignal(vector<int> &ints)
{
    // YOUR CODE HERE
    int product = 1;
    for(int i = 0; i < ints.size(); i++){
        if(ints[i] > 0 || ints[i] == INT_MAX){
            product *= 1;
        } else if(ints[i] < 0 || ints[i] == INT_MIN){
            product *= -1;
        } else {
            product *= ints[i];
        }
    }

    if(product > 0){
        return -1;
    } else if(product < 0){
        return 1;
    } else {
        return 0;
    }
};

int main()
{
    // Instantiate an instance of the CIS14 class
    CIS14 cis14;

    // Your target method will be tested with random input such
    // as the following examples; the actual test cases will vary
    vector<int> v = {1, -1};
    cout << cis14.getSignal(v) << endl; // expects 1
    v = {1, 0, 1, 232, -23, 8, 109};
    cout << cis14.getSignal(v) << endl; // expects 0
    // etc.

    return 0;
}