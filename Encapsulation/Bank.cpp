#include <iostream>
using namespace std;

class BankAccount {
private:
    float bal;   // hidden data

public:
    void setBalance(float b) {
        bal = b;}

    float getBalance() {
        return bal;}

    void deposit(float amt) {
        bal += amt;
        cout << "Deposited: " << amt << endl;}

    void withdraw(float amt) {
        if (amt <= bal) {
            bal -= amt;
            cout << "Withdrawn: " << amt << endl;} 
        else {
            cout << "Insufficient balance!" << endl;}
    }

    void addInterest(float rate) {
        float interest = bal * rate / 100;
        bal += interest;
        cout << "Interest added: " << interest << endl;}
};

int main() {
    BankAccount acc;
    float initial;

    cout << "Enter initial balance: ";
    cin >> initial;
    acc.setBalance(initial);

    int ch;
    float amount, rate;

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Add Interest\n4. Check Balance\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> ch;

        switch(ch) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                acc.deposit(amount);
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                acc.withdraw(amount);
                break;

            case 3:
                cout << "Enter interest rate (%): ";
                cin >> rate;
                acc.addInterest(rate);
                break;

            case 4:
                cout << "Current Balance: " << acc.getBalance() << endl;
                break;

            case 5:
                cout << "Thank you!" << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while(ch != 5);

    return 0;
}