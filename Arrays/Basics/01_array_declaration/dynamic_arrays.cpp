#include<iostream>
using namespace std;

class DynamicArray{

public:
    DynamicArray(){

        cout<<"\n\t1. Traditional Dynamic Array "<<endl;
        int size_of_tr = 5;
        // This is Raw Pointer
        int* traditional_array = new int[size_of_tr];

        for(int i = 0; i<size_of_tr;i++){
            traditional_array[i] = i*10;
        }

        for(int i = 0; i<size_of_tr;i++){
            cout<<"\t\t"<<traditional_array[i]<<endl;
        }

        // Important: Always delete to prevent memory leak
        delete[] traditional_array;

        /*
            Use modern C++ constructs like std::vector or std::unique_ptr 
            instead of raw pointers to avoid manual memory management.
            
            Not writing delete[] might work in trivial cases, 
            but it is bad practice and can lead to serious problems in larger, long-running programs. 
            Always clean up your dynamically allocated memory or, better yet, 
            use modern C++ features like std::vector to manage memory automatically.
        */

        



        cout<<""<<endl;

    }

};

int main(){

    DynamicArray();

    return 0;
}