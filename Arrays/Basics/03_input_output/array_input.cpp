#include<iostream>
using namespace std;

class ArrayInput{

public:
    ArrayInput(){
        // Method 1 : Initializing an array using predefined values
        int numbers[5] = {10, 20, 30, 40 , 50};

        // Method 2 : Taking input from user
        int user_array[5];
        cout<<"Enter the Input : \n";
        for(int i = 0 ; i<5;i++){
            cin>>user_array[i];
        }

        // Method 3 : Input using loop
        int new_array[100];
        cout<<"Enter the size of the array : ";
        int size;
        cin>>size;

        cout<<"\nEnter "<<size<<" Elements in the array : \n";
        for(int i = 0; i<size; i++){
            cin>>new_array[i];
        }

    }

};

int main(){

    ArrayInput();

    return 0;
}