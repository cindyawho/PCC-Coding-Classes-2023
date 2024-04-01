#include <iostream>
using namespace std;

/**
 * PURPOSE: Given a string of a's and b's, move all letter a's to the start of the string, and b's to the end. 
 * PARAMETERS: string, consisting of characters a and b.
 * RETURN VALUES: string, of sorted characters with all a's at the start and b's at the end. 
 */
string separateLetters(string input) {
  // YOUR CODE HERE
  int aCount = 0;
  int bCount = 0;
  int i = 0;
  while(i < input.length()){
    if(input[i] == 'a'){
      aCount = aCount + 1;
      //cout << "aCount: " << aCount << "\n";
    }
    else if(input[i] == 'b'){
      bCount = bCount + 1;
      //cout << "bCount: " << bCount << "\n";
    }
    else{
      return "Invalid Input";
    }
    i = i + 1;
  }

  string output;
  i = 0;
  while(i < aCount){
    output.push_back('a');
    i = i + 1;
  }
  
  i = 0;
  while(i < bCount){
    output.push_back('b');
    i = i + 1;
  }
  return output;
}

int main() {
   // Your target function will be tested as such, 
   // with a random, hardcoded input 
   // test case #1
  //  cout << separateLetters("a"); // return a
  //  // test case #2 
  //  cout << "\n" << separateLetters("abababa"); // return aaaabbb
  //  // etc.
  //  cout << "\n" << separateLetters("abbbbbbbbaaaaaaa");
  //  cout << "\n" << separateLetters("ab");
  //  cout << "\n" << separateLetters("ba");
   return 0;
}