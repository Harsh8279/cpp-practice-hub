#include<iostream>
using namespace std;

class ArraySize{

private:
    int data[7] = {1,2,3,4,5,6,7};

public:

    ArraySize(){
        cout<<"Size of array : "<<sizeof(data)/sizeof(data[0])<<endl;
    }

};

int main(){

    ArraySize();

    return 0;
}