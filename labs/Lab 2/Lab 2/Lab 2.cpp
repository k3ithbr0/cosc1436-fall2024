

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Story 1
    
    cout << "--------------------" << endl;
    cout << "Program Title: " << endl;
    cout << "Lab 2" << endl;
    cout << "--------------------" << endl;
    cout << "Name: Keith Eubanks" << endl;
    cout << "Course: Programming Fundamentals I" << endl;
    cout << "Semester: Fall 2024" << endl;
    cout << "--------------------" << endl;

    //Story 2

    double loanAmount;

    do {
        cout << "Please enter the initial loan amount between $1 and $1,000: ";
        cin >> loanAmount;

        if (cin.fail()) {

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max());
            cout << "Error: Please enter a numeric value.";
        } else if (loanAmount < 1 || loanAmount > 1000) {

            cout << "Error: The loan amount must be between $1 and $1,000.";
        }
    } while (loanAmount < 1 || loanAmount > 1000 || cin.fail());

    cout << "Thank you! You entered a loan amount of $" << loanAmount << endl;

    // Story 3

    float interestRate;

    do {
        cout << "Please enter the interest rate as a percentage (1.0% to 100.0%): ";
        cin >> interestRate;

        if (cin.fail()) {

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max());
            cout << "Error: Please enter a numeric value.";
        } else if (interestRate < 1.0 || interestRate > 100.0) {

            cout << "Error: the interest rate must be between 1.0% and 100.0%";
        }
    } while (interestRate < 1.0 || interestRate > 100.0 || cin.fail());

    float interestRateDecimal = interestRate / 100.0;

    cout << "Thank you! The interest rate as a decimal is " << interestRateDecimal << endl;

    // Story 4

    cout << "\Month\Loan Balance\Interest\New Balance";
    cout << "------------";

    double currentLoanBalance = loanAmount;
    double interestForMonth = 0;
    double newLoanBalance = loanAmount;

    for (int month = 1; month <= 12; month++) {
        cout << month << "$" << fixed << setprecision(2) << currentLoanBalance;

        if (month > 1) {
            interestForMonth = currentLoanBalance * interestRateDecimal;
        }
    } cout << "$" << interestForMonth;

    newLoanBalance = currentLoanBalance + interestForMonth;

    cout << "$" << newLoanBalance << endl;

    currentLoanBalance = newLoanBalance;

    //Story 5
    double monthlyPayment;
    
    do {
        cout << "Please enter the monthly payment amount between $0 and $" << loanAmount << ": ";
        cin >> monthlyPayment;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), ' ');
            cout << "Error: Please enter a numeric value.";
        } else if (monthlyPayment < 0 || monthlyPayment > loanAmount) {
            cout << "Error: The payment must be between $0 and $" << loanAmount << ' ';
        }

    } while (monthlyPayment < 0 || monthlyPayment > loanAmount || cin.fail());

    double actualPayment = (monthlyPayment > currentLoanBalance) ? currentLoanBalance : monthlyPayment;

    cout << "$" << actualPayment;

    currentLoanBalance -= actualPayment;

    while (currentLoanBalance <= 0) {
        currentLoanBalance = 0;
        interestForMonth = 0;
        cout << " ";
        continue;
    }
    
    interestForMonth = currentLoanBalance * interestRateDecimal;

    cout << "$ " << interestForMonth;

    newLoanBalance = currentLoanBalance + interestForMonth;

    cout << "$ " << newLoanBalance << endl;

    currentLoanBalance = newLoanBalance;

    // Story 6

    double totalInterestPaid = 0;
    double totalPayments = 0;

    totalPayments += actualPayment;

    while (currentLoanBalance <= 0) {
        currentLoanBalance = 0;
        interestForMonth = 0;
        cout << "\ \ $0.00\ \ $0.00\ ";
        continue;
    }
    totalInterestPaid += interestForMonth;

    cout << "\ \ $" << interestForMonth << "\ \ $" << newLoanBalance << endl;

    cout << "\ Total interest paid: $" << fixed << setprecision(2) << totalInterestPaid << endl;
    cout << "Total payment made: $" << totalPayments << endl;
}


