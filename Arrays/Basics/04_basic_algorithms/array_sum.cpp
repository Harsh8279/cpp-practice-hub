#include<iostream>
using namespace std;

// 2. array_sum.cpp
// Array Sum: Calculate the total of all elements in an array

class ArraySum{

public:
    ArraySum(){
        const int size = 10;
        int data[size] = {1,2,3,4,5,6,7,8,9,10};

        int sum = 0;
        for(int i = 0; i<size;i++){
            sum += data[i];
        }

        cout<<"Sum is "<<sum<<endl;
    }

};

int main(){

    ArraySum();
    return 0;
}

// Explanation of Array Sum:
// - Adds up all elements in an array
// - Uses a simple loop to iterate through array
// - Time complexity: O(n) - visits each element once
// - Useful for calculating totals, averages, etc.
// - Straightforward and efficient method