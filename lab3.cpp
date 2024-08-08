#include <iostream>

template <typename SomeType>
SomeType findMax(SomeType a, SomeType b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

template <typename SomeType>
SomeType findMax(SomeType arr[], int size) {
    SomeType max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    
    int arr[] = {1, 2, 3, 4, 5};
    // Initialize template
    std::cout << findMax<int>(3, 4) << std::endl;
    std::cout << findMax<int>(arr, 5) << std::endl;

    return 0;
}
