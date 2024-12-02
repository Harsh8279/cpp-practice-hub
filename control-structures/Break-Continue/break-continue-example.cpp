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

int main(){

    BreakExample b1 = BreakExample(6);
    BreakExample b2 = BreakExample(1);
    BreakExample b3 = BreakExample(3);
    BreakExample b4 = BreakExample(-10);

    b1.status_check();
    b2.status_check();
    b3.status_check();
    b4.status_check();

    return 0;

}