/*Task1. Write a function that receives a pointer to an array and its size. 
The function should remove all negative numbers from the array and return a pointer to the new array.*/

#include <iostream>
using namespace std;

int* removeNegatives(int* arr, int size) {

    int* result = new int[size]; // memory for new array
    int* p = result; // pointer to current position in new array

    for (int i = 0; i < size; i++) {

        if (*(arr + i) >= 0) {

            *p = *(arr + i); // copy non-negative value to new array
            p++; // move to next position in new array
        }
    }
    return result;
}

int main() {
    // user enters the size of the array
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // user enters the elements of the array
    int* arr = new int[size];
    cout << "Enter the elements of the array: ";

    for (int i = 0; i < size; i++) {

        cin >> *(arr + i);
    }

    // Call removeNegatives function to remove negative elements from the array
    int* result = removeNegatives(arr, size);

    // Print the elements of the new array that are non-negative
    for (int i = 0; i < size; i++) {

        if (*(result + i) >= 0) {

            cout << *(result + i) << " ";
        }
    }
}
