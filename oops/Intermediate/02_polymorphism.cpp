#include<iostream>
#include<string>
using namespace std;

// function Overloading
class CompileTimePolyMorphism{

public:

    int add(int a, int b){
        return a+b;
    }

    double add(double a, double b){
        return a+b;
    }

    string add(string a, string b){
        return a+b;
    }

    int add(int a, int b, int c){
        return a+b+c;
    }

};

// method overriding
class Shape{

public:
    virtual void displayName(){
        cout<<"This is Shape\n";
    }

};

class Circle : public Shape{

public:

    void displayName() override{
       cout<<"This is Circle\n"; 
    }

};

class Square : public Shape{

public:

    void displayName() override{
       cout<<"This is Square\n"; 
    }

};

int main(){

    CompileTimePolyMorphism compPoly;

    cout << "=== Compile-Time Polymorphism ===\n";
    cout<<"Integer Addition : "<<compPoly.add(4,5)<<endl;
    cout<<"Double Addition : "<<compPoly.add(4.60,5.8520741)<<endl;
    cout<<"String Addition : "<<compPoly.add("Harsh"," Patel")<<endl;
    cout<<"Three Adition : "<<compPoly.add(1,2,3)<<endl;

    cout << "\n=== Run-Time Polymorphism ===\n";

    Shape* shape;

    Circle cir;
    Square sq;

    shape = &cir;
    shape->displayName();

    shape = &sq;
    shape->displayName();


    return 0;
}