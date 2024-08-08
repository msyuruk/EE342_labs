#include <iostream>

int main() {
    double population_village1, popolation_village2,speedvillage1,speedvillage2;
    //increment for village1
    std::cout << "Enter the population for village1: ";
    std::cin >> population_village1;
    //increment for village2
    std::cout << "Enter the population for village2: ";
    std::cin >> popolation_village2;

    // village1 has to be bigger than village2
    if (population_village1 < popolation_village2) {
        std::cout << "Population of village 1 has to be larger." << std::endl;
        return 1;
    }
    // take input for speed of village1
    std::cout << "Enter the speed for village1: ";
    std::cin >> speedvillage1;
    // take input for speed of village2
    std::cout << "Enter the speed for village2: ";
    std::cin >> speedvillage2;

    // village2 should be able to catch village1
    if (speedvillage2 <= speedvillage1) {
        std::cout << "Village 2 will never catch village 1." << std::endl;
        return 1;
    }
    // calculate the years
    int years = 0;
    while (population_village1 > popolation_village2) {
        population_village1 += (speedvillage1);
        popolation_village2 += (speedvillage2);
        years++;
    }

    std::cout << "Village 2 will catch village 1 in " << years << " years." << std::endl;
    return 0;
}
