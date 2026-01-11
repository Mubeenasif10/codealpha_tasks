#include<iostream>
#include<fstream>
using namespace std;

class Bank {
    int accNo;
    string name;
    float balance;
    
public:
    void createAccount() {
        cout << "\n=== CREATE ACCOUNT ===\n";
        cout << "Enter account number: ";
        cin >> accNo;
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter initial deposit: ";
        cin >> balance;
        
        ofstream file("accounts.txt", ios::app);
        file << accNo << " " << name << " " << balance << endl;
        file.close();
        
        cout << "Account created successfully!\n";
    }
    
    void deposit() {
        int searchAcc;
        float amount;
        cout << "\n=== DEPOSIT ===\n";
        cout << "Enter account number: ";
        cin >> searchAcc;
        cout << "Enter amount: ";
        cin >> amount;
        
        ifstream in("accounts.txt");
        ofstream out("temp.txt");
        bool found = false;
        
        while(in >> accNo >> name >> balance) {
            if(accNo == searchAcc) {
                balance += amount;
                found = true;
                cout << "Deposit successful! New balance: " << balance << endl;
            }
            out << accNo << " " << name << " " << balance << endl;
        }
        
        in.close();
        out.close();
        
        remove("accounts.txt");
        rename("temp.txt", "accounts.txt");
        
        if(!found) cout << "Account not found!\n";
    }
    
    void withdraw() {
        int searchAcc;
        float amount;
        cout << "\n=== WITHDRAW ===\n";
        cout << "Enter account number: ";
        cin >> searchAcc;
        cout << "Enter amount: ";
        cin >> amount;
        
        ifstream in("accounts.txt");
        ofstream out("temp.txt");
        bool found = false;
        
        while(in >> accNo >> name >> balance) {
            if(accNo == searchAcc) {
                if(balance >= amount) {
                    balance -= amount;
                    found = true;
                    cout << "Withdrawal successful! New balance: " << balance << endl;
                } else {
                    cout << "Insufficient balance!\n";
                }
            }
            out << accNo << " " << name << " " << balance << endl;
        }
        
        in.close();
        out.close();
        
        remove("accounts.txt");
        rename("temp.txt", "accounts.txt");
        
        if(!found) cout << "Account not found!\n";
    }
    
    void viewBalance() {
        int searchAcc;
        cout << "\n=== CHECK BALANCE ===\n";
        cout << "Enter account number: ";
        cin >> searchAcc;
        
        ifstream in("accounts.txt");
        bool found = false;
        
        while(in >> accNo >> name >> balance) {
            if(accNo == searchAcc) {
                cout << "Account Holder: " << name << endl;
                cout << "Balance: " << balance << endl;
                found = true;
                break;
            }
        }
        
        in.close();
        if(!found) cout << "Account not found!\n";
    }
};

int main() {
    Bank bank;
    int choice;
    
    do {
        cout << "\n=== BANKING SYSTEM ===\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Check Balance\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1: bank.createAccount(); break;
            case 2: bank.deposit(); break;
            case 3: bank.withdraw(); break;
            case 4: bank.viewBalance(); break;
            case 5: cout << "Thank you!\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while(choice != 5);
    
    return 0;
}