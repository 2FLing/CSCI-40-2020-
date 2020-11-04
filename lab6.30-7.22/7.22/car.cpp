#include <iostream>
#include <math.h>
#include "Car.h"
using namespace std;

void Car::SetModelYear(int userYear) {
    modelYear = userYear;
}

int Car::GetModelYear() const {
    return modelYear;
}

// TODO: Implement SetPurchasePrice() function
void Car::SetPurchasePrice(int userPrice)
{
    price = userPrice;
}
// TODO: Implement GetPurchasePrice() function
int Car::GetPurchasePrice()
{
    return price;
}
void Car::CalcCurrentValue(int currentYear) {
    double depreciationRate = 0.15;
    int carAge = currentYear - modelYear;

    // Car depreciation formula
    currentValue = (int)
        round(price * pow((1 - depreciationRate), carAge));
}
void Car::PrintInfo()
{
    cout << "Car's information:" << endl;
    cout << "   Model year: " << modelYear << endl;
    cout << "   Purchase price: " << price << endl;
    cout << "   Current value: " << currentValue << endl;
}

// TODO: Implement PrintInfo() function to output modelYear, purchasePrice, and 
// currentValue