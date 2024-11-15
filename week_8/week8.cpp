#include <iostream>
#include <string>
using namespace std;

const int SIZE = 7;

// Function for insertion sort by NISN in descending order
void insertionSortByNISN(string name[], string NISN[], string value[]) {
    for (int i = 1; i < SIZE; i++) {
        string keyName = name[i];
        string keyNISN = NISN[i];
        string keyValue = value[i];
        int j = i - 1;
        while (j >= 0 && NISN[j] < keyNISN) {
            name[j + 1] = name[j];
            NISN[j + 1] = NISN[j];
            value[j + 1] = value[j];
            j--;
        }
        name[j + 1] = keyName;
        NISN[j + 1] = keyNISN;
        value[j + 1] = keyValue;
    }
}

// Function for selection sort by Value in descending order
void selectionSortByValue(string name[], string NISN[], string value[]) {
    for (int i = 0; i < SIZE - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < SIZE; j++) {
            if (value[j] > value[maxIndex]) {
                maxIndex = j;
            }
        }
        swap(name[i], name[maxIndex]);
        swap(NISN[i], NISN[maxIndex]);
        swap(value[i], value[maxIndex]);
    }
}

// Function for bubble sort by NISN in descending order
void bubbleSortByNISN(string name[], string NISN[], string value[]) {
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (NISN[j] < NISN[j + 1]) {
                swap(name[j], name[j + 1]);
                swap(NISN[j], NISN[j + 1]);
                swap(value[j], value[j + 1]);
            }
        }
    }
}

// Binary search function for finding the NISN
int binarySearchByNISN(const string NISN[], string target) {
    int low = 0, high = SIZE - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (NISN[mid] == target) {
            return mid;
        } else if (NISN[mid] < target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

// Sequential search function to change name for entries with Value = 60
void changeNameByValue(string name[], const string value[], const string targetValue, const string newName) {
    for (int i = 0; i < SIZE; i++) {
        if (value[i] == targetValue) {
            name[i] = newName;
        }
    }
}

int main() {
    string name[SIZE] = {"Handi Ramadhan", "Rio Alfandra", "Ronaldo Valentino Uneputty", "Achmad Yaumil Fadjri R.", "Alivia Rahma Pramesti", "Ari Lutfianto", "Arief Budiman"};
    string NISN[SIZE] = {"9960312699", "9963959682", "9950310962", "9970272750", "9970293945", "9952382180", "9965653989"};
    string value[SIZE] = {"90", "55", "80", "60", "70", "65", "60"};

    // Task 1: Sort by NISN in descending order using insertion sort
    insertionSortByNISN(name, NISN, value);
    cout << "Data sorted by NISN (descending) using Insertion Sort:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << name[i] << ", " << NISN[i] << ", " << value[i] << endl;
    }
    cout << endl;

    // Task 1: Sort by Value in descending order using selection sort
    selectionSortByValue(name, NISN, value);
    cout << "Data sorted by Value (descending) using Selection Sort:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << name[i] << ", " << NISN[i] << ", " << value[i] << endl;
    }
    cout << endl;

    // Task 1: Sort by NISN in descending order using bubble sort
    bubbleSortByNISN(name, NISN, value);
    cout << "Data sorted by NISN (descending) using Bubble Sort:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << name[i] << ", " << NISN[i] << ", " << value[i] << endl;
    }
    cout << endl;

    // Task 2: Binary search for NISN 9950310962
    string target = "9950310962";
    int index = binarySearchByNISN(NISN, target);
    if (index != -1) {
        cout << "Found NISN " << target << ": Name = " << name[index] << ", Value = " << value[index] << endl;
    } else {
        cout << "NISN " << target << " not found." << endl;
    }
    cout << endl;

    // Task 3: Change name to "Joko" for entries with Value = 60
    changeNameByValue(name, value, "60", "Joko");
    cout << "Data after changing names with Value 60 to Joko:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << name[i] << ", " << NISN[i] << ", " << value[i] << endl;
    }

    return 0;
}
