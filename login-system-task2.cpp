#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void registerUser() {
    string username, password;
    cout << "\n=== REGISTRATION ===\n";
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    
    ofstream file("users.txt", ios::app);
    file << username << " " << password << endl;
    file.close();
    
    cout << "Registration successful!\n";
}

void loginUser() {
    string username, password, un, pw;
    cout << "\n=== LOGIN ===\n";
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    
    ifstream file("users.txt");
    bool found = false;
    
    while(file >> un >> pw) {
        if(un == username && pw == password) {
            found = true;
            break;
        }
    }
    file.close();
    
    if(found)
        cout << "Login successful!\n";
    else
        cout << "Invalid username or password!\n";
}

int main() {
    int choice;
    
    do {
        cout << "\n1. Register\n2. Login\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1: registerUser(); break;
            case 2: loginUser(); break;
            case 3: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while(choice != 3);
    
    return 0;
}