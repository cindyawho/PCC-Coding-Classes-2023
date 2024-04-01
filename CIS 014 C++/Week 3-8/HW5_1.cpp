#include <iostream>
#include <vector>
using namespace std;

/**
 * PURPOSE: Given a vector representation of an avocado field, 
 *          determine if we can plant more avocados in 
 *          non-adjacent slots.
 * PARAMETERS: vector field, used as our starting field, will 
 *              have a size from 1 to 1000
 *          int n, represents the amount of avocados we are asked
 *              to plant, will be from 0 to 999
 * RETURN VALUES: bool canPlantAvocados, used to return true or 
 *              false to our main question
 */ 
bool canPlantAvocados(vector<int> field, int n) { 
    //field.size() will give the size of the vector
    //cout<< n << " is the amount of seeds we need to plant \n";
    bool check;
    int size = field.size();
    if(n > size){
        //cout << "The amount of seeds you're trying to plant " << n << " is larger than the field you have with the size of " << size;
        check = false;
    } else if (n == 0){
        //cout << "Since you're not trying to plant any seeds, then this should return true.";
        check = true;
    } else{
        //cout << "Since seed amount is less than size, I will check if there are enough spots.\n";
        int seedSpot = 0;
        for(int i = 0; i < size; i++){
            if(field[i] == 1){
                continue;
            }
            else if(i == size-1 && field[i-1] == 0 && field[i] == 0){
                seedSpot++;
            }
            else if(field[i-1] == 0 && field[i] == 0 && field[i+1] == 0){
                seedSpot++;
                i++;
            }
        }
        if(seedSpot >= n){
            //cout << "The amount of spots for seeds are " << seedSpot << " which is enough for the amount of seeds we have: " << n << " seeds.\n";
            check = true;
        } else{
            //cout << "We only have " << seedSpot << " spots for seeds, which is not enough for the amount of seeds we have: " << n << "\n";
            check = false;
        }
    }

    return check;
} 
int main() { 
    vector<int> field = {1, 0, 1}; 
    cout << canPlantAvocados(field, 3); // function returns a boolean false, 
                                        // which is 0 in cout 

    return 0; 
}