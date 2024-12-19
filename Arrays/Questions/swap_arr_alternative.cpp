/*
arr = {1,2,3,4,5}

swapped_alternative = {2,1,4,3,5}

arr = {1,2,3,4,5,6}

swapped_alternative = {2,1,4,3,6,5}


 */

#include<iostream>
using namespace std;

class SwappAlternative{

private:
    int arr[100];
    int size;

public:
    SwappAlternative(){
        cout<<"Enter the size of the array : ";
        cin>>size;

        cout<<"\nEnter "<<size<<" Elements in the array : \n";
        for(int i = 0; i<size; i++){
            cin>>arr[i];
        }

    }
    void swapped(){
        cout<<"\nBefore Swapped : "<<endl;
        for(int i = 0;i<size;i++){
            cout<<arr[i]<<", ";
        }
        for(int i=0;i<size;i+=2){
            if(i+1<size){
                swap(arr[i],arr[i+1]);
            }
        }

        cout<<"\nAfter Swapped : "<<endl;
        for(int i = 0;i<size;i++){
            cout<<arr[i]<<", ";
        }
    }
};

int main(){

    SwappAlternative s1 = SwappAlternative();

    s1.swapped();

    return 0;
}