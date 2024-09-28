/* Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance)*/

#include <iostream>
#include <string>

using namespace std;

// Base class: Cricketer
class Cricketer {
    protected:
        string name;
        string team;
        int matches;

    public:
        // Constructor
        Cricketer(string n, string t, int m) {
            name = n;
            team = t;
            matches = m;
        }

        // Input data
        void inputData() {
            cout << "Enter cricketer's name: ";
            cin >> name;
            cout << "Enter team name: ";
            cin >> team;
            cout << "Enter number of matches: ";
            cin >> matches;
        }

        // Display data
        void displayData() {
            cout << "Name: " << name << endl;
            cout << "Team: " << team << endl;
            cout << "Matches: " << matches << endl;
        }
};

// Derived class: Batsman (inherits from Cricketer)
class Batsman : public Cricketer {
    private:
        int totalRuns;
        double averageRuns;
        string bestPerformance;

    public:
        // Constructor
        Batsman() : Cricketer("", "", 0) {
            totalRuns = 0;
            averageRuns = 0.0;
            bestPerformance = "";
        }

        // Input data
        void inputData() {
            Cricketer::inputData(); // Call base class inputData()
            cout << "Enter total runs: ";
            cin >> totalRuns;
            cout << "Enter best performance: ";
            cin >> bestPerformance;
        }

        // Calculate average runs
        void calculateAverageRuns() {
            averageRuns = (double)totalRuns / matches;
        }

        // Display data
        void displayData() {
            Cricketer::displayData(); // Call base class displayData()
            cout << "Total Runs: " << totalRuns << endl;
            calculateAverageRuns();
            cout << "Average Runs: " << averageRuns << endl;
            cout << "Best Performance: " << bestPerformance << endl;
        }
};

int main() {
    Batsman batsman;

    cout << "Enter batsman's data:" << endl;
    batsman.inputData();

    cout << "\nBatsman's data:" << endl;
    batsman.displayData();

    return 0;
}