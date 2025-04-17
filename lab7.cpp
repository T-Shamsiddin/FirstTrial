//
// Created by User on 06.04.2025.
//
#include <iostream>
#include <string>
using namespace std;

int calculateBill(int a, int b) {
    return a*b;
}

int calculatethefee(int h) {
    if (h <= 2) return 0;
    if (h >= 3 && h <= 5) return (h - 2) * 2;
    if (h >= 6) return 6 + (h - 5) * 5;
}

void deposit(double amount, double balance) {
    balance += amount;
    cout << "Deposited" << endl;;
}

void withdraw(double amount, double balance) {
    if (amount <= balance) {
        balance -= amount;
        cout << "Withdrewed" << endl;
    }
    else {
        cout << "Insufficient Funds." << endl;
    }
}

void checkBalance(double balance) {
    cout << "Balance: $" << balance << endl;
}

int calculatecost(int number, int cost) {
    return number * cost;
}

int calculatefare(int number, int fare) {
    return number * fare;
}

void chechPassword(string password) {
    bool upper = false;
    bool lower = false;
    bool digit = false;
    bool special = false;
    string chars = "!@#$%";
    for (auto i : password) {
        if (isupper(i))
            upper = true;
        else if (islower(i))
            lower = true;
        else if (isdigit(i))
            digit = true;
        else if (chars.find(i) != string::npos)
            special = true;
    }
    bool strong = true;
    if (password.length() < 8) {
        strong = false;
    }
    if (!upper || !lower || !digit || !special) {
        strong = false;
    }
    if (strong) {
        cout << "Strong Password" << endl;
    }
    else {
        cout << "Weak Password" << endl;
        cout << "Missing Criteria: " << endl;
        if (password.length() < 8)
            cout << "Length is not enough" << endl;
        if (!upper)
            cout << "No uppercase letter" << endl;
        if (!lower)
            cout << "No lowercase letter" << endl;
        if (!digit)
            cout << "No digit" << endl;
        if (!special)
            cout << "No special symbol (!,@,#,$,%)" << endl;
    }
}

bool isLeap(int y) {
    return (!(y % 4) && y % 100) || !(y % 400);
}

bool isValid(int d, int m, int y) {
    if (m < 1 || m > 12) {
        return false;
    }
    int mxD;
    if (m == 2) {
        mxD = isLeap(y) ? 29 : 28;
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        mxD = 30;
    } else {
        mxD = 31;
    }

    return (d >= 1 && d <= mxD);
}
void getNextDate(int d, int m, int y) {
    int mxD;
    if (m == 2) {
        mxD = isLeap(y) ? 29 : 28;
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11) {
        mxD = 30;
    }
    else {
        mxD = 31;
    }
    d++;
    if (d > mxD) {
        d = 1;
        m++;
        if (m > 12) {
            m = 1;
            y++;
        }
    }
}

