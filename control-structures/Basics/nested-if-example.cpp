#include<iostream>
using namespace std;

class NestedIf{

private:

    int num;

public:
    NestedIf(int n): num(n){};

    void status_check(){
        if(num!=0){
            if(num>0){
                cout<<num<<" is Positive"<<endl;
            }
            else{
                cout<<num<<" is Negative!!"<<endl;
            }
        }
        else{
            cout<<num<<" is Zero!!!"<<endl;
        }
    }

};

int main(){

    NestedIf n1 = NestedIf(5);
    NestedIf n2 = NestedIf(-10);
    NestedIf n3 = NestedIf(0);

    n1.status_check();
    n2.status_check();
    n3.status_check();

    return 0;

}