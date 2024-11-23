#include <iostream>
#include <string>
using namespace std;

// Define the Car class
class Car {
private:
    // Private member variables
    string brand;  // Brand of the car
    string color;  // Color of the car
    int speed;     // Current speed of the car

public:
    // Constructor to initialize the car's brand and color, and set the initial speed to 0
    Car(string brand_name, string color_of_car) {
        brand = brand_name;
        color = color_of_car;
        speed = 0;
    }

    // Method to increase the speed of the car
    void accelerate() {
        speed += 10;
        cout << "Accelerating: Current speed is " << speed << " km/h.\n";
    }

    // Method to decrease the speed of the car
    void brake() {
        if (speed > 10) {
            speed -= 10;
            cout << "Braking: Current speed is " << speed << " km/h.\n";
        } else {
            speed = 0;
            cout << "Braking: Car has stopped.\n";
        }
    }

    // Method to display the car's information
    void display_info() {
        cout << "\nCar Details:\n";
        cout << "Brand: " << brand << endl;
        cout << "Color: " << color << endl;
        cout << "Current Speed: " << speed << " km/h\n";
        cout << "-----------------------------------------------------------\n";
    }
};

// Main function
int main() {
    // Create a Car object and initialize it with brand and color
    Car myCar("Mustang", "Red");

    // Display initial car details
    myCar.display_info();

    // Accelerate the car multiple times
    for (int i = 0; i < 10; ++i) {
        myCar.accelerate();
    }

    // Display car details after acceleration
    myCar.display_info();

    // Apply brakes multiple times
    for (int i = 0; i < 4; ++i) {
        myCar.brake();
    }

    // Display car details after braking
    myCar.display_info();

    return 0;
}
