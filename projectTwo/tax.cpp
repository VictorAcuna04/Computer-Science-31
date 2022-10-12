// Tax proposal calculator

#include <iostream>
#include <string>
using namespace std;

int main() {

    // Set the precision to two decimal places
    cout.setf(ios::fixed);
    cout.precision(2);

    // Get the name of the taxpayer and validate it
    cout << "Name: ";
    string name;
    getline(cin, name);
    if (name == "") {
        cout << "---" << endl << "You must enter a name" << endl;
        return 1;
    }  

    // Get the taxable income of the taxpayer and validate it
    cout << "Taxable income: ";
    double income;
    cin >> income;
    cin.ignore(10000, '\n');
    if (income < 0) {
        cout << "---" << endl << "The taxable income must not be negative" << endl;
        return 1;
    }

    // Get the occupation of the taxpayer and validate it
    cout  << "Occupation: ";
    string occupation;
    getline(cin, occupation);
    if (occupation == "") {
        cout << "---" << endl << "You must enter an occupation" << endl;
        return 1;
    }

    // Get the number of children of the taxpayer and validate it
    cout << "Number of children: ";
    int children;
    cin >> children;
    cin.ignore(10000, '\n');
    if (children < 0) {
        cout << "---" << endl << "The number of children must not be negative" << endl;
        return 1;
    }

    // Taxable rates
    double totalTax = 0;
    double lowClass = 0.04;
    double middleClass = 0.07;
    if (occupation == "nurse" || occupation == "teacher") {
        middleClass = 0.05;
    }
    double upperClass = 0.093;
    
    /* Compute how much the taxpayer would pay
       If the income is less than 55000, tax at 4% */
    if (income <= 55000) { 
        totalTax = income * lowClass; 
    }    
    /* If the income is less than 125000, tax the first $55000 at 4% and then the next $70000 at 7% 
       However if they are a teaher or nurse, tax at 5% */
    else if (income <= 125000) { 
        totalTax = 55000 * lowClass + (income - 55000) * middleClass; 
    }
    /* If the income is less than 125000, tax the first $55000 at 4% and then the next $70000 at 7% 
       However if they are a teaher or nurse, tax at 5%
       The remaining amount is taxed at 9.3% */
    else if (income > 125000) {
        totalTax = 55000 * lowClass + (125000 - 55000) * middleClass + (income - 125000) * upperClass;
    }

    // If taxpayer's income is under $125000, the tax is reduced by $200 per child
    if (income < 125000 && children > 0) {
        totalTax -= children * 200;
    }

    // If tax ends up a negative, then tax is zero
    if (totalTax < 0) {
        totalTax = 0;
    }

    // Output the amount of tax the taxpayer would pay
    cout << "---" << endl << name << " would pay $" << totalTax << endl; 
}