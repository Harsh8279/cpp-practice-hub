#include<iostream>
using namespace std;

class ForLoop1{

public:
    ForLoop1(){
        for(int i = 0; i<6;i++){
            cout<<"i -> "<<i<<endl;
        }
        cout<<"\n----------------------------------------\n";
    }

};

//Nested For Loop
class ForLoop2{

public:
    ForLoop2(){
        for(int i=0;i<6;i++){
            for(int j = 5;j>0;j--){
                cout<<"J -> "<<j<<endl;
            }
            cout<<"\ti -> "<<i<<endl;
        }
        cout<<"\n----------------------------------------\n";
    }

};

class ForLoop3{

public:
    ForLoop3(){
        //Note : if both condition satisfy then and then only iterate the loop
        for(int i=0, j=5; i<8,j>0; i++,j--){
            cout<<"i --> "<<i<<endl<<"\tj --> "<<j<<endl;
        }
        cout<<"\n----------------------------------------\n";

    }

};

class ForLoop4{

public:
    ForLoop4(){
        int i = 0;

        for(;;){
            if(i>5){
                break;
            }
            cout<<"i --> "<<i<<endl;
            i++;
        }

        cout<<"\n----------------------------------------\n";

    }

};

int main(){

    ForLoop1();
    ForLoop2();
    ForLoop3();
    ForLoop4();

    return 0;
}