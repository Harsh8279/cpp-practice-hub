#include<iostream>
#include<string>
using namespace std;

// Parent class
class Animal{

// private members i.e. can not access out side this class
private:
    string name;
    int age;

// protected members i.e. can access by Child class 
protected:
    string sound;

public:

    // Constructor calling in different way
    Animal(string n, int a, string s) : name(n), age(a), sound(s){

        cout<<"Parent Constructor callled!!"<<endl;
    }

    // displaying information - public method
    void display_info(){
        cout<<"\n-------------------Animal Detail-------------------\n";
        cout<<"name : "<<name<<"  Age : "<<age<<endl;
        cout<<"\n---------------------------------------------------\n";
    }

    // public but virtual method becasue This method can be override in Child class
    virtual void make_sound(){
        cout<<"Animal Sound : "<<sound<<endl;
    }

    // public method method to access private members
    string get_name(){
        return name;
    }

};

// Child Class
class Dog : public Animal{

// private members can only access within this class
private:
    string type;

public:

    // Constructor calling parent Constructor and setting new param in different way
    Dog(string name, int age, string sound, string type) : Animal(name, age, sound), type(type){
        cout<<"Child Constructor called!!"<<endl;
    }

    // override the method override is not necessary to write but It's good practice 
    void make_sound() override{
        cout<<type<<" "<<get_name()<<" is barking "<<endl;

    }

};

int main(){

    Animal h("Horse",25, "Heee heee");

    h.display_info();
    h.make_sound();

    Dog d("Billo Rani", 5, "bow bow", "Labrador");

    d.display_info();
    d.make_sound();

    return 0;
}