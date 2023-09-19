#include <iostream>

using namespace std;

int countDuplicates(int arr[], int n) {
  if (n < 2)
    return 0; // No duplicates if less than 2 elements

  int count = 0;

  for (int i = 0; i < n - 1;
       i++) { // Iterate from first element to second to last element
    if (arr[i] == arr[i + 1]) // Because arr is sorted, the duplicate can only
                              // be in the following index
      count++;
  }

  return count;
}

int main() {
  int n;
  cout << "Enter the number of elements in the list: ";
  cin >> n;

  int arr[n];
  cout << "Enter the sorted elements of the list:\n";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int duplicates = countDuplicates(arr, n);

  cout << "Total number of duplicates: " << duplicates << endl;

  return 0;
}
