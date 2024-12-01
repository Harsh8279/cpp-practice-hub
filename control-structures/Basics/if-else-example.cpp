#include<iostream>
#include<string>
using namespace std;

class AgeValidator{

private:

    int age;

public:
    AgeValidator(int user_age):age(user_age){}

    bool is_valid(){
        if(age>18){
            cout<<age<<" is Valid"<<endl;
            return true;
        }
        else{
            cout<<age<<" is InValid!!"<<endl;
            return false;
        }
    }

};

class NumberValidator{

private:
    int num;

public:
    NumberValidator(int n): num(n){};

    void get_status_of_number(){
        if(num>0){
            cout<<num<<" is Positive Number"<<endl;
        }
        else if(num<0){
            cout<<num<<" is Negative Number"<<endl;
        }
        else{
            cout<<num<<" is Zero!!"<<endl;
        }
    }

};

int main(){

    AgeValidator a1 = AgeValidator(12);
    a1.is_valid();

    AgeValidator a2 = AgeValidator(19);
    a2.is_valid();

    NumberValidator n1 = NumberValidator(5);
    NumberValidator n2 = NumberValidator(-10);
    NumberValidator n3 = NumberValidator(0);

    n1.get_status_of_number();
    n2.get_status_of_number();
    n3.get_status_of_number();
}