#include <iostream>
using namespace std;

// API DOCUMENTATION BELOW. PLEASE FILL THE FOLLOWING API PRIOR TO CODING
/**
 * PURPOSE: The purpose of this program is to create a function that will
 analyze the amount of pebbles in the Game of Nim. It returns true if there
 is a guaranteed winning strategy, and returns false if there is none. 
 * PARAMETER: 
      int n, the starting quantity of pebbles, n > 0
 * RETURN VALUE:
      boolean, returns true if there's a way to win. False otherwise.
 */ 
bool canAlwaysWin(int n) {
    /*Whoever is left with 7 at the end, loses. If there are 8-13 pebbles, 
    you can take however many needed to leave the other person with 7. At 
    14 pebbles, the other player can do the same winning strategy against 
    you. So multiples of 7 are losing numbers.*/
  
    if(n % 7 == 0){
        return false;
    }
    else{
        return true;
    }
}

int main() {
    canAlwaysWin(23034);
    return 0;
}