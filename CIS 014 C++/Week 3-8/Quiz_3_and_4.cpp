#include <iostream>
#include <cstring>
using namespace std;

int function()
{
      int value = 35;
      return value + 15;
      value += 10;
}


int main(){
    int y = 0;
    {
        int y = 3;
        cout << y << ",";
    }
    cout << y << endl;
    for(int i=0;i<14;i++);
        cout <<"PCC\n";
    
    int x = 0;
    int a;
    a=x++;
    
    x = 0;
    int b;
    b=(x=x+1);

   // if (true) 
        //continue;

    cout << a << "," << b;

    //int arr[10];
    //arr[-1] = 1;

    cout << "\nTest: " << function();
    
    int z = 4.3;

    cout << "\n Question 10: " << static_cast<int>(z);\
    
    char str[100];
    strcpy(str, "C++");
    cout << "\n The length of the C-style string is " << strlen(str);

    float h = 4.1;
    cout << "\n to round, use this (double) (h); to get " << (double)(h);

    return 0;
}