#include<iostream>
using namespace std;

class TernaryOperator{

private:

    int num;

public:

    TernaryOperator(int n): num(n){};

    void status_check(){
        num>0?cout<<num<<" is Positive\n":cout<<num<<" is Negative!!\n";
    }

};

int main(){

    TernaryOperator t1 = TernaryOperator(5);
    t1.status_check();

    TernaryOperator t2 = TernaryOperator(-10);
    t2.status_check();

    return 0;
}