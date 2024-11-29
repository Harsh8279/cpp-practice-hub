# 🐾 C++ Inheritance Demonstration

## Overview
This program showcases the fundamental concepts of inheritance in C++ using an `Animal` base class and a `Dog` derived class.

## 🌟 Key Concepts Demonstrated
- Base class (`Animal`) with protected and public members
- Derived class (`Dog`) inheriting from base class
- Constructor chaining
- Method overriding
- Accessing base class methods

## 🔍 Program Breakdown
### Base Class: `Animal`
- Stores basic animal information (name, age, sound)
- Provides virtual methods for polymorphic behavior
- Demonstrates encapsulation with private members

### Derived Class: `Dog`
- Inherits from `Animal`
- Adds specific dog-related attributes
- Overrides `make_sound()` method with dog-specific behavior

## 💡 Learning Highlights
- Inheritance allows code reuse and extension
- Virtual methods enable runtime polymorphism
- Constructors can call parent class constructors

## 🚀 How to Compile and Run
```bash
g++ 01_inheritance.cpp -o inheritance
./inheritance
```

## Example Output
```
Parent Constructor called!!
-------------------Animal Detail-------------------
name : Horse  Age : 25
---------------------------------------------------
Animal Sound : Heee heee
Child Constructor called!!
-------------------Animal Detail-------------------
name : Billo Rani  Age : 5
---------------------------------------------------
Labrador Billo Rani is barking 
```

## 📘 Learning Resources
- [C++ Inheritance Explained](https://www.geeksforgeeks.org/inheritance-in-c/)
- [Object-Oriented Programming in C++](https://www.cplusplus.com/doc/tutorial/classes/)


# 🔄 C++ Polymorphism Exploration

## Overview
This program illustrates two types of polymorphism in C++: Compile-Time (Static) and Run-Time (Dynamic) Polymorphism.

## 🌈 Key Concepts Demonstrated
- Compile-Time Polymorphism (Function Overloading)
- Run-Time Polymorphism (Method Overriding)
- Virtual Functions
- Inheritance-based Polymorphism

## 🔍 Program Breakdown
### Compile-Time Polymorphism
#### `CompileTimePolyMorphism` Class
- Demonstrates function overloading
- `add()` method with different parameter types and counts
- Compiler determines which method to call at compile time

### Run-Time Polymorphism
#### Base Class: `Shape`
- Uses virtual method `displayName()`
- Allows dynamic method resolution

#### Derived Classes: `Circle` and `Square`
- Override `displayName()` method
- Demonstrate runtime polymorphic behavior

## 💡 Learning Highlights
- Overloading allows multiple methods with same name
- Virtual functions enable dynamic method dispatch
- Polymorphism provides flexibility in object-oriented design

## 🚀 How to Compile and Run
```bash
g++ 02_polymorphism.cpp -o polymorphism
./polymorphism
```

## Example Output
```
=== Compile-Time Polymorphism ===
Integer Addition : 9
Double Addition : 10.4521
String Addition : Harsh Patel
Three Addition : 6

=== Run-Time Polymorphism ===
This is Circle
This is Square
```

## 📘 Learning Resources
- [Polymorphism in C++](https://www.geeksforgeeks.org/polymorphism-in-c/)
- [Function Overloading vs Overriding](https://www.geeksforgeeks.org/difference-between-method-overloading-and-method-overriding-in-java/)

# 🧮 C++ Operator Overloading Example

## Overview
This program demonstrates operator overloading in C++ using a `Complex` number class.

## 🌟 Key Concepts Demonstrated
- Operator Overloading
- Friend Functions
- Complex Number Arithmetic
- Object-Oriented Programming Techniques

## 🔍 Program Breakdown
### `Complex` Class
- Represents complex numbers with real and imaginary parts
- Private members for encapsulation
- Overloaded `+` operator using friend function

### Friend Function Approach
- `operator+()` can access private members
- Enables intuitive complex number addition
- Allows adding complex numbers using `+` operator

## 💡 Learning Highlights
- Operator overloading makes code more readable
- Friend functions provide controlled access to private members
- Custom arithmetic operations for user-defined types

## 🚀 How to Compile and Run
```bash
g++ 03_operator_overloading.cpp -o operator_overloading
./operator_overloading
```

## Example Output
```
c1: 3.4 + 2.1i
c2: 1.6 + 3.3i
c3 (c1 + c2): 5 + 5.4i
```

## 📘 Learning Resources
- [C++ Operator Overloading](https://www.geeksforgeeks.org/operator-overloading-c/)
- [Friend Functions in C++](https://www.cplusplus.com/doc/tutorial/classes2/)

## 🔬 Advanced Challenge
Try implementing other operators:
- `-` (subtraction)
- `*` (multiplication)
- `==` (comparison)
- `<<` (stream insertion)