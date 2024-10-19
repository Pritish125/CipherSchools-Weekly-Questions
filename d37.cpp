#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;
    int speed;

public:
    // Constructor to initialize brand, model, and year
    Car(string b, string m, int y) : brand(b), model(m), year(y), speed(0) {}

    // Getters for brand, model, year, and speed
    string getBrand() { return brand; }
    string getModel() { return model; }
    int getYear() { return year; }
    int getSpeed() { return speed; }

    // Setter for speed
    void setSpeed(int s) { speed = s; }

    // Method to increase speed
    void increaseSpeed(int amount) {
        speed += amount;
    }

    // Method to decrease speed
    void decreaseSpeed(int amount) {
        speed -= amount;
        if (speed < 0) {
            speed = 0;  // Speed should not go below 0
        }
    }
};

int main() {
    // Create a Car object
    Car myCar("Toyota", "Corolla", 2020);

    // Print initial car details
    cout << "Brand: " << myCar.getBrand() << endl;
    cout << "Model: " << myCar.getModel() << endl;
    cout << "Year: " << myCar.getYear() << endl;
    cout << "Speed: " << myCar.getSpeed() << " km/h" << endl;

    // Increase speed by 50
    myCar.increaseSpeed(50);
    cout << "\nAfter increasing speed by 50:" << endl;
    cout << "Speed: " << myCar.getSpeed() << " km/h" << endl;

    // Decrease speed by 20
    myCar.decreaseSpeed(20);
    cout << "\nAfter decreasing speed by 20:" << endl;
    cout << "Speed: " << myCar.getSpeed() << " km/h" << endl;

    // Decrease speed by 40 (should not go below 0)
    myCar.decreaseSpeed(40);
    cout << "\nAfter decreasing speed by 40:" << endl;
    cout << "Speed: " << myCar.getSpeed() << " km/h" << endl;

    return 0;
}
