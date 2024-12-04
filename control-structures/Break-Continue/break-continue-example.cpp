#include<iostream>
using namespace std;

class BreakExample{

private:
    int num;

public:
    BreakExample(int n): num(n){};

    void status_check(){
        while(num>0){
            cout<<"Num : "<<num<<endl;
            if(num>5){
                break;
            }
            num++;
        }
        cout<<"\n---------------------------------\n";
    }

};

class ContinueExample{

private:
    int num;

public:

    ContinueExample(int n):num(n){};

    void status_check(){
        while(num>0){

            num++;
            if(num>6 && num<10){
                continue;
            }
            cout<<"Num : "<<num<<endl;

            if(num>13){
                break;
            }
        }
        cout<<"\n---------------------------------\n";
    }

};

int main(){

    cout<<"\n\n-------------------Break Part-------------------\n";

    BreakExample b1 = BreakExample(6);
    BreakExample b2 = BreakExample(1);
    BreakExample b3 = BreakExample(3);
    BreakExample b4 = BreakExample(-10);

    b1.status_check();
    b2.status_check();
    b3.status_check();
    b4.status_check();

    cout<<"\n\n-------------------Continue Part-------------------\n";

    ContinueExample c1 = ContinueExample(8);
    ContinueExample c2 = ContinueExample(10);
    ContinueExample c3 = ContinueExample(1);
    ContinueExample c4 = ContinueExample(-5);

    c1.status_check();
    c2.status_check();
    c3.status_check();
    c4.status_check();

    return 0;

}
