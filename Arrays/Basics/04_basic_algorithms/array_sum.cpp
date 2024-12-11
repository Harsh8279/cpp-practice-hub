#include<iostream>
using namespace std;

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