#include<iostream>
#include<iomanip>
#include<vector>
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

        // Modern C++ Smart Pointer Approach
        std::cout << "\t2. Smart Pointer Dynamic Array:\n";
        int size_of_sp = 8;
        unique_ptr<int []> smartArray(new int[size_of_sp]);
        
        for(int i = 0;i<size_of_sp;i++){
            smartArray[i] = i*20;
        }

        for(int i = 0;i<size_of_sp;i++){
            cout<<"\t\t"<<smartArray[i]<<endl;
        }

        // Vector
        std::cout << "\t3. Vector:\n";
        vector<int> vec_array;

        for(int i = 0; i<10; i++){
            vec_array.push_back(i*12);
        }

        for(auto &data: vec_array){
            cout<<"\t\t"<<data<<endl;
        }

    }

};

int main(){

    DynamicArray();

    return 0;
}