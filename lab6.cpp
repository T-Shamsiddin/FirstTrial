//
// Created by Shamsiddin Tohirov on 20/02/25.
//
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string>

using namespace std;

int findGCD(int a, int b) {
    if (a == 0)
        return b;
    return findGCD(b % a, a);
}

void message() {
    cout << "Welcome to the C++ programming world!" << endl;
}

void greet() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "!" << endl;
}

int maxNumber(int a, int b) {
    return (a > b) ? a : b;
}
// int factorial(int n) {
//     int result = 1;
//     for (int i = 2; i <= n; i++) {
//         result *= i;
//     }
//     return result;
// }


void rectangle(int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
//
// int main() {
    // Task 1
    // int sum1=0;
    // for (int i=0; i<100; i++) {
    //     sum1+=i;
    // }
    // cout << sum1 << endl;
    // int n, sum2 = 0;
    // cout << "Enter a number: ";
    // cin >> n;
    // while (n>0) {
    //     sum2+=n;
    //     n--;
    // }
    // cout << sum2 << endl;

    // Task 2
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // int num = 2;
    // while (n>0) {
    //     bool isPrime = true;
    //     int a = 2;
    //     while (a*a<=num) {
    //         if (num%a==0) {
    //             isPrime = false;
    //             break;
    //         }
    //         a++;
    //     }
    //     if (isPrime) {
    //         cout << num << " ";
    //         n--;
    //     }
    //     num++;
    // }

    // Task 3
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // while (n!=1) {
    //     cout << n << " ";
    //     if (n%2==0) {
    //         n=n/2;
    //     }else {
    //         n=n*3+1;
    //     }
    // }
    // cout << n << endl;

    // Task 4
    // int n, count = 0;
    // cout << "Enter a number: ";
    // cin >> n;
    // while(n>0) {
    //     n/=10;
    //     count++;
    // }
    // cout << count << endl;

    // Task 5
    // int n;
    // cin>>n;
    // while(n>0) {
    //     cout<<n%10<<" ";
    //     n/=10;
    // }

    // Task 6
//     int a, b;
//     cout << "Enter the first number: ";
//     cin >> a;
//     cout << "Enter the second number: ";
//     cin >> b;
//     int g = findGCD(a, b);
//     cout << g << endl;

// task 7
// int sum = 0, count = 0, n;
// while (sum <= 100) {
//     cout << "n: ";
//     cin >> n;
//     sum += n;
//     count++;
// }
// cout << "sum: " << sum << endl;
// cout << "numbers entered: " << count << endl;

// task 8
// int balance = 500, withdrawal;
// cout << "balance: $" << balance << endl;    
// while (balance > 0) {
//     cout << "Enter withdrawal amount (or 0 to cancel): ";
//     cin >> withdrawal;        
//     if (withdrawal == 0) {
//         break;
//     } else if (withdrawal > balance) {
//         cout << "Insufficient funds!" << endl;
//     } else {
//         balance -= withdrawal;
//         cout << "Remaining balance: $" << balance << endl;
//     }
// }

// task 9
// char str;
// do {
//     cout << "Enter 'Y' or 'N': ";
//     cin >> str;
//     str = toupper(str); 
//     if (str != 'Y' && str != 'N') {
//         cout << "Invalid!" << endl;
//     }
// } while (str != 'Y' && str != 'N');
// cout << "You entered: " << str << endl;

    // task 10
    // int choice;
    // double balance = 500.0, amount;
    
    // do {
    //     cout << "Menu:" << endl;
    //     cout << "1. Check Balance" << endl;
    //     cout << "2. Deposit Money" << endl;
    //     cout << "3. Withdraw Money" << endl;
    //     cout << "4. Exit" << endl;
    //     cout << "Enter your choice: " << endl;
    //     cin >> choice;
        
    //     switch (choice) {
    //         case 1:
    //             cout << "Your balance: $" << balance << endl;
    //             break;
    //         case 2:
    //             cout << "Enter deposit amount: ";
    //             cin >> amount;
    //             if (amount > 0) {
    //                 balance += amount;
    //                 cout << "Deposit successful! New balance: $" << balance << endl;
    //             } else {
    //                 cout << "Invalid deposit amount!" << endl;
    //             }
    //             break;
    //         case 3:
    //             cout << "Enter withdrawal amount: ";
    //             cin >> amount;
    //             if (amount > 0 && amount <= balance) {
    //                 balance -= amount;
    //                 cout << "Withdrawal successful! Remaining balance: $" << balance << endl;
    //             } else {
    //                 cout << "Invalid or insufficient funds!" << endl;
    //             }
    //             break;
    //         case 4:
    //             cout << "Exiting ATM. Thank you!" << endl;
    //             break;
    //         default:
    //             cout << "Invalid choice! Please select a valid option." << endl;
    //     }
    // } while (choice != 4);

    // task 11
    // int choice;
    // double a, b, result;
    
    // do {
    //     cout << "Calculator Menu:" << endl;
    //     cout << "1. Addition" << endl;
    //     cout << "2. Subtraction" << endl;
    //     cout << "3. Multiplication" << endl;
    //     cout << "4. Division" << endl;
    //     cout << "5. Exit" << endl;
    //     cout << "Enter your choice: ";
    //     cin >> choice;
        
    //     if (choice >= 1 && choice <= 4) {
    //         cout << "Enter two numbers: " << endl;
    //         cin >> a >> b;
    //     }
        
    //     switch (choice) {
    //         case 1:
    //             result = a + b;
    //             cout << "Result: " << result << endl;
    //             break;
    //         case 2:
    //             result = a - b;
    //             cout << "Result: " << result << endl;
    //             break;
    //         case 3:
    //             result = a * b;
    //             cout << "Result: " << result << endl;
    //             break;
    //         case 4:
    //             if (b != 0) {
    //                 result = a / b;
    //                 cout << "Result: " << result << endl;
    //             } else {
    //                 cout << "Error: Division by zero is not allowed!" << endl;
    //             }
    //             break;
    //         case 5:
    //             cout << "Exiting calculator. Thank you!" << endl;
    //             break;
    //         default:
    //             cout << "Invalid choice! Please select a valid option." << endl;
    //     }
    // } while (choice != 5);

    // task 12
    // int correct = 1234; 
    // int password;
    // int attempts = 0;
    
    // while (attempts < 3) {
    //     cout << "Enter password: ";
    //     cin >> password;
        
    //     if (password == correct) {
    //         cout << "Access granted!" << endl;
    //         return 0;
    //     } else {
    //         attempts++;
    //         cout << "Incorrect password. Attempts left: " << 3 - attempts << endl;
    //     }
    // }
    
    // cout << "Access denied! Too many failed attempts." << endl;

    // task 13
    // int secretNumber = rand() % 100 + 1; // Random number between 1 and 100
    // int guess;
    
    // cout << "Guess the number (between 1 and 100): " << endl;
    
    // do {
    //     cout << "Guess: ";
    //     cin >> guess;
        
    //     if (guess < secretNumber) {
    //         cout << "Too low" << endl;
    //     } else if (guess > secretNumber) {
    //         cout << "Too high" << endl;
    //     } else {
    //         cout << "Correct!" << endl;
    //     }
    // } while (guess != secretNumber);

    // task 14
    // message();

    // task 15
    // greet();

    // task 16
    // int a, b;
    // cout << "Enter two numbers: ";
    // cin >> a >> b;
    
    // cout << "Max: " << maxNumber(a, b) << endl;

    // task 17
    // int n;
    // cin >> n;
    // cout << "Factorial: " << factorial(n) << endl;

    // task 18
    // int a, b;
    // cin >> a >> b;
    // printRectangle(a, b);
//     return 0;
// }

