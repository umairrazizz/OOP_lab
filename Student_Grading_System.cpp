#include <iostream>
using namespace std;

int main() {
    int marks[5], failedSubjects = 0;
    double totalMarks = 0, percentage;
    char grade;

    // Input marks for 5 subjects
    cout << "Enter marks for 5 subjects (out of 100):" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        totalMarks += marks[i];

        // Count failed subjects
        if (marks[i] < 40) {
            failedSubjects++;
        }
    }

    // Check if the student failed in more than one subject
    if (failedSubjects > 1) {
        cout << "Repeat Year" << endl;
        return 0; // Exit the program as the student must repeat the year
    }

    // Calculate percentage
    percentage = (totalMarks / 500) * 100;

    // Determine grade using nested if-else
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 75) {
        grade = 'B';
    } else if (percentage >= 60) {
        grade = 'C';
    } else if (percentage >= 50) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Output the result
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
