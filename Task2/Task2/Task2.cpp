/*Tsk2. Write a function that takes two pointers to arrays of integers and their sizes, 
and returns a pointer to a new array that contains only those elements that are in both arrays.*/

#include <iostream>

using namespace std;

int* commonValues(int* arr1, int size1, int* arr2, int size2, int* resultSize);

int main() {

    // Get size and values for array 1
    int size1;
    cout << "Enter size of array 1: ";
    cin >> size1;

    int* arr1 = new int[size1];
    cout << "Enter values for array 1: ";
    for (int i = 0; i < size1; i++) {

        cin >> *(arr1 + i);
    }

    // Get size and values for array 2
    int size2;
    cout << "Enter size of array 2: ";
    cin >> size2;

    int* arr2 = new int[size2];
    cout << "Enter values for array 2: ";
    for (int i = 0; i < size2; i++) {

        cin >> *(arr2 + i);
    }

    // Find common values in the two arrays
    int resultSize = 0;
    int* result = commonValues(arr1, size1, arr2, size2, &resultSize);

    // Print out the resulting array of common values
    cout << "Common values: ";
    for (int i = 0; i < resultSize; i++) {

        cout << *(result + i) << " ";
    }
    cout << endl;
}
int* commonValues(int* arr1, int size1, int* arr2, int size2, int* resultSize) {
    // Determine the maximum size the resulting array could be
    int maxSize;

    if (size1 > size2) {

        maxSize = size1;
    }
    else {

        maxSize = size2;
    }

    // Create an array to store the resulting values
    int* result = new int[maxSize];

    // Keep track of how many values are in the resulting array
    int count = 0;

    // Iterate through arr1
    for (int i = 0; i < size1; i++) {

        // Iterate through arr2
        for (int j = 0; j < size2; j++) {

            // If a common value is found, add it to the result array
            if (*(arr1 + i) == *(arr2 + j)) {

                *(result + count++) = *(arr1 + i);
                break; // Exit inner loop, since we found a common value
            }
        }
    }

    // Store the resulting array's size in the pointer
    *resultSize = count;

    // Return the resulting array
    return result;
}