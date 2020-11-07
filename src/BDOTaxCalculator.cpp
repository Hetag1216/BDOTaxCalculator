#include <iostream>
using namespace std;
#define tax 35
double bonus;
int price;
string valuePack;
double getVersion();
string getAuthor();
string getName();
string getDescription();
void application();

int main() {
    cout << getDescription() << endl;
    cout << getName() << "" <<  " v" << getVersion() << " by " << getAuthor() << endl;
    application();

}

void application() {
    cout << endl;
    cout << "Insert item's price -> ";
    cin >> price;
    cout << "Given item's price -> " << price << endl;
    int taxedPrice = price * tax / 100;
    cout << "\nBasic Marketplace's tax -> " << tax << endl;
    taxedPrice = price - taxedPrice;
    cout << "Marketplace's taxed value (without ANY bonuses) -> " << taxedPrice << endl;
    cout << "\nIs value pack enabled? (true/false) -> ";
    cin >> valuePack;
    if (valuePack == "true") {
        bonus = bonus + 1.3;
    }
    cout << "\nFinal bonus -> " << bonus << endl;
    int result = taxedPrice;
    if (bonus != 0) {
    result = taxedPrice * bonus;
    }
    cout << "Received loan after Marketplace's taxation -> " << result;
}

double getVersion() {
    return 1.0;
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