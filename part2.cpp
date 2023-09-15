#include <iostream>
#include <vector>

int countDuplicates(const std::vector<int>& numbers) {
    int duplicates = 0;

    // Iterate through the numbers and compare each number to the next.
    for (size_t i = 0; i < numbers.size() - 1; ++i) {
        if (numbers[i] == numbers[i + 1]) {
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

    std::cout << "Enter the sorted integers:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> value;
        numbers.push_back(value);
    }

    std::cout << "Total number of duplicates: " << countDuplicates(numbers) << std::endl;

    return 0;
}


// Given that the list is sorted, it's easier to count duplicates since all identical 
// numbers will be adjacent to each other. We can simply iterate through the list 
// once, comparing each number to the next.
// Algorithm Analysis:

// We're iterating through the list only once, comparing each number to 
// the next. This single loop runs in linear time, O(n).
// There's no other significant work being done in the algorithm.
// The worst-case time complexity for this algorithm is O(n).

// Comparison to Previous Algorithm and Explanation:

// Compared to the previous algorithm which was 𝜽(n^2), this algorithm 
// is much more efficient with a time complexity of O(n). The sorted nature 
// of the list is what allows for this improvement.

// When a list is sorted, all duplicates will be adjacent to each other.
// This means that we only need to perform a single pass through the list 
// to count all duplicates. On the other hand, with an unsorted list, you 
// have to compare each element against potentially every other element to 
// identify duplicates, which results in a 𝜽(n^2) complexity. Sorting 
// transforms the problem and allows us to solve it more efficiently.