//
// Created by Shamsiddin Tohirov on 13/02/25.
//
#include <iostream>
using namespace std;
// int main() {
    //Problem 1.1
    // for (int i = 1; i <= 10; i++) {
    //     cout << i << endl;
    // }

    // //Problem 1.2
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     cout << i << endl;
    // }

    //Problem 1.3
    // int sum;
    // for (int i = 1; i <= 10; i++) {
    //     sum += i;
    // }
    // cout << sum << endl;

    //Problem 1.4
    // int n, sum;
    // cout << "Enter a number: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     sum+=1;
    // }
    // cout << sum << endl;

    //Problem 1.5
    // double sum = 0;
    // for (int i = 1; i <= 10; i++) {
    //     sum+=i;
    // }
    // cout << sum << endl;
    // cout << sum/10 << endl;

    //Problem 1.6
    // double sum = 0;
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     sum+=i;
    // }
    // cout << sum << endl;
    // cout << sum/10 << endl;

    //Problem 2.1
    // for (int i = 1; i <= 10; i++) {
    //     if (i % 2 != 0) {
    //         cout << i << endl;
    //     }
    // }

    //Problem 2.2
    // for (int i = 1; i <= 10; i++) {
    //     if (i % 2 == 0) {
    //         cout << i << endl;
    //     }
    // }

    //Problem 2.3
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     if (i % 2 != 0) {
    //         cout << i << endl;
    //     }
    // }

    //Problem 2.4
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     if (i % 2 == 0) {
    //         cout << i << endl;
    //     }
    // }

    //Problem 2.5
    // for (int i = 1; i <= 100; i++) {
    //     if (i % 10 == 0) {
    //         cout << i << endl;
    //     }
    // }

    //Problem 2.6
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     if (i % 10 == 0) {
    //         cout << i << endl;
    //     }
    // }

    //Problem 3
    // int row = 1;
    // for (int i = 65; i <= 90; i++) {
    //     if (row < 5) {
    //         cout << char(i);
    //         cout << " ";
    //         row++;
    //     }else {
    //         cout << endl;
    //         row=1;
    //     }
    // }

    //Problem 4
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // if (n > 0) {
    //     int factorial = 1;
    //     for (int i = 2; i <= n; i++) {
    //         factorial *= i;
    //     }
    //     cout << factorial << endl;
    // }else if (n == 0) {
    //     cout << "1" << endl;
    // }else {
    //     cout << "Factorial of a negative number is not defined." << endl;
    // }

    //Problem 5
    // int n;
    // cout << "Enter a number of classes: ";
    // cin >> n;
    // if(n == 0) {
    //     cout << "There is no classes" << endl;
    // }
    // if(n > 0) {
    //     double total_mark = 0;
    //     int total_credits = 0;
    //     for(int i = 0; i < n; i++) {
    //         int credits;
    //         double mark;
    //         cout << "Enter first credits and then mark: ";
    //         cin >> credits >> mark;
    //         total_mark += (credits * mark);
    //         total_credits += credits;
    //     }
    //     cout << "Final mark: " << total_mark/total_credits << endl;
    // }else {
    //     cout << "Invalid input" << endl;
    // }

    //Problem 6
    // int n, students;
    // cout << "Enter number of students: ";
    // cin >> students;
    // if(students == 0) {
    //     cout << "There is no need to calculate" << endl;
    // }
    //
    // if (students > 0) {
    //     double final = 0;
    //     for (int i = 0; i < students; i++) {
    //         cout << "Student " << i+1 << ": " << endl;
    //         cout << "Enter a number of classes: ";
    //         cin >> n;
    //         if(n == 0) {
    //             cout << "There is no classes" << endl;
    //         }
    //         if(n > 0) {
    //             double total_mark = 0;
    //             int total_credits = 0;
    //             for(int i = 0; i < n; i++) {
    //                 int credits;
    //                 double mark;
    //                 cout << "Enter first credits and then mark: ";
    //                 cin >> credits >> mark;
    //                 total_mark += (credits * mark);
    //                 total_credits += credits;
    //             }
    //             final = total_mark / total_credits;
    //         }else {
    //             cout << "Invalid input" << endl;
    //         }
    //         cout << endl;
    //     }
    //     cout << "Final score: " << final;
    // }else {
    //     cout << "Number of students can not be negative" << endl;
    // }

    //Problem 7
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    //Problem 8
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    //Problem 9
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // int count = 0;
    // for (int i = 2; i <= n; i++) {
    //     if (n % i == 0) {
    //         count++;
    //     }
    // }
    // if (count == 1) {
    //     cout << "Number is prime" << endl;
    // }else {
    //     cout << "Number is not prime" << endl;
    // }

    //Problem 10
    // int n, sum = 0;
    // cout << "Enter a number: ";
    // cin >> n;
    // if(n > 0) {
    //     for (int i = 1; i <= n; i++) {
    //         sum += i*i;
    //         cout << i << " * " << i << " = " << i*i << endl;
    //     }
    //     cout << "The total sum is: " << sum << endl;
    // }else {
    //     cout << n << "Enter number that is greater than 0" << endl;
    // }

    //Problem 11
    // int positive = 0, negative = 0, total = 0, sum = 0;
    // double average = 0;
    // cout << "Enter a numbers: ";
    // while (true) {
    //     int n;
    //     cin >> n;
    //     total++;
    //     sum += n;
    //     if (n == 0) {
    //         break;
    //     }
    //     if (n < 0) {
    //         negative++;
    //     }
    //     if (n > 0) {
    //         positive++;
    //     }
    // }
    // cout << "positive: " << positive << endl;
    // cout << "negative: " << negative << endl;
    // cout << "total: " << total << endl;
    // if (total == 1) {
    //     cout << "Average: 0" << endl;
    //     return 0;
    // }
    // average = double(sum)/(total-1);
    // cout << "Average: " << average << endl;

    //Problem 12
    // int n;
    // cout << "Enter an integer: ";
    // cin >> n;
    //
    // cout << "Digits in reverse order: ";
    // while (n != 0) {
    //     cout << n % 10;
    //     n /= 10;
    // }
    // cout << endl;

    //Problem 13
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // if (n==0) {
    //     cout << "The depth is 0" << endl;
    //     return 0;
    // }
    // if (n>0) {
    //     for (int i=1; i<=n; i++) {
    //         for (int j=1; j<=i; j++) {
    //             cout << i;
    //         }
    //         cout << endl;
    //     }
    // }else {
    //     cout << "Enter a positive number" << endl;
    // }

    //Problem 14
    // int n;
    // cout << "Enter a binary number: ";
    // cin >> n;
    // int decimal = 0;
    // int i = 1;
    // while (n > 0) {
    //     int a = n%10;
    //     decimal += i*a;
    //     i*=2;
    //     n/=10;
    // }
    // cout << decimal << endl;
// }