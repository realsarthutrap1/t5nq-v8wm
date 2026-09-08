// COMSC-210 | Lab 7 | Sarthak Pani
#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5;

string* reverseArray(string *arr, int size);
void displayArray(string *arr, int size);

int main() {
    string *arr = new string[SIZE];

    *(arr + 0) = "Janet";
    *(arr + 1) = "Jeffe";
    *(arr + 2) = "Jin";
    *(arr + 3) = "Joe";
    *(arr + 4) = "Junio";

    cout << "Original array: ";
    displayArray(arr, SIZE);
    cout << endl;

    arr = reverseArray(arr, SIZE);

    cout << "Reversed array: ";
    displayArray(arr, SIZE);
    cout << endl;

    delete[] arr;
    arr = nullptr;

    return 0;
}

// reverseArray() reverses a dynamic string array in place
// arguments: arr (pointer to strings), size (number of elements)
// returns: pointer to the modified array
string* reverseArray(string *arr, int size) {
    for (int i = 0; i < size / 2; i++) {
        string temp = *(arr + i);
        *(arr + i) = *(arr + size - 1 - i);
        *(arr + size - 1 - i) = temp;
    }
    return arr;
}

// displayArray() prints the array elements on one line
// arguments: arr (pointer to strings), size (number of elements)
// returns: nothing
void displayArray(string *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i);
        if (i < size - 1) {
            cout << " ";
        }
    }
}
