#include <iostream>
#include <string>
using namespace std;
class RetailItem {
private:
    string description;
    int unitsOnHand;
    double price;

public:
    // Constructor
    RetailItem(string desc, int units, double itemPrice)
        : description(desc), unitsOnHand(units), price(itemPrice) {}

    // Accessor functions
    string getDescription() const {
        return description;
    }

    int getUnitsOnHand() const {
        return unitsOnHand;
    }

    double getPrice() const {
        return price;
    }

    // Mutator functions
    void setDescription(string desc) {
        description = desc;
    }

    void setUnitsOnHand(int units) {
        unitsOnHand = units;
    }

    void setPrice(double itemPrice) {
        price = itemPrice;
    }
};

int main() {
    // Create three RetailItem objects
    RetailItem item1("Jacket", 12, 59.95);
    RetailItem item2("Designer Jeans", 40, 34.95);
    RetailItem item3("Shirt", 20, 24.95);

    // Display information for each item
    cout << "Item #1:\n";
    cout << "Description: " << item1.getDescription() << "\n";
    cout << "Units on Hand: " << item1.getUnitsOnHand() << "\n";
    cout << "Price: $" << item1.getPrice() << "\n\n";

    cout << "Item #2:\n";
    cout << "Description: " << item2.getDescription() << "\n";
    cout << "Units on Hand: " << item2.getUnitsOnHand() << "\n";
    cout << "Price: $" << item2.getPrice() << "\n\n";

    cout << "Item #3:\n";
    cout << "Description: " << item3.getDescription() << "\n";
    cout << "Units on Hand: " << item3.getUnitsOnHand() << "\n";
    cout << "Price: $" << item3.getPrice() << "\n";

    return 0;
}
