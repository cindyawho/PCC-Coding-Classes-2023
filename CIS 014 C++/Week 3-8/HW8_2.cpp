#include <iostream>
#include <vector>
using namespace std;

/**
 * PURPOSE: recommends the maximum profit an investor can make by placing
 *          as many buys and sells within the inputted time. Need to sell 
 *          before buying again.
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
    bool canBuy = true;

    for(int i = 0; i < size; i++){
        if(canBuy == true && prices[i] < prices[i+1]){
            currentProfit -= prices[i];
            canBuy = false;
        }

        if(canBuy == false && prices[i] > prices[i+1]){
            canBuy = true;
            currentProfit += prices[i];
        }

        if(currentProfit > maxProfit){
            maxProfit = currentProfit;
        }
    }
    
    return maxProfit;
}

int main() {
    // your target function will be tested as such, with random input like so
    vector<int> arr{3, 1, 5, 2, 4};
    cout << getMaxProfit(arr); // 6
    return 0;
}

// ----------------------MY ORIGINAL ATTEMPTS---------------------------//
// //bool canBuy = true; 
//     bool canSell = true; //if true then we can sell, if false then we can buy
//     int buy = prices[0]; //buying at the i index

//     for(int i = 0; i < size; i++){
//         if(canSell == true && prices[i] > prices[i-1]){
//             int sell = prices[i];
//             currentProfit = sell - buy;
//             canSell = false;
//         }
//         if(canSell == false && prices[i] < prices[i+1]){
//             buy = prices[i];
//             //currentProfit = 
//             canSell = false;
//         }
//         // for(int j = 0; j < size; j++){
//         //     if(i >= j){
//         //         continue; //only want to sell at times after we bought
//         //     }
//         //     //If block to determine if we should buy or sell
//         //     if(canSell == true && prices[j] > prices[i]){
//         //         int sell = prices[j];
//         //         currentProfit = sell - buy;
//         //         canSell = false;
//         //     } 
//         //     else if(canSell == false && prices[j] < prices[i]){
//         //         int sell = prices[j];
//         //         currentProfit = buy - sell;
//         //         canSell = true;
//         //     }
//         //     //If block to determine if we have a new Max Profit
//         //     if(currentProfit > maxProfit){
//         //         maxProfit = currentProfit;
//         //     }
//         // }
//     }