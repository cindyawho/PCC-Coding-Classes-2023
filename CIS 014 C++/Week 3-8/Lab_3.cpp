#include <iostream>
using namespace std;

/**
 * PURPOSE: checks to see whether an integer is a palindrome or not
 * PARAMETER:
 *     input, the integral input between the INT_MIN and INT_MAX range
 * RETURN VALUE:
 *     boolean indicating whether this input is an integer palindrome or not
*/

bool isPalindrome(int input){
  if(input < 0){
    return false;
  }

  string inTest = to_string(input);
  int size = inTest.length();
  if(size == 1){
    return true;
  }
  else if (size == 2){
    if (inTest[0] == inTest[1]){
      return true;
    }
    else{
      return false;
    }
  }
  else{ //STILL NEED TO WORK ON THIS SECTION!!!
    //int i = size;
    for(int i = 0; i < size/2; i++){
      if(inTest[i] == inTest[size-i]){
        cout<<"Testing if inTest[" << i <<"] =" << inTest[i] << "is equal to" << "inTest[" << size - i <<"] =" << inTest[size-i]; 
        continue;
      }
      else{
        return false;
      }
    }
    return true;
  }
}

int main() {
  int userInput;
  cout << "Input an integer: ";
  cin >> userInput;
  cout << isPalindrome(userInput);
}