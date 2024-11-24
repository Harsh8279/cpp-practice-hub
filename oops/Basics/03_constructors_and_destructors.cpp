#include<iostream>
#include<string>
using namespace std;

class Employee{

private:

    string name;
    string dept;

public:

    // Default Constructor - no parameters
    Employee(){
        name = "Emp_default";
        dept = "Dept_default";
        cout<<"\nDefault Constructor called for "<<name<<endl;
    }

    // Parameterized Constructor - with parameters
    Employee(string name, string dept){
        this->name = name;
        this->dept = dept;
        cout<<"\nParameterized Constructor called for "<<name<<endl;
    }

    // Copy Constructor
    Employee(const Employee &other){
        name = other.name;
        dept = other.dept;
        cout<<"\nCopy Constructor called for "<<name<<endl;
    }

    //Destructor
    ~Employee(){
        cout<<"\n\tDestructor called for "<<name<<endl;
    }

    void display_info(){

        cout<<"\n------------------Employee Details------------------\n";
        cout<<"\t Name       : "<<name<<endl;
        cout<<"\t Department : "<<dept<<endl;

    }

};

int main(){

    Employee e1;

    e1.display_info();

    Employee e2("Emp_P1","Dept_P1");

    e2.display_info();

    Employee e3("Emp_P2","Dept_P2");

    e3.display_info();

    Employee e4 = e1;

    e4.display_info();

    return 0;
}