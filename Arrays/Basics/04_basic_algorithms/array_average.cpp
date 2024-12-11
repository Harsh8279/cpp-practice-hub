#include<iostream>
using namespace std;

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