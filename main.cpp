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

    cout << "first: " << *(arr) << endl;
    displayArray(arr, SIZE);
    cout << endl;

    return 0;
}

string* reverseArray(string *arr, int size) {
    return arr;
}

void displayArray(string *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
