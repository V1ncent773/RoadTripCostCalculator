#include <iostream>
using namespace std;

int main() {
    int numPassengers;
    double totalDistanceKM;
    double fuelEfficiency;
    double fuelPrice;
    double mealCPP;
    double totalCost; // grand total everyone together
    double costPerPerson; // for each person
    int fuelUsed;
    int mealTotalCost;
    cout << "How many passengers are there? ";
    cin >> numPassengers;

    cout << "Whats the total distance traveled? (km) ";
    cin >> totalDistanceKM;

    cout << "Whats the fuel efficiency? ";
    cin >> fuelEfficiency;

    cout << "Whats the fuel price? ";
    cin >> fuelPrice;

    cout << "How much for each persons meal? ";
    cin >> mealCPP;

    // calculate the fuel used during the road trip
    fuelUsed = (totalDistanceKM / 100) * fuelEfficiency;

    fuelPrice = fuelUsed * fuelPrice;

    // TODO - Calculate cost of fuel per person... maybe

    // Calculate the total meal cost
    mealCPP = mealCPP * numPassengers;

    totalCost = mealTotalCost * fuelPrice;

    costPerPerson = totalCost * numPassengers;


    cout << "===========================================================" << endl;
    cout << "Number of passengers: " << numPassengers << endl;
    cout << "Total distance traveled: " << totalDistanceKM << " km " << endl;
    cout << "Fuel efficiency: " << fuelEfficiency << " L/100km " << endl;
    cout << "Fuel used: " << fuelUsed << " L " << endl;
    cout << "Cost of fuel per person $" << fuelPrice/numPassengers << endl;
    cout << "Meal cost per person and group: $" << mealCPP << "and $" << mealTotalCost << endl;
    cout << "===========================================================" << endl;
    cout << "Grand Total: $" << totalCost << endl;
    cout << "Total cost per person $" << costPerPerson << endl;
    cout << "Thank you for the road trip! E-transfer the money to vincent.liu@rdcrs.ca" << endl;
    return 0;
}