#include<iostream>
using namespace std;

class WhileLoop{

public:

    WhileLoop(){

        int i = 0;

        while(i<10){
            
            cout<<"i --> "<<i<<endl;

            i++;
        }

    }

};

int main(){

    WhileLoop();

    return 0;

}
