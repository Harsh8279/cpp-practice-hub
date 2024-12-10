#include<iostream>
using namespace std;

class ArrayOutput{

public:
    ArrayOutput(){
        int arr[10] = {1,3,5,6,7,8,9,1,3,4};

        // Method 1. Simple Output using loop
        cout << "\n\tArray elements using for loop:\n";
        for(int i=0;i<10;i++){
            cout<<arr[i]<<", ";
        }
        cout<<endl;

        // Method 2. Range Based for loop
        cout << "\n\tArray elements using range-based for loop:\n";
        for(int data: arr){
            cout<<data<<", ";
        }
        cout<<endl;
        // Method 3: While loop output
        cout << "\n\tArray elements using while loop:\n";
        int j = 0;
        while(j<10){
            cout<<arr[j]<<", ";
            j++;
        }

        cout<<endl;


    }

};

int main(){
    ArrayOutput();
    return 0;
}