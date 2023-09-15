#include <iostream>
#include <vector>

int countDuplicates(const std::vector<int>& numbers) {
    int duplicates = 0;

    // Outer loop iterates through all numbers.
    for (size_t i = 0; i < numbers.size(); ++i) {

        // The flag checks if the current number has been seen before in the list.
        bool seenBefore = false;

        // Inner loop checks the current number against all numbers before it.
        for (size_t j = 0; j < i; ++j) {
            if (numbers[i] == numbers[j]) {
                seenBefore = true;
                break;
            }
        }

        // If the current number was seen before, increase the count.
        if (seenBefore) {
            duplicates++;
        }
    }

    return duplicates;
}

int main() {
    std::vector<int> numbers;
    int n, value;

    std::cout << "Enter the number of integers: ";
    std::cin >> n;

    std::cout << "Enter the integers:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> value;
        numbers.push_back(value);
    }

    std::cout << "Total number of duplicates: " << countDuplicates(numbers) << std::endl;

    return 0;
}


// Algorithm Analysis:

// The algorithm works by comparing each number in the list with all numbers 
// that come before it. If the number has been seen before, it counts as a duplicate.

// The outer loop iterates over the list of numbers. In the worst-case scenario, it runs n times.
// The inner loop iterates, in the worst case, from 0 to i - 1. So, the first 
// iteration of the inner loop runs 0 times, the second 1 time, the third 2 times, ... , the last n - 1 times.
// If you sum up the number of times the inner loop runs over the course of the 
// program: 0 + 1 + 2 + ... + n - 1 = n(n - 1)/2, which is O(n^2).
// Since there's no other significant work being done outside these loops, 
// the algorithm's time complexity is 𝜽(n^2).
// This justifies the 𝜽(n^2) order as for every element in the list, we are potentially 
// comparing it with every other element in the list. The two nested loops result in quadratic behavior.