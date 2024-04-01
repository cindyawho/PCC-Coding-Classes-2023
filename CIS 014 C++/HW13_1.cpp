#include <iostream>
#include <vector>
#include <string.h>

using namespace std;
/**
 * PURPOSE: write a class to automatically determine whether 
 * a set of mailbox signs (or street addresses) is possible 
 * given your available plastic letter inventory in the store
 * PARAMETERS: string inventory, given letters and numbers
 *              the store has in stock
 *             string array addresses, the list of addresses
 *              being ordered
 * RETURN VALUE: int Solution, how many of the addresses
 *              can we actually print
*/ 
class Solution {
public:
     int getNumPossibleSigns(string*, string*, int);
};
int Solution::getNumPossibleSigns(
            string* letterInventory, 
            string* addresses, 
            int length) {
    // YOUR CODE HERE
    //Printing key items to terminal
    // cout << "Letter Inventory: " << letterInventory[0] << endl; //AAAADFADFA223432112
    // cout << "First character in letter inventory: " << letterInventory[0][0] << endl; //A
    // cout << "Amount of characters in inventory: " << letterInventory[0].length() << endl; //18
    // cout << "First address in list: " << addresses[0] << endl; //S1
    // cout << "Amount of addresses: " << length << endl; //3

    //if one of the addresses doesn't work, then I'll subtract 1
    int possibleAddresses = length;
    
    bool addressFound = true;

    //for loop to go through the addresses array
    for(int i = 0; i < length; i++){
        //every time we look at a new address reset the addressFound variable
        addressFound = true;
        //initialize a string to save the address at the current index
        string currentAddress = addresses[i];
        //cout << "Currently looking at the address: " << addresses[i] << endl;
        //create a copy of inventory for current Address
        string copyInv = letterInventory[0];
        //cout << "'\t'Copy of the Inventory: " << copyInv << endl;
        //declare char for current character
        char currentChar; 
        //for loop to use the current Address character
        for(int j = 0; j < currentAddress.length(); j++){
            currentChar = currentAddress[j];
            //if we already saw that the address couldn't be made then skip all the characters
            //cout << "BOOLEAN: " << addressFound << endl;
            if(!addressFound){
                break;
            }
            //if the current character is a space, skip it
            if(currentChar == ' '){
                continue;
            }
            //cout << "'\t'At the character: " << currentChar << endl;
            

            //for loop to check if character is still in inventory
            for(int k = copyInv.length() - 1; k >= 0; k--){

                //cout << "'\t''\t'Checking the Inventory character: " << copyInv[k] <<endl;
                if(currentChar == copyInv[k]){
                    //if there's a match erase the character from the Copy of the inventory
                    copyInv.erase(k,1);
                    //then go on to the next character
                    break;
                } else if(k == 0){
                    //cout << "Subtracting 1 from possibilities because I couldn't find " << currentChar << endl;
                    possibleAddresses --;
                    addressFound = false;
                    //cout << "BOOLEAN: "  << addressFound << endl;
                    break;
                }
            }
        }

    }
    return possibleAddresses;
};
int main() {
  // Your code may be tested as follows, with different input values
  Solution solution;
  string inventory = "AAAADFADFA223432112";
  string addresses[] = {"S1","CAD","G2"}; 
  cout << solution.getNumPossibleSigns(&inventory, 
            addresses, 
            sizeof(addresses)/sizeof(addresses[0]));
}