#include<iostream>
using namespace std;

// 3. array_average.cpp
// Array Average: Calculate the average of all elements in an array


class ArrayAverage{
public:

    ArrayAverage(){
        int data[10] = {1,2,3,4,5,6,7,8,91,10};

        int sum = 0;

        for(int i =0; i<10;i++){
            sum+= data[i];
        }

        double avg = sum / (sizeof(data)/sizeof(data[0]));

        cout<<"Average is : "<<avg<<endl;


    }
};

int main(){
    ArrayAverage();
    return 0;
}

// Explanation of Array Average:
// - Computes the mean of all elements in an array
// - Involves two steps: 1) Calculate sum 2) Divide by number of elements
// - Uses static_cast to convert to double for precise division
// - Handles potential division by zero
// - Time complexity: O(n) - similar to sum calculation
// - Useful for statistical calculations