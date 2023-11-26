#include <iostream>
#include <string>
using namespace std;
class InventoryItem {
private:
    string itemName;
    double cost;
    int onHand;

public:
    // Constructors
    InventoryItem() : itemName(""), cost(0.0), onHand(0) {}
    InventoryItem(string name, double itemCost, int quantity) : itemName(name), cost(itemCost), onHand(quantity) {}

    // Accessor functions
    string getItemName() const {
        return itemName;
    }

    double getItemCost() const {
        return cost;
    }

    int getOnHand() const {
        return onHand;
    }

    // Mutator function
    void setOnHand(int quantity) {
        onHand = quantity;
    }
};

class CashRegister {
private:
    InventoryItem item;

public:
    // Constructor
    CashRegister(const InventoryItem& inventoryItem) : item(inventoryItem) {}

    // Function to process a purchase
    void processPurchase(int quantity) {
        // Get the item's cost and calculate unit price with 30% profit
        double unitPrice = item.getItemCost() * 1.3;

        // Calculate purchase subtotal
        double subtotal = unitPrice * quantity;

        // Calculate sales tax (6%)
        double tax = subtotal * 0.06;

        // Calculate total
        double total = subtotal + tax;

        // Display purchase details
        cout << "Purchase Subtotal: $" << subtotal << endl;
        cout << "Sales Tax: $" << tax << endl;
        cout << "Total: $" << total << endl;

        // Update onHand quantity
        int updatedQuantity = item.getOnHand() - quantity;
        item.setOnHand(updatedQuantity);
    }
};

int main() {
    // Example usage
    InventoryItem item("Widget", 10.0, 50);
    CashRegister cashRegister(item);

    // Get user input for quantity
    int quantity;
    cout << "Enter the quantity to purchase: ";
    cin >> quantity;

    // Process the purchase and display results
    cashRegister.processPurchase(quantity);

    // Display updated onHand quantity
    cout << "Updated onHand quantity: " << item.getOnHand() << endl;

    return 0;
}
