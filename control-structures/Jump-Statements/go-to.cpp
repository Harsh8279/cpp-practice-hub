#include<iostream>
using namespace std;

class GOTOEXAMPLE{

private:

    int num;

public:

    GOTOEXAMPLE(int n):num(n){
    }

    void status_check(){
        if(num>0){
            goto positive;
        }
        else if(num==0){
            cout<<"THis is Zero!!!"<<endl;
            return;
        }

        cout<<"This Is Negative!! : "<<num<<endl;
        return;


        positive:
            cout<<"This is Positive number : "<<num<<endl;
    }


};


int main(){

    GOTOEXAMPLE g1 = GOTOEXAMPLE(85);
    GOTOEXAMPLE g2 = GOTOEXAMPLE(-99);
    GOTOEXAMPLE g3 = GOTOEXAMPLE(0);

    g1.status_check();
    g2.status_check();
    g3.status_check();

    return 0;
}
