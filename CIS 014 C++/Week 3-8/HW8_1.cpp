#include <iostream>
#include <vector>
using namespace std;

/**
 * PURPOSE: recommends the maximum profit an investor can make by placing
 *          at most one buy and one sell order within the inputted time.
 * PARAMETERS: 
 *      vector <int> &prices stores the integers for the prices in the time slice
 * RETURN VALUES:
 *      integer maxProfit is the maximum amount of profit we can make given 
 *      our constraints
 */

int getMaxProfit(vector<int> &prices) {
    // YOUR CODE HERE
    int currentProfit = 0;
    int maxProfit = 0;
    int size = prices.size();

    for(int i = 0; i < size; i++){
        int buy = prices[i]; //buying at the i index
        for(int j = 0; j < size; j++){
            if(i >= j){
                continue; //only want to sell at times after we bought
            }

            int sell = prices[j];
            currentProfit = sell - buy;
            if(currentProfit > maxProfit){
                maxProfit = currentProfit;
            }

        }
    }
    return maxProfit;
}

int main() {
   // your target function will be tested as such, with random input like so
   vector<int> arr{1, 2, 4};
   cout << getMaxProfit(arr); // 3

   return 0;
}