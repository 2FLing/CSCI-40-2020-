#ifndef CARH
#define CARH

class Car {
private:
    int modelYear;
    // TODO: Declare purchasePrice member (int)
    int price;
    int currentValue;

public:
    void SetModelYear(int userYear);

    int GetModelYear() const;

    // TODO: Declare SetPurchasePrice() function
    void SetPurchasePrice(int);
    // TODO: Declare GetPurchasePrice() function
    int GetPurchasePrice();
    void CalcCurrentValue(int currentYear);

    // TODO: Declare PrintInfo() method to output modelYear, purchasePrice, and 
    // currentValue
    void PrintInfo();

};
#endif