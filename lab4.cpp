//
// Created by Shamsiddin Tohirov on 06/02/25.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //Problem 1
    // int n = 0;
    // cout << "Enter number: ";
    // cin >> n;
    // if (n>=0) {
    //     cout << "Positive" << endl;
    // }else {
    //     cout << "Negative" << endl;
    // }

    //Problem 2
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // if (n%2==0) {
    //     cout << "The number is even" << endl;
    // }else {
    //     cout << "The number is odd" << endl;
    // }

    //Problem 3
    // int a, b;
    // cout << "a: ";
    // cin >> a;
    // cout << "b: ";
    // cin >> b;
    // cout << ((a > b) ? a:b) << endl;

    //Problem 4
    // int a, b, c;
    // cout << "a: ";
    // cin >> a;
    // cout << "b: ";
    // cin >> b;
    // cout << "c: ";
    // cin >> c;
    // if (a>b) {
    //     if (a>c) {
    //         cout << a << endl;
    //     }else {
    //         cout << c << endl;
    //     }
    // }else {
    //     if (b>c) {
    //         cout << b << endl;
    //     }else {
    //         cout << c << endl;
    //     }
    // }

    //Problem 5
    // int year;
    // cout<<"Enter a year: ";
    // cin>>year;
    // if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
    //     cout<<"This year is a leap year."<<endl;
    // }else {
    //     cout<<"This year is not a leap year."<<endl;
    // }

    //Problem 6
    // int speed;
    // cout << "Enter speed: ";
    // cin >> speed;
    // if (speed<20) {
    //     cout << "too slow" << endl;
    // }else if (speed > 80) {
    //     cout << "too fast" << endl;
    // }else {
    //     cout << "just right" << endl;
    // }

    //Problem 7
    // int mark;
    // cout << "Enter your marks: ";
    // cin >> mark;
    // if (mark >= 50) {
    //     cout << "Pass" << endl;
    // }else {
    //     cout << "Fail" << endl;
    // }

    //Problem 8
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // if (n>0) {
    //     cout << "positive" << endl;
    // }else if (n<0) {
    //     cout << "negative" << endl;
    // }else {
    //     cout << "zero" << endl;
    // }

    //Problem 9
    // char c;
    // cout << "Enter a command: ";
    // c = getchar();
    // if (c=='g') {
    //     cout << "Go!" << endl;
    // }
    // if (c=='y') {
    //     cout << "Get Ready!" << endl;
    // }
    // if (c=='r') {
    //     cout << "Stop!" << endl;
    // }

    //Problem 10
    // int n;
    // cout << "Enter your grade: ";
    // cin >> n;
    // switch (n/10) {
    //     case 10:
    //         cout << "A";
    //         break;
    //     case 9:
    //         cout << "A";
    //         break;
    //     case 8:
    //         cout << "B";
    //         break;
    //     case 7:
    //         cout << "C";
    //         break;
    //     case 6:
    //         cout << "C";
    //         break;
    //     default:
    //         cout << "F";
    //         break;
    // }

    //Problem 11
    // int a, b;
    // cout << "a: ";
    // cin >> a;
    // cout << "b: ";
    // cin >> b;
    // if (a % b == 0) {
    //     cout << a << " is divisible by " << b << endl;
    // }else {
    //     cout << a << " is not divisible by " << b << endl;
    // }

    //Problem 12
    // int a, b, c;
    // cout << "a: ";
    // cin >> a;
    // cout << "b: ";
    // cin >> b;
    // cout << "c: ";
    // cin >> c;
    // if (a+c > b) {
    //     if (a+b > c) {
    //         if (b+c > a) {
    //             cout << "Can be formed" << endl;
    //             return 0;
    //         }
    //     }
    // }
    // cout << "can not be formed" << endl;

    //Problem 13
    // char ch;
    // cout << "Enter a character: ";
    // ch = getchar();
    // if (isalpha(ch)) {
    //     if (std::islower(ch)) {
    //         cout << "Lowercase" << endl;
    //     }else {
    //         cout << "Uppercase" << endl;
    //     }
    // }else {
    //     cout << "Is not an alphabet" << endl;
    // }

    //Problem 14
    // int weight_1, weight_2;
    // double cost_1, cost_2;
    // cout << "Please enter the weight 1: ";
    // cin >> weight_1;
    // cout << "Please enter the cost 1: ";
    // cin >> cost_1;
    // cout << "Please enter the weight 2: ";
    // cin >> weight_2;
    // cout << "Please enter the cost 2: ";
    // cin >> cost_2;
    // if (double(cost_1/weight_1) == double(cost_2/weight_2)) {
    //     cout << "No difference" << endl;
    // }
    // if (double(cost_1/weight_1) < double(cost_2/weight_2)) {
    //     cout << "Package 1 is better choice" << endl;
    // }else {
    //     cout << "Package 2 is better choice" << endl;
    // }

    //Problem 15
    // int n;
    // cout << "Enter a three digit integer: ";
    // cin >> n;
    // int a = (n%10 * 100) + (n%100 - n%10) + n/100;
    // if (a==n) {
    //     cout << "Palindrome" << endl;
    // }else {
    //     cout << "Not a palindrome" << endl;
    // }

    //Problem 16
    // int x, y;
    // cout << "x: ";
    // cin >> x;
    // cout << "y: ";
    // cin >> y;
    // double a = sqrt((x*x + y*y));
    // if (a<=10) {
    //     cout << "Inside the circle" << endl;
    // }else {
    //     cout << "Outside the circle" << endl;
    // }

    //Problem 17
    double gpa;
    cout << "Enter GPA (0-4.5): ";
    cin >> gpa;

    int category = (gpa >= 4.0) ? 4 : (gpa >= 3.5) ? 3 : (gpa >= 3.0) ? 2 : 1;

    switch (category) {
        case 4:
            cout << "Scholarship: 80%" << endl;
            break;
        case 3:
            cout << "Scholarship: 60%" << endl;
            break;
        case 2:
            cout << "Scholarship: 50%" << endl;
            break;
        default:
            cout << "No scholarship" << endl;
            break;
    }
}