#include <iostream>
#include <limits>
#include <string>
using namespace std;


struct Student {
    int roll;
    string name;
    float marks;
};

Student students[100];
int countStudents = 0;

// Add Student
void addStudent() {
    if(countStudents >= 100) {
        cout << "⚠️ Limit reached!\n";
        return;
    }

    cout << "\nEnter Roll Number: ";
    cin >> students[countStudents].roll;

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // buffer clear

    cout << "Enter Name: ";
    getline(cin, students[countStudents].name);

    cout << "Enter Marks: ";
    cin >> students[countStudents].marks;

    countStudents++;
    cout << "✅ Student Added Successfully!\n";
}

// Display Students
void displayStudents() {
    if (countStudents == 0) {
        cout << "\n⚠️ No records found!\n";
        return;
    }

    cout << "\n--- Student List ---\n";
    for (int i = 0; i < countStudents; i++) {
        cout << "Roll: " << students[i].roll
             << " | Name: " << students[i].name
             << " | Marks: " << students[i].marks << endl;
    }
}

// Search Student
void searchStudent() {
    int roll;
    cout << "\nEnter Roll Number to search: ";
    cin >> roll;

    for (int i = 0; i < countStudents; i++) {
        if (students[i].roll == roll) {
            cout << "✅ Found: "
                 << students[i].name << " | Marks: "
                 << students[i].marks << endl;
            return;
        }
    }

    cout << "❌ Student not found!\n";
}

// Delete Student
void deleteStudent() {
    int roll;
    cout << "\nEnter Roll Number to delete: ";
    cin >> roll;

    for (int i = 0; i < countStudents; i++) {
        if (students[i].roll == roll) {
            for (int j = i; j < countStudents - 1; j++) {
                students[j] = students[j + 1];
            }
            countStudents--;
            cout << "🗑️ Student Deleted!\n";
            return;
        }
    }

    cout << "❌ Student not found!\n";
}

// Main Menu
int main() {
    int choice;

    while (true) {
        cout << "\n===== Student Record Manager =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "⚠️ Invalid input! Try again.\n";
            continue;
        }

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                cout << "👋 Exiting program...\n";
                return 0;
            default:
                cout << "⚠️ Invalid choice!\n";
        }
    }
}
