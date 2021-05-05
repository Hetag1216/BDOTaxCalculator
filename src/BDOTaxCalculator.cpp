#include <iostream>
#include "Calculator.h"
using namespace std;
double price;
float family_bonus;
float getVersion();
string getAuthor();
string getName();
string getDescription();
int main() {
    cout << getDescription() << endl;
    cout << getName() << "" <<  " v" << getVersion() << " by " << getAuthor() << endl;

    cout << endl;

    cout << "Insert item's price -> ";
    cin >> price;
    if (cin.fail()) {
        exit(1);
    }
    cout << "Insert family's bonus (Insert 0 to not calculate family's bonus) -> ";
    cin >> family_bonus;
    if (cin.fail()) {
        exit(1);
    }
    cout << endl;
    cout.precision(10);
    cout << "Given item's price -> " << price << endl;
    cout << endl;
    cout << "Given family's bonus -> " << family_bonus << endl;
    cout << endl;
    Calculator calc(price);
    cout << "ValuePack Disabled -> " << calc.getFinalValue(false, family_bonus) << endl;
    cout << "ValuePack Enabled -> " << calc.getFinalValue(true, family_bonus) << endl;
    cout << endl;
    exit(1);
}

float getVersion() {
    return 1.2;
}

string getAuthor() {
    return "_Hetag1216_";
}

string getName() {
    return "BDOTaxCalculator";
}

string getDescription() {
    return "An easy to use program to calculate the value of taxed items sold on the Marketplace."
    "\nDue to the Marketplace's mechanics, the displayed received loan will be equal to the loan deposited in your warehouse once the transaction is completed.";
}
