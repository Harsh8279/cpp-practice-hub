#include<iostream>
#include<string>
using namespace std;

// Base class definition without a virtual destructor
class Base {
public:
    // Constructor of the Base class
    Base() {
        cout << "BaseClass Constructor called \n\n";
    }

    // Destructor of the Base class
    // This destructor is not virtual, so it won't call derived class destructors during polymorphic deletion.
    ~Base() {
        cout << "BaseClass Destructor called!! \n\n";
    }
};

// Derived class inheriting from Base
class Derived : public Base {
public:
    // Constructor of the Derived class
    Derived() {
        cout << "\tDerivedClass Constructor called \n\n";
    }

    // Destructor of the Derived class
    ~Derived() {
        cout << "\tDerivedClass Destructor called!! \n\n";
    }
};

// Base class with a virtual destructor
class VirtualBaseClass {
public:
    // Constructor of the VirtualBaseClass
    VirtualBaseClass() {
        cout << "VirtualBaseClass Constructor called \n\n";
    }

    // Virtual destructor of the VirtualBaseClass
    // Declaring the destructor as virtual ensures proper cleanup of derived class objects during polymorphic deletion.
    virtual ~VirtualBaseClass() {
        cout << "VirtualBaseClass Destructor called!! \n\n";
    }
};

// Derived class inheriting from VirtualBaseClass
class VirtualDerivedClass : public VirtualBaseClass {
public:
    // Constructor of the VirtualDerivedClass
    VirtualDerivedClass() {
        cout << "\tVirtualDerivedClass Constructor called \n\n";
    }

    // Virtual destructor of the VirtualDerivedClass
    // Even though it's virtual in the base class, it's good practice to explicitly declare it as virtual in the derived class.
    virtual ~VirtualDerivedClass() {
        cout << "\tVirtualDerivedClass Destructor called!! \n\n";
    }
};

int main() {
    // Creating an object of Derived class but referencing it through a Base class pointer
    Base* btr = new Derived();

    // Deleting the object
    // Only the Base class destructor is called because the destructor in Base is not virtual.
    // This can cause resource leaks if Derived class has dynamically allocated resources.
    delete btr;

    // Creating an object of VirtualDerivedClass but referencing it through a VirtualBaseClass pointer
    VirtualBaseClass* vbtr = new VirtualDerivedClass();

    // Deleting the object
    // Both VirtualDerivedClass and VirtualBaseClass destructors are called due to the virtual destructor.
    // This ensures proper cleanup of resources.
    delete vbtr;

    return 0;
}
