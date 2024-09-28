/*Write a C++ program to implement a class called Date that has private 
member variables for day, month, and year. Include member functions to 
set and get these variables, as well as to validate if the date is valid. */

#include <iostream>

using namespace std;

class Date {
    private:
        int day;
        int month;
        int year;

    public:
        // Constructor
        Date(int d = 1, int m = 1, int y = 2000) {
            day = d;
            month = m;
            year = y;
        }

        // Setter methods
        void setDay(int d) {
            day = d;
        }

        void setMonth(int m) {
            month = m;
        }

        void setYear(int y) {
            year = y;
        }

        // Getter methods
        int getDay() {
            return day;
        }

        int getMonth() {
            return month;
        }

        int getYear() {
            return year;
        }

        // Validate date
        bool isValidDate() {
            if (year < 1 || month < 1 || month > 12 || day < 1)
                return false;

            if (month == 2) {
                return day <= 28;
            } else if (month == 4 || month == 6 || month == 9 || month == 11) {
                return day <= 30;
            } else {
                return day <= 31;
            }
        }

        // Display date
        void displayDate() {
            cout << "Date: " << day << "/" << month << "/" << year << endl;
        }
};

int main() {
    Date date;

    // Input date
    int d, m, y;
    cout << "Enter day (1-31): ";
    cin >> d;
    cout << "Enter month (1-12): ";
    cin >> m;
    cout << "Enter year: ";
    cin >> y;

    date.setDay(d);
    date.setMonth(m);
    date.setYear(y);

    // Validate and display date
    if (date.isValidDate()) {
        date.displayDate();
    } else {
        cout << "Invalid date." << endl;
    }

    return 0;
}
