// CSC2034
// 02/20/2024
//Richard Sharp

#include <iostream>
#include <iomanip> // for std::setprecision

using namespace std;

int main() {
    char vehicleType;
    int hoursParked;
    double charge = 0.0;

    // Prompt for and input the type of vehicle
    cout << "Enter the type of vehicle (c for car, b for bus, t for truck): ";
    cin >> vehicleType;

    // Prompt for and input the number of hours parked
    cout << "Enter the number of hours parked: ";
    cin >> hoursParked;

    // Determine the charge based on vehicle type
    switch (vehicleType) {
    case 'c': // Car
        charge = 2.0 * hoursParked;
        break;
    case 'b': // Bus
        charge = 3.0 * hoursParked;
        break;
    case 't': // Truck
        charge = 4.0 * hoursParked;
        break;
    default:
        cout << "Invalid vehicle type entered." << endl;
        return 1; // Exit with error
    }

    // Display the total parking charge
    cout << fixed << setprecision(2); // Format output to 2 decimal places
    cout << "Total parking charge: $" << charge << endl;

    return 0; // Successful completion
}