// int main() {
    // task 1
    // int choice;
    // int amount = 0;
    // do {
    //     cout << "Menu: " << endl;
    //     cout << "Enter your choice: " << endl;
    //     cout << "1. Pizza - 10$" << endl;
    //     cout << "2. Burger - 8$" << endl;
    //     cout << "3. Salad - 5$" << endl;
    //     cout << "4. Exit" << endl;
    //     cin >> choice;
    //     if (choice < 4) {
    //         cout << "Enter amount: " << endl;
    //         cin >> amount;
    //     }
    //     switch (choice) {
    //         case 1:
    //             cout << "Bill: " << calculateBill(amount, 10) << endl;
    //             break;
    //         case 2:
    //             cout << "Bill: " << calculateBill(amount, 8) << endl;
    //             break;
    //         case 3:
    //             cout << "Bill: " << calculateBill(amount, 5) << endl;
    //             break;
    //         case 4:
    //             break;
    //         default:
    //             cout << "Invalid Choice" << endl;
    //     }
    // }while (choice != 4);

    // task 2
    // while (true) {
    //     cout << "Please enter a number of hours: " << endl;
    //     int h;
    //     cin >> h;
    //     cout << calculatethefee(h) << endl;
    // }

    // task 3
    // double balance = 500;
    // int amount;
    // int choice;
    // do {
    //     cout << "Enter your choice: " << endl;
    //     cout << "1. Deposit" << endl;
    //     cout << "2. Withdraw" << endl;
    //     cout << "3. Check Balance" << endl;
    //     cout << "4. Exit" << endl;
    //     cin >> choice;
    //     switch (choice) {
    //         case 1:
    //             cout << "Enter amount: " << endl;
    //         cin >> amount;
    //         deposit(amount, balance);
    //         break;
    //         case 2:
    //             cout << "Enter amount: " << endl;
    //         cin >> amount;
    //         withdraw(amount, balance);
    //         break;
    //         case 3:
    //             checkBalance(balance);
    //         break;
    //         case 4:
    //             cout << "Exit." << endl;
    //         break;
    //         default:
    //             cout << "Invalid choice." << endl;
    //     }
    // }
    // while (choice != 4);

    //task 4
    // int cost = 0;
    // int number;
    // int choice;
    // do {
    //     cout << "Enter you choice: " << endl;
    //     cout << "1. Movie A" << endl;
    //     cout << "2. Movie B" << endl;
    //     cout << "3. Movie C" << endl;
    //     cout << "4. Exit" << endl;
    //     cin >> choice;
    //     switch (choice) {
    //         case 1:
    //             cout << "Enter number of tickets: " << endl;
    //         cin >> number;
    //         cost = calculatecost(number, 8);
    //         break;
    //         case 2:
    //             cout << "Enter number of tickets: " << endl;
    //         cin >> number;
    //         cost = calculatecost(number, 10);
    //         break;
    //         case 3:
    //             cout << "Enter number of tickets: " << endl;
    //         cin >> number;
    //         cost = calculatecost(number, 12);
    //         break;
    //          case 4:
    //              cout << "Exit" << endl;
    //         break;
    //     }
    //     cout << "Total Cost: $" << cost << endl;
    // }while (choice != 4);

    //task 5
    // int fare = 0;
    // int number;
    // int choice;
    // string start;
    // string destination;
    // do {
    //     cout << "Enter starting city: " << endl;
    //     getline(cin, start);
    //     cout << "Enter destination city: " << endl;
    //     getline(cin, destination);
    //     cout << "1. Train X" << endl;
    //     cout << "2. Train Y" << endl;
    //     cout << "3. Train Z" << endl;
    //     cout << "4. Exit" << endl;
    //     cin >> choice;
    //     switch (choice) {
    //         case 1:
    //             cout << "Enter number of tickets: " << endl;
    //         cin >> number;
    //         fare = calculatefare(number, 15);
    //         break;
    //         case 2:
    //             cout << "Enter number of tickets: " << endl;
    //         cin >> number;
    //         fare = calculatefare(number, 20);
    //         break;
    //         case 3:
    //             cout << "Enter number of tickets: " << endl;
    //         cin >> number;
    //         fare = calculatefare(number, 25);
    //         break;
    //         case 4:
    //             cout << "Exit" << endl;
    //     }
    //     cout << "Total Fare: $" << fare << endl;
    //     cin.ignore();
    //     cin.clear();
    // }while (choice != 4);

    //task 6
    // string password;
    // cout << "Enter your password: " << endl;
    // getline(cin, password);
    // chechPassword(password);

    //task 7
    // int d, m, y;
    // char choice;
    // do {
    //     cout << "Enter a date (DD MM YYYY): " << endl;
    //     cin >> d >> m >> y;
    //     if (isValid(d, m, y)) {
    //         int nextDay = d, nextMonth = m, nextYear = y;
    //         getNextDate(nextDay, nextMonth, nextYear);
    //         cout << "Next Date: " << nextDay << "/" << nextMonth << "/" << nextYear << endl;
    //     }
    //     else {
    //         cout << "Invalid date" << endl;
    //     }
    //     cout << "Do you want to continue ? y/n: ";
    //     cin >> choice;
    // } while (choice == 'y' || choice == 'Y');
    // cout << "Program ended." << endl;
    // return 0;
// }