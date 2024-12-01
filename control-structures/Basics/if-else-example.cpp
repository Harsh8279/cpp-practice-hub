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

int main(){

    AgeValidator a1 = AgeValidator(12);
    a1.is_valid();

    AgeValidator a2 = AgeValidator(19);
    a2.is_valid();

}