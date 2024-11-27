#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag; // Private members for the real and imaginary parts

public:
    // Constructor to initialize a complex number
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Friend function to overload the '+' operator
    friend Complex operator+(const Complex& c1, const Complex& c2);

    // Function to display the complex number
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Friend function definition
Complex operator+(const Complex& c1, const Complex& c2) {
    // Access private members of c1 and c2
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(3.4, 2.1); // First complex number: 3.4 + 2.1i
    Complex c2(1.6, 3.3); // Second complex number: 1.6 + 3.3i

    Complex c3 = c1 + c2; // Add c1 and c2 using overloaded '+'

    cout << "c1: ";
    c1.display();
    cout << "c2: ";
    c2.display();
    cout << "c3 (c1 + c2): ";
    c3.display();

    return 0;
}
