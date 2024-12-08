#include<iostream>
using namespace std;

class AccessingElements{

private:
    int data[10] = {25, 12, 87, 98, 56, 86, 74, 59, 75, 65};

public:
    AccessingElements(){
        cout<<"Accessing 3rd element : "<<data[2]<<endl;
        cout<<"Accessing 8th element : "<<data[7]<<endl;
    }
    

};

int main(){

    AccessingElements();

    return 0;
}