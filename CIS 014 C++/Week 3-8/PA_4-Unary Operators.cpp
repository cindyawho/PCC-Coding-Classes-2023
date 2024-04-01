#include <iostream>
using namespace std;

int main(){
    int c, a, b;
    a = 1;
    b = 1;
    //cout << a++;
    //cout << ++a;
    c = a++ + ++b;
    cout << c;
}
