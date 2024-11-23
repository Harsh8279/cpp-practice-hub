#include<iostream>
#include<string>
using namespace std;

class Parent{

//Only accessible for this class only
private:
    string first_name;
    string middle_name;

//can Accessible in child class
protected:
    string last_name;

//can Accessible from anywhere
public:

    Parent(string f_name, string middle_name, string l_name){
        first_name = f_name;
        this->middle_name = middle_name;
        last_name = l_name;

        cout<<"Parent Called!!"<<endl;
    }

    // setting private members using public methods
    void set_first_name(string f_name){
        first_name = f_name;
    }

    // setting private members using public methods
    void set_middle_name(string m_name){
        middle_name = m_name;
    }

    // get private member using public methods
    string get_first_name(){
        return first_name;
    }

    // get private member using public methods
    string get_middle_name(){
        return middle_name;
    }

    void display_full_details(){
        cout<<"\n--------------Details--------------\n";
        cout<<"Full Name : "<<first_name<<" "<<middle_name<<" "<<last_name<<endl;
    }

};

// inheritting parent class
class Child : public Parent{

//Only accessible for this class only
private:

    string nick_name;

public:
    // calling Parent class constructor at initialization of Child class constructor
    Child(string f_name, string m_name, string l_name, string n_name) : Parent(f_name, m_name, l_name){
        nick_name = n_name;

        cout<<"Child called!!"<<endl;
    }
    // display all the details with the use of public methods of parent class
    void display_child_details(){
        cout<<"-------------Child Details-------------\n";
        cout<<"Nick Name : "<<nick_name<<endl;
        cout<<"Family Name : "<<last_name<<endl;
        cout<<"First Name : "<<get_first_name()<<endl;
        cout<<"Middle Name : "<<get_middle_name()<<endl;
    }

};

int main(){

    Parent parent("Damodardas","Mulchand", "Modi");

    parent.display_full_details();

    Child child1("", parent.get_first_name(), "Modi", "Namo");

    child1.display_child_details();

    child1.set_first_name("Narendra");
    child1.display_child_details();

    Child child2("", parent.get_first_name(), "Modi", "Bhai");

    child2.display_child_details();

    child2.set_first_name("Prahlad");
    child2.display_child_details();

    return 0;
}