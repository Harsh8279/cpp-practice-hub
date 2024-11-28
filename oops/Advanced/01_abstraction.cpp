#include<iostream>
#include<string>
using namespace std;

class Vehicle{

private:

    string brand_name;
    string color;
    int max_speed;

public:

    Vehicle(string b_name, string col, int m_sp): brand_name(b_name), color(col), max_speed(m_sp) {};

    // pure virtual function (i.e. must be implemented in Child class)
    virtual void start_engine() = 0;

    // concrete method
    void displayInfo(){
        cout<<"\n-------------------Vehile Details-------------------\n";
        cout<<"Brand        : "<<brand_name<<endl;
        cout<<"Color        : "<<color<<endl;
        cout<<"Max_speed    : "<<max_speed<<endl;
    }

};

class PetrolBike : public Vehicle{

private:
    int fuel_capacity;

public:

    PetrolBike(string b_name, string c, int m_sp, int f_cap): Vehicle(b_name, c, m_sp), fuel_capacity(f_cap){};

    void start_engine(){
        cout<<"PetrolBike is Starting .....\n";
        cout<<"With Fuel Capacity : "<<fuel_capacity<<endl;

    }

};

class YoBike : public Vehicle{

private:
    int battery_capacity;
public:

    YoBike(string b_name, string c, int m_sp, int b_cap): Vehicle(b_name, c, m_sp), battery_capacity(b_cap){};

    void start_engine(){
        cout<<"YoBike is Starting .....\n";
        cout<<"With Battery Capacity : "<<battery_capacity<<endl;

    }
};

int main(){

    PetrolBike p1 = PetrolBike("Hero","Red & Black", 85, 7);
    YoBike y1 =  YoBike("Ola", "Black", 50, 10);

    Vehicle* veh_1 = &p1;
    Vehicle* veh_2 = &y1;

    veh_1->displayInfo();
    veh_2->displayInfo();

    cout<<"\n\n-------------------------------------------\n";
    veh_1->start_engine();
    veh_2-> start_engine();



    return 0;
}

/* 
 * Explanation of Abstraction:
 * 
 * 1. What is Abstraction?
 * - Abstraction is a fundamental OOP concept that shows only essential 
 *   details and hides unnecessary implementation details.
 * - It helps manage complexity by exposing only what's necessary.
 *
 * 2. Key Components in this Example:
 * - Abstract Base Class (Vehicle):
 *   - Contains common attributes (brand, color, max_speed)
 *   - Has a pure virtual function (start_engine())
 *   - Provides a common interface for all vehicles
 *
 * 3. Real-Life Analogy:
 * Imagine a Bike manufacturing process:
 * - The abstract 'Vehicle' class is like a blueprint
 * - Different Bike types (PetrolBike, YoBike) are specific implementations
 * - Users (main function) interact with vehicles through a common interface
 *
 * 4. Benefits of Abstraction:
 * - Simplifies complex systems
 * - Provides a clear, consistent interface
 * - Allows for future extensions easily
 * - Supports polymorphic behavior
 *
 * 5. Key Concepts Demonstrated:
 * - Pure Virtual Functions
 * - Polymorphism
 * - Inheritance
 * - Common Interface
 */