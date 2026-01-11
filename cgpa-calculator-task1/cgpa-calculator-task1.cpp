#include<iostream>
#include<iomanip>
#include<vector>
#include<limits>
using namespace std;

int main() {
    int n;
    cout << "Enter number of courses: ";
    while (!(cin >> n) || n <= 0) {
        cout << "Invalid input. Please enter a positive integer: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    vector<float> grades(n), credits(n);
    float totalPoints = 0, totalCredits = 0;
    
    for(int i=0; i<n; i++) {
        cout << "\nCourse " << i+1 << ":\n";
        cout << "Enter grade point (0-4): ";
        while (!(cin >> grades[i]) || grades[i] < 0 || grades[i] > 4) {
            cout << "Invalid grade. Enter a value between 0 and 4: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "Enter credit hours: ";
        while (!(cin >> credits[i]) || credits[i] <= 0) {
            cout << "Invalid credits. Enter a positive number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        totalPoints += grades[i] * credits[i];
        totalCredits += credits[i];
    }
    
    if (totalCredits == 0) {
        cout << "Error: Total credits cannot be zero." << endl;
        return 1;
    }
    
    float gpa = totalPoints / totalCredits;
    
    cout << fixed << setprecision(2);
    cout << "\n=== RESULT ===\n";
    cout << "Total Credits: " << totalCredits << endl;
    cout << "GPA: " << gpa << endl;
    
    return 0;
}
