#include<iostream>
using namespace std;

class ModifyingElements{

private:

    int data[5] = {78, 34, 35, 65, 89};

public:

    ModifyingElements(){

        cout<<"\n-----------------Before-----------------\n";
        for(int i = 0; i<5; i++){
            cout<<data[i]<<", ";
        }
        cout<<endl;

        data[4] = 99;

        cout<<"\n-----------------After-----------------\n";
        for(int i = 0; i<5; i++){
            cout<<data[i]<<", ";
        }
        cout<<endl;



    }

};

int main(){

    ModifyingElements();

    return 0;

}