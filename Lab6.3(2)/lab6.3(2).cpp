#include <iostream>
#include <iomanip>

using namespace std;

void fillArrayRecursive(int arr[], int size, int index) {
    if (index < size) {
        cin >> arr[index];
        fillArrayRecursive(arr, size, index + 1);
    }
}

void printArrayRecursive(const int arr[], int size, int index) {
    if (index < size) {
        cout << arr[index] << setw(4);
        printArrayRecursive(arr, size, index + 1);
    }
    else {
        cout << endl;
    }
}

int findMinRecursive(const int arr[], int size, int index, int minElement) {
    if (index < size) {
        if (arr[index] < minElement) {
            minElement = arr[index];
        }
        return findMinRecursive(arr, size, index + 1, minElement);
    }
    else {
        return minElement;
    }
}

template <typename T>  
int findMinTemplateRecursive(const T arr[], const int size, int index, int minElement) {
    if (index < size) {
        if (arr[index] < minElement) {
            minElement = arr[index];
        }
        return findMinTemplateRecursive(arr, size, index + 1, minElement);
    }
    else {
        return minElement;
    }
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter " << size << " elements for the array:\n";

    if (size <= 0) {
        cerr << "Invalid array size\n";
        return 1;
    }

    int* arr = new int[size];

    fillArrayRecursive(arr, size, 0);
    printArrayRecursive(arr, size, 0);

    int minElement = findMinRecursive(arr, size, 0, arr[0]);
    cout << "Min element in array(recursive): " << minElement << endl;

    int minElementT = findMinTemplateRecursive(arr, size, 0, arr[0]);
    cout << "Min element in array(recursiveT): " << minElementT << endl;

    delete[] arr;

    return 0;
}