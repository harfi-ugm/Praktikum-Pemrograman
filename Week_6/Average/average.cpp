#include <iostream>
using namespace std;

struct Student {
    int nim;
    float UTS;
    float UAS;
    float average;
};

int main () {
    int n;
    Student students[50];

    cout << "Enter the number of students (max 50) " ;
    cin >> n;

    if (n > 50) {
        cout << "Error; max number 50";
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        cout << "Enter data for students" << i + 1 << ":" << endl;

        cout << "Enter NIM: ";
        cin >> students[i].nim;

        cout << "Enter UTS value: ";
        cin >> students[i].UTS;

        cout << "Enter UAS value: ";
        cin >> students[i].UAS;

        students[i].average = (students[i].UTS + students[i].UAS) / 2.0;
    }

    cout << "-----------" << endl;
    for (int i = 0; i < n; i++) {
        cout << "NIM: " << students[i].nim << endl;
        cout << "Average: " << students[i].average << endl;
        cout << "-----------" << endl;
    }
    return 0;
}
