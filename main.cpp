// Programmer: Faten Alokla
// Date: 1/ 27 / 2026

#include <iostream>
#include <string>
#include <limits>

using namespace std;

const string DAYS[7] = {
    "Sunday", "Monday", "Tuesday",
    "Wednesday", "Thursday", "Friday", "Saturday"
};

const string MONTHS[12] = {
    "January", "February", "March", "April",
    "May", "June", "July", "August",
    "September", "October", "November", "December"
};

int main() {
    int choice;

    do {
        cout << "\n=== Date Utilities Menu ===\n";
        cout << "1. Get Day Name by Number (1-7)\n";
        cout << "2. Get Month Name by Number (1-12)\n";
        cout << "3. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            choice = 0;
        }

        switch (choice) {
            case 1: {
                int day;
                cout << "Enter day number (1-7): ";
                cin >> day;
                if (cin.fail() || day < 1 || day > 7) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid Day!\n";
                } else {
                    cout << "Day: " << DAYS[day - 1] << endl;
                }
                break;
            }

            case 2: {
                int month;
                cout << "Enter month number (1-12): ";
                cin >> month;
                if (cin.fail() || month < 1 || month > 12) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid Month!\n";
                } else {
                    cout << "Month: " << MONTHS[month - 1] << endl;
                }
                break;
            }

            case 3:
                cout << "Exiting program. Goodbye!\n";
                break;

            default:
                if (choice != 0)
                    cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 3);

    return 0;
}
