/*Task3. Write a function that receives a pointer to an array and its size, 
and returns the number of negative, positive and zero array elements.*/

#include <iostream>

using namespace std; 

// Function to count the number of negative, positive, and zero elements in an array
void count_nums(int* arr, int size, int* num_neg, int* num_pos, int* num_zero) {

    for (int i = 0; i < size; i++) {

        if (*(arr + i) < 0) {

            (*num_neg)++; // Incrementing negative count
        }
        else if (*(arr + i) > 0) {

            (*num_pos)++; // Incrementing positive count
        }
        else {

            (*num_zero)++; // Incrementing zero count
        }
    }
}

int main() {

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter " << size << " integer values for the array: ";

    for (int i = 0; i < size; i++) {

        cin >> *(arr + i); // Using pointer arithmetic to read in array elements
    }

    int num_neg = 0, num_pos = 0, num_zero = 0;
    count_nums(arr, size, &num_neg, &num_pos, &num_zero); // Passing count variables by reference using pointers

    // Printing out the counts of negative, positive, and zero elements
    cout << "Negative numbers: " << num_neg << endl;
    cout << "Positive numbers: " << num_pos << endl;
    cout << "Zeroes: " << num_zero << endl;

}
