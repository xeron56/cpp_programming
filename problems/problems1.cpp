#include <iostream>

using namespace std;

int main() {
  // Declare variables to store the quantity, price, and discount of each item
  int quantity;
  float price;
  float discount;

  // Get the quantity, price, and discount of each item from the user
  cout << "Enter the quantity of the item: ";
  cin >> quantity;
  cout << "Enter the price of the item: ";
  cin >> price;
  cout << "Enter the discount of the item: ";
  cin >> discount;

  // Calculate the total cost of the order
  float totalCost = quantity * price * (1 - discount);

  // Get the shipping method from the user
  int shippingMethod;
  cout << "Enter the shipping method (1 for standard, 2 for express): ";
  cin >> shippingMethod;

  // Calculate the shipping cost
  float shippingCost;
  if (shippingMethod == 1) {
    shippingCost = 5.00;
  } else if (shippingMethod == 2) {
    shippingCost = 10.00;
  } else {
    shippingCost = 0.00;
  }

  // Calculate the total cost of the order, including shipping
  float totalCostWithShipping = totalCost + shippingCost;

  // Print the total cost of the order to the user
  cout << "The total cost of your order is: " << totalCostWithShipping << endl;

  return 0;
}
