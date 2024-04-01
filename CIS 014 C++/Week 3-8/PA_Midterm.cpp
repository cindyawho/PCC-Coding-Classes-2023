#include <iostream>
using namespace std;
// importing the necessary libraries
#include <iostream>     // std::cout, std::endl
#include <iomanip>      // std::setw

// void point(int x = 3, int y = 4);

// void point(int x, int y){
//     cout << "\n\nx is " << x;
//     cout << "\ny is " <<  y;
// }

int main(){
    //cout << "Hi";
    //point(1,2); 
    //point(1);
    //point();

    // int array[10];
    // array[0] = 1;
    // cout << array[0];

    // int arrayA[][1] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // cout << arrayA[0][7];

    // declare a 10x10 array for a multiplication table
    const int nNumRows = 10;
    const int nNumCols = 10;
    int nProducts[nNumRows][nNumCols] = {0};
    cout << setw(5); //sets width to 5

    // calculate multiplication table
    for (int nRow=0; nRow<nNumRows; nRow++)
        for (int nCol=0; nCol<nNumCols; nCol++)
            nProducts[nRow][nCol] = nRow * nCol; 

    // print the table
    for (int nRow=1; nRow<nNumRows; nRow++) {
        for (int nCol=1; nCol < nRow + 1; nCol++)
            cout << nProducts[nRow][nCol] << setw(5);
        cout << endl;
    }

    return 0;
}