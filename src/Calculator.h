#include <iostream>
#include <limits>
class Calculator {
    public:
    double base_price;
    const int tax = 35;
    Calculator(long price) {
        this ->base_price = price;
        applyMarketTax();
    }

    double getTaxedPrice() {
        double r = base_price - taxed_price;
        return r;
    }

    double getValuePackValue() {
        double vp_bonus = (getTaxedPrice() * 30) / 100;
        return getTaxedPrice() + vp_bonus;
    }

    double getFinalValue(bool ValuePack, float family_bonus) {
        if (family_bonus > 0) {
            float f = getTaxedPrice() * family_bonus / 100;
            if (ValuePack) {
                return getValuePackValue() + f;
             } else {
                return getTaxedPrice() + f;
            }
        } else {
            if (ValuePack) {
                return getValuePackValue();
            } else {
                return getTaxedPrice();
            }
        }
    }

    private:
    double taxed_price;
    void applyMarketTax() {
        taxed_price = (base_price * tax) / 100;
    }
};