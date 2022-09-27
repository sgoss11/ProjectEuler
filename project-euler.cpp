/*
    If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
    Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <istream>
#include <vector>

using namespace std;

int main(){

    //need a dynamic storage -> vector
    vector<int> multiples3;
    vector<int> multiples5;
    
    //get user input
    int input = 0;
    cin >> input;

    //for loop less than input
    for(int i = 0; i < input; i++){
        
        //if mod 3 == 0 add to vector
        if(i % 3 == 0)
        {
            //output 
            multiples3.push_back(i);
            cout << "Multiples of 3: " << multiples3[i] " ";
        }//if mod 5 == 0 add to vector
        if(i % 5 == 0)
        {
            //output 
            multiples5.push_back(i);
            cout << "Multiples of 5: " << multiples5[i] " ";
        }
        
    }

}