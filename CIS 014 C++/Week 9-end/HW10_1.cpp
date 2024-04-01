#include <iostream>
#include <vector>

using namespace std;

class CIS14 {
public:
     vector<int> getMaxHits(vector<int> &requests, int window_size);
};

// ------------------------------------------------------------
// DO NOT MODIFY ABOVE THIS LINE. The above is your C++ class 
// named CIS14 with its method you will implement.
// ------------------------------------------------------------

/**
 * PURPOSE: to find the maximum hits/requests within a certain 
 *          window of time
 * PARAMETERS: -vector of integers that represents the requests
 *             -an integer that represents the window time
 * RETURN VALUES: a vector of integers that represents the max
 *                hits from each possible window.
 */
vector<int> CIS14::getMaxHits(vector<int> &requests, int window_size) {
    // YOUR CODE HERE
    vector<int> maxHits; //a vector to store the maxHits from each window
    int size = requests.size(); //size of our original Requests vector

    if(window_size == 0 || window_size > size){
        return maxHits; //Account for all cases where we can return an empty vector.
    }
    else if(window_size == 1){
        return requests; //Account for case where window is 1, so it should return the original vector
    } 
    else{
        for(int i = 0; i < size - window_size + 1; i++){
            int maxHit = 0;
            for(int j = 0; j < window_size; j++){
                if(requests[i+j] > maxHit){
                    maxHit = requests[i+j];
                }
            }
            maxHits.push_back(maxHit);
        }
    }
    return maxHits;
}

int main()
{
    // Instantiate an instance of the CIS14 class
    CIS14 cis14;    
    
    // Your target method will be tested with random input such
    // as the following example; the actual test cases will vary
    vector<int> v = {1,2,4};
    vector<int> ans = cis14.getMaxHits(v,1);
    
    // You may use the following code to print out your returned vector's content
    for (int i=0; i<ans.size(); i++) cout << ans[i] << ((i==ans.size()-1) ? "" : ",");
    
    return 0;
}