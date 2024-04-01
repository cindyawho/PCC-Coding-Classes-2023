#include <iostream>
#include <vector>

using namespace std;

class CIS14 {
public:
     int getMaxPoints(vector<vector<int>> &maze);
}; 

// ------------------------------------------------------------
// DO NOT MODIFY ABOVE THIS LINE. The above is your C++ class 
// named CIS14 with a method called getMaxPoints(...) you will
// implement
// ------------------------------------------------------------

/**
 * PURPOSE: to find the maximum amount of points we can get from
 *          playing a 2d-pyramid-style pinball game
 * PARAMETERS: vector of integers called maze; this will store
 *          our pinball game from the top row to the bottom row
 * RETURN VALUES: integer that represents Maximum Points
 */
int CIS14::getMaxPoints(vector<vector<int>> &maze) {
    // YOUR CODE HERE
    int rows = maze.size();
    //int maxPoints = 0;
    //int currentPoints = 0;

    if(rows == 0) {
        return 0; //returns 0 if the array is empty;
    }

    //Thank you Professor for helping me understand this approach!
    for(int currentRow = rows - 2; currentRow >= 0; currentRow--){
        for(int currentPeg = 0; currentPeg < currentRow + 1; currentPeg++){
            //cout << "At location (" << currentRow << " , " << currentPeg << ")" << endl;
            if(maze[currentRow + 1][currentPeg] >=  maze[currentRow + 1][currentPeg + 1] ){
                maze[currentRow][currentPeg] += maze[currentRow + 1][currentPeg];
            } 
            else if(maze[currentRow + 1][currentPeg] <  maze[currentRow + 1][currentPeg + 1] ){
                maze[currentRow][currentPeg] += maze[currentRow + 1][currentPeg + 1];
            } 
        }
        
    }
    
    return maze[0][0];
}

int main()
{
    // Instantiate an instance of the CIS14 class
    CIS14 cis14;    
    
    // Your target method will be tested as such, with random input
    // as the following example illustrates
    vector<vector<int>> maze = {{0}, {4,1}, {5,3,8}, {1,6,7,3}};
    cout << cis14.getMaxPoints(maze) << endl; // 16
    
    return 0;
}