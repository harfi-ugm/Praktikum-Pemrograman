# include <iostream>
// Include the iostream library for input and output functions
# include <iomanip>
using namespace std;
int main () {
//variable
    string name;
    double baseSalary = 15000000; // base salary
    double installment;
    double insurance;

// Input form the user
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Installment Amount (Rp): ";
    cin >> installment;
    cout << "Insurance Amount (Rp): " ;
    cin >> insurance;

//calculate - this calculate must below input, if not the result is not calculate
    double tax = baseSalary * 0.2;
    double netSalary = baseSalary - installment - tax -insurance;

// Function to display the result
    cout << "Payslip for Employee" << endl;
    cout << "---------------------" << endl;
    cout << "Name: " << name <<endl;
    cout << "Gross Salary: Rp" <<fixed << setprecision(2) << baseSalary << endl;
    cout << "Tax (20%)" << tax <<endl ;
cout << "Installment: Rp" << fixed << setprecision(2) << installment << endl;
cout << "Insurance: Rp" << fixed << setprecision(2) << insurance << endl;
cout << "Net Salary: Rp " << fixed << setprecision(2) << netSalary << endl;

    return 0; // End of the program
}
