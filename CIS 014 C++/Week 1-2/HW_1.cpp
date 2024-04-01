#include <iostream>
using namespace std;

/**
 * PURPOSE: this console program breaks the total number of pennies into
 *          respective USD and CAN denominations, and print the string buffer
 *          containing the entire formatted output string to the console display
 * PARAMETERS:
 *     	None
 * RETURN VALUES:
 *     	None
 */

int main() {
  int numPennies;
  cout << "Please enter all of your pennies: " << endl;
  cin >> numPennies;

  // YOUR CODE HERE
  double canadianCurrency = (double(numPennies)) * 1.33;

  int dollars = numPennies / 100;
  int leftOver = numPennies % 100;

  int quarters = leftOver / 25;
  leftOver = leftOver % 25;

  int dimes = leftOver / 10;
  leftOver = leftOver % 10;

  int nickels = leftOver / 5;
  leftOver = leftOver % 5;

  int pennies = leftOver;

  cout << "In US Currency, you have: " << dollars << " dollars, " << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, and " << pennies << " pennies." << endl;

  cout << "In Canadian currency, you have: " << canadianCurrency << " dollars." << endl;

  return 0;
}