#include <iostream>
using namespace std;

int main() {
  string str = "C++ is fun!";
  cout << str[0];
  cout << str[str.length()-1];

  
  for(int i = 0; i < str.length(); i++){
    cout << str[i];
  }

   return 0;
}