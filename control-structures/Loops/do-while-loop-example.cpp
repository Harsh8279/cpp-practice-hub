#include<iostream>
using namespace std;

class DoWhileLoop{

public:

    DoWhileLoop(){
        int i = 0;

        do{
            i++;
            cout<<"i --> "<<i<<endl;
        }while(i<6);
    }

};

int main(){

    DoWhileLoop();

    return 0;
}
