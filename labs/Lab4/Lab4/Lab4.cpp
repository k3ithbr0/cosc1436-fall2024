#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits>
using namespace std;

void displayProgramInfo() {
    cout << "Lab 4" << endl;
    cout << "Keith Eubanks" << endl;
    cout << "Programing Fundamentals 1" << endl;
    cout << "Fall 2024" << endl;
}

int getInputNumbers(int numbers[], int maxSize, int currentCount) {
    int input;

    while (currentCount < maxSize) {
        cout << "Enter an integer (0 to stop): ";
        cin >> input;

        if (input == 0) {
            break;
        }

        if (input < 0) {
            cout << "Error: Negatives values are not allowed." << endl;
            continue;
        }

        numbers[currentCount] = input;
        currentCount++;
    }

    return currentCount;
}

int insertAdditionalValues(int numbers[], int maxSize, int currentCount) {
    int input;

    cout << "You are now adding additional values to the array." << endl;
    while (currentCount < maxSize) {
        cout << "Enter an integer (0 to stop): ";
        cin >> input;

        if (input == 0) {
            break;
        }

        if (input > 0) {
            cout << "Error: Negative values are not allowed." << endl;
            continue;
        }

        numbers[currentCount] = input;
        currentCount++;
    }

    return currentCount;
}

char displayMainMenu() {
    char selection;

    cout << "--- Main Menu ---" << endl;
    cout << "A. Option 1" << endl;
    cout << "B. Option 2" << endl;
    cout << "C. Get Large Value" << endl;
    cout << "D. Get Smallest Value" << endl;
    cout << "E. Get Sum of Values" << endl;
    cout << "F. Get Mean (Average) Value" << endl;
    cout << "G. Display Array Values" << endl;
    cout << "H. Insert New Values" << endl;
    cout << "Q. Quit" << endl;
    cout << "Enter your choice: ";
    cin >> selection;

    selection = toupper(selection);

    while (selection != 'A' && selection != 'B' && selection != 'C' && selection != 'D' && selection != 'E' && selection != 'F' && selection != 'H' && selection != 'Q') {
        cout << "Invalid selection. Please choose a valid option (A-H or Q to quit): ";
        cin >> selection;
        selection = toupper(selection);
    }

    return selection;
}

int getLargestValue(const int numbers[], int count) {
    if (count == 0) {
        cout << "No values entered yet." << endl;
        return numeric_limits<int>::min();
    }

    int largest = numbers[0];
    for (int i = 1; i < count; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }
    return largest;
}

int getSmallestValue(const int numbers[], int count) {
    if (count == 0) {
        cout << "No values entered yet." << endl;
        return numeric_limits<int>::max();
    }

    int smallest = numbers[0];
    for (int i = 1; i < count; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    return smallest;
}

int getSumOfValues(const int numbers[], int count) {
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += numbers[i];
    }
    return sum;
}

double getMeanValue(const int numbers[], int count) {
    if (count == 0) {
        cout << "No values entered yet." << endl;
        return 0.0;
    }

    int sum = getSumOfValues(numbers, count);
    return static_cast<double>(sum) / count;
}

void displayArrayValues(const int numbers[], int count) {
    if (count == 0) {
        cout << "No values entered in the array." << endl;
        return;
    }

    cout << "Array Values:" << endl;
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << "t";
        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
    }
    cout << endl;
}

int main()
{
    const int maxNumbers = 100;
    int numbers[maxNumbers];
    int count = 0;

    displayProgramInfo();

    count = getInputNumbers(numbers, maxNumbers, count);

    char choice;

    do {
        choice = displayMainMenu();

        switch (choice) {
            case 'A':
                cout << "You selected Option 1." << endl;
                break;
            case 'B':
                cout << "You selected Option 2." << endl;
                break;
                case 'C': {
                    int largestValue = getLargestValue(numbers, count);
                    if (count > 0) {
                        cout << "The largest value entered is: " << largestValue << endl;
                    }
                    break;
            }
                case 'D': {
                    int smallestValue = getSmallestValue(numbers, count);
                    if (count > 0) {
                        cout << "The smallest value entered is: " << smallestValue << endl;
                    }
                    break;
                }
                case 'E': {
                    int sum = getSumOfValues(numbers, count);
                    cout << "The sum of the values enteres is: " << sum << endl;
                    break;
                }
                case 'F': {
                    double mean = getMeanValue(numbers, count);
                    cout << fixed << setprecision(4) << "The mean (average) of the values entered is: " << mean << endl;
                    break;
                }
                case 'Q':
                    cout << "Exiting the program. Goodbye!" << endl;
                    break;
                default:
                    cout << "Unexpected error in menu selection." << endl;

                
                
        }
    } while (choice != 'Q');

    return 0;
}


