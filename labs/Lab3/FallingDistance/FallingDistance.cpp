#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

void displayProgramInfo() {
    cout << "Lab 3";
    cout << "Keith Eubanks";
    cout << "Programming Fundamentals I";
}

int getFallingTime() {
    int fallingTime;

    do {
        cout << "Enter the falling time (1 to 60 seconds): ";
        cin >> fallingTime;

        if (fallingTime < 1 || fallingTime > 60) {
            cout << "Error: Please enter a value between 1 and 60 seconds.";
        }
    } while (fallingTime < 1 || fallingTime > 60);

    return fallingTime;

    char getMeasruementUnit();
    {
        char unit;

        do {
            cout << "Would you like to see the results in meters (m) or feet (f)? ";
            cin >> unit;
            unit = tolower(unit);

            if (unit != 'm' && unit != 'f') {
                cout << "Error: Please enter 'm' for meters or 'f' for feet. ";
            }
        } while (unit != 'm' && unit != 'f');

        return unit;
    }

    double calculateFallingDistance(int timeInSeconds); {
        const double gravity = 9.8;
        return 0.5 * gravity * timeInSeconds * timeInSeconds;
    }

    double convertDistance(double distance, char unit) {
        const double metersToFeet = 3.28084;
        if (unit == 'f') {
            return distance * metersToFeet;
        }
        return distance;
    }

    void showFallingDistanceTable(int maxTime, char unit) {

        string unitLabel = (unit == 'f') ? "feet" : "meters";

        cout << "Time (s)     Distance Fallen (" << unitLabel << ") ";
        cout "------------------------------------------";
    }

    for (int time = 1; time <= maxTime; ++time) {
        double distance = calculateFallingDistance(time);
        distance = convertDistance(distance, unit);

        cout << setw(5) << time << setw(20) << fixed << setprecision(2) << distance << " " << unitLabel << " ";
    }
    int main() {

        displayProgramInfo();

        int fallingTime = getFallingTime();

        char measurementUnit = get MeasurementUnit();

        showFallingDistanceTable(fallingTime, measurementUnit);

        return 0;
    }
}



