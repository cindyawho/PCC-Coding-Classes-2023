#include <iostream>
using namespace std;

// void swap_function(int** pointer1, int** pointer2){
//     int** z = pointer1;
//     pointer1 = pointer2;
//     pointer2 = z;
// }

void swap_function(int** pointer1, int** pointer2){
    int* z = *pointer1;
    *pointer1 = *pointer2;
    *pointer2 = z;
}

int main() {

    int x = 5, y = 6;
    int* ptr1 = &x;
    int* ptr2 = &y;
    swap_function(&ptr1 , &ptr2);
    cout << *ptr1 << *ptr2 ;  // Prints "65"

    return 0;
}
