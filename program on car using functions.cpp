
#include <iostream>
#include <string>
using namespace std;

// Declare functions before main
void startCar() {
    cout << "The car has started.\n";
}

void accelerateCar(int speed) {
    cout << "The car is now going at " << speed << " km/h.\n";
}

void displayCarInfo(string make, string model, int year) {
    cout << "Car Information:\n";
    cout << "Make: " << make << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
}

int main() {
    string make = "BMW";
    string model = "M5";
    int year = 2015;
    int speed = 60; // Initialize speed

    startCar();
    accelerateCar(speed);
    displayCarInfo(make, model, year);

    return 0;
}
