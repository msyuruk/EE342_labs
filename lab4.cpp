#include <iostream>

int main() {

int numProducts;
std::cout << "Enter the number of products: ";
std::cin >> numProducts;

int *quantity = new int[numProducts];
double *price = new double[numProducts];

for (int i = 0; i < numProducts; i++)
{
    std::cout << "Enter quantity of product " << i+1 << ": ";
    std::cin >> quantity[i];
    std::cout << "Enter price of product " << i+1 << ": ";
    std::cin >> price[i];
}

std::cout << "Quantity array: ";
for (int i = 0; i < numProducts; i++)
{
    std::cout << quantity[i] << " ";

}
std::cout << "\n";

std::cout << "Price array: ";
for (int i = 0; i < numProducts; i++)
{
    std::cout << price[i] << " ";

}

std::cout << "\n";
delete[] quantity;
delete[] price;

};