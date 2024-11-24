# C++ Object-Oriented Programming Examples

This repository contains fundamental examples demonstrating Object-Oriented Programming concepts in C++. Each example is designed to help beginners understand OOP principles through practical implementations.

## 🗂️ Examples Overview

### 1. Classes and Objects (`01_classes_and_objects.cpp`)
A practical demonstration of class implementation using a Car simulation that shows:
- Class definition with private and public members
- Constructor implementation
- Methods for object behavior (accelerate, brake)
- Object state management
- Real-world application of encapsulation

```cpp
// Example usage
Car myCar("Mustang", "Red");
myCar.accelerate();  // Increases speed
myCar.display_info(); // Shows car details
```

### 2. Access Specifiers (`02_access_specifiers.cpp`)
Demonstrates the three access levels in C++ and inheritance:
- `private`: Members only accessible within the class
- `protected`: Members accessible in the class and its derived classes
- `public`: Members accessible from anywhere
- Inheritance implementation with Parent and Child classes
- Getter and setter methods for private members

```cpp
// Example usage
Parent parent("Damodardas", "Mulchand", "Modi");
Child child("Narendra", "", "Modi", "Namo");
```

### 3. Constructors and Destructors (`03_constructors_and_destructors.cpp`)
Shows different types of constructors and destructor implementation:
- Default Constructor (no parameters)
- Parameterized Constructor (with parameters)
- Copy Constructor (creates object copy)
- Destructor (cleanup when object is destroyed)

```cpp
// Example usage
Employee e1;                        // Default constructor
Employee e2("John", "Engineering"); // Parameterized constructor
Employee e3 = e1;                   // Copy constructor
```

## 🎯 Key OOP Concepts Covered

1. **Encapsulation**
   - Data hiding using private members
   - Access control using public methods
   - Information hiding principle

2. **Inheritance**
   - Parent-Child class relationships
   - Protected member access
   - Constructor chaining

3. **Constructor Types**
   - Understanding different constructor types
   - Object initialization
   - Memory management with destructors

## 🚀 How to Run

1. Ensure you have a C++ compiler installed (g++ recommended)
2. Clone this repository:
   ```bash
   git clone [repository-url]
   ```
3. Compile any example:
   ```bash
   g++ -o program filename.cpp
   ```
4. Run the compiled program:
   ```bash
   ./program
   ```

## 📝 Learning Outcomes

After working through these examples, you should understand:
- How to create and use classes in C++
- The importance of access specifiers
- How constructors and destructors work
- Basic inheritance implementation
- Object lifecycle management
- Proper encapsulation techniques

## 🔍 Example Details

### Car Class Example
- Simulates a basic car with speed control
- Demonstrates state management
- Shows proper encapsulation

### Parent-Child Classes
- Shows inheritance in action
- Demonstrates protected member usage
- Illustrates constructor chaining

### Employee Class
- Shows all types of constructors
- Demonstrates destructor usage
- Illustrates object copying

## 🤝 Contributing

Feel free to contribute to this repository by:
1. Forking the repository
2. Creating your feature branch
3. Committing your changes
4. Creating a pull request

## 📜 License

This project is open source and available under the [MIT License](LICENSE).

## 🎓 Additional Resources

- [C++ Documentation](https://en.cppreference.com/)
- [Object-Oriented Programming Concepts](https://www.geeksforgeeks.org/object-oriented-programming-in-cpp/)
- [C++ Tutorial](https://www.w3schools.com/cpp/)