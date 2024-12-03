#include<iostream>
using namespace std;

class Operation{

private:
    char op;

public:
    Operation(char oper): op(oper){};

    void calculate(){
        switch(op){
            case '+':
                cout<<"Hello this is Addition \n";
                break;
            
            case '-':
                cout<<"Hello this is Subtraction \n";
                break;

            case '*':
                cout<<"Hello this is Multiplication \n";
                break;

            case '/':
                cout<<"Hello this is Division \n";
                break;
            
            default:
                cout<<"\n\tWrong Operation!! \n";
                break;
        }
    }

};

int main(){


    Operation o1 = Operation('+');
    Operation o2 = Operation('-');
    Operation o3 = Operation('*');
    Operation o4 = Operation('/');
    Operation o5 = Operation('%');

    o1.calculate();
    o2.calculate();
    o3.calculate();
    o4.calculate();
    o5.calculate();

    return 0;

}