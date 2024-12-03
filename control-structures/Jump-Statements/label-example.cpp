#include<iostream>
using namespace std;

class Labeled{

private:
    int num;

public:
    Labeled(int n): num(n){};

    void status_check(){
        if(num%2==0){
            goto even;
        }
        else{
            goto odd;
        }


        even:
            cout<<"This is Even Number : "<<num<<endl;
            goto end;
        odd:
            cout<<"This is Odd Number : "<<num<<endl;
            goto end;
    
        end:
            cout<<"\nThis is ENd!!"<<endl;
            return;

    }


};

int main(){

    Labeled l1 = Labeled(6);
    Labeled l2 = Labeled(9);

    l1.status_check();
    l2.status_check();

    return 0;
}