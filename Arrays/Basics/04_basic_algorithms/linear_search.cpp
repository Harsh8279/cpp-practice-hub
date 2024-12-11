#include<iostream>
using namespace std;
// 1. linear_search.cpp
// Linear Search: A simple algorithm to find an element in an array by checking each element sequentially

class LinearSearch{

public:

    int linear_search(){
        const int size = 6;
        int data[size] = {1,2,3,4,5,6};

        int target = 5;

        for(int i=0;i<size;i++){
            if(data[i]==target){
                return i;
            }
        }
        return -1;

    }

};

int main(){
    LinearSearch l1 = LinearSearch();

    int result = l1.linear_search();

    if(result==-1){
        cout<<"Not found!!"<<endl;
    }
    else{
        cout<<"Data Found at : "<<result<<endl;
    }


    return 0;
}

// Explanation of Linear Search:
// - Simplest search algorithm
// - Checks each element one by one from start to end
// - Time complexity: O(n) - where n is the number of elements
// - Works well for small arrays or unsorted collections
// - Easy to implement but not efficient for large arrays