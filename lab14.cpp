//
// Created by takhi on 4/17/2025.
//

#include <cmath>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    double gpa;
};

struct Date {
    int day;
    int month;
    int year;
};

struct StudentInfo {
    int Id;
    int Age;
    char Gender;
    float CGA;
};

struct StudentGrade {
    int Lab[5];
    int Homework[3];
    int Exam[2];
};

struct BankAccount {
    char name[15];
    int number;
    float balance;
    Date date;
};

struct Point {
    float x, y;
};

struct Line {
    Point p1, p2;
};

float distance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

struct Triangle {
    Point A, B, C;
};

int main() {
    // task 1
    // ofstream outFile("output.txt");
    // if (outFile.is_open()) {
    //     outFile << "Hello, File!" << endl;
    //     outFile.close();
    // }

    // task 2
    // ifstream file("output.txt");
    // if (file.is_open()) {
    //     string line;
    //     while (getline(file, line)) {
    //         cout << line << endl;
    //     }
    //     file.close();
    // }

    // task 3
    // string name;
    // int age;
    // cout << "Name: " << endl;
    // getline(cin, name);
    // cout << "Age: " << endl;
    // cin >> age;
    // ofstream file("user.txt");
    // if (file.is_open()) {
    //     file << name << ": " << age << endl;
    //     file.close();
    // }

    // task 4
    // ifstream file("data.txt");
    // if (file.is_open()) {
    //     string line;
    //     while (getline(file, line)) {
    //         cout << line << endl;
    //     }
    //     file.close();
    // }

    // task 5
    // ifstream file1("data.txt");
    // if (file1.is_open()) {
    //     ofstream file2("target.txt");
    //     if (file2.is_open()) {
    //         string line;
    //         while (getline(file1, line)) {
    //             file2 << line << endl;
    //         }
    //         file1.close();
    //         file2.close();
    //     }
    // }

    // task 6
    // ifstream file("output.txt");
    // if (file.is_open()) {
    //     string line;
    //     int count = 0;
    //     while (getline(file, line)) {
    //         for (int i = 0; i<line.size(); i++) {
    //             if (line[i]==' ' || i==line.size()-1) {
    //                 count++;
    //             }
    //         }
    //     }
    //     file.close();
    //     cout << count;
    // }

    // task 7
    // ifstream file("numbers.txt");
    // if (file.is_open()) {
    //     int number, sum = 0;
    //     while (file >> number) {
    //         sum += number;
    //     }
    //     file.close();
    //     cout << sum << endl;
    // }

    // task 8
    // ifstream file("numbers.txt");
    // if (file.is_open()) {
    //     int number, min = INT_MAX, max = INT_MIN;
    //     while (file >> number) {
    //         if (number>=max) {
    //             max = number;
    //         }
    //         if (number<=min) {
    //             min = number;
    //         }
    //     }
    //     file.close();
    //     cout << max << " : " << min << endl;
    // }

    // task 9
    // Student student;
    // cout << "ID: ";
    // cin >> student.id;
    // cin.ignore();
    // cout << "name: ";
    // getline(cin, student.name);
    // cout << "GPA: ";
    // cin >> student.gpa;
    //
    // ofstream file("student.txt");
    // if (file.is_open()) {
    //     file << "Student ID: " << student.id << endl;
    //     file << "Name: " << student.name << endl;
    //     file << "GPA: " << student.gpa << endl;
    //     file.close();
    // }

    // task 10
    // ifstream file("student.txt");
    // if (file.is_open()) {
    //     string line;
    //     while (getline(file, line)) {
    //         cout << line << endl;
    //     }
    //     file.close();
    // }

    // --------------------STRUCT---------------------

    // task 13
    // Date date;
    // cout << "Enter day: ";
    // cin >> date.day;
    // cin.ignore();
    //
    // cout << "Enter month: ";
    // cin >> date.month;
    //
    // cout << "Enter year: ";
    // cin >> date.year;
    //
    // cout << date.day << "-" << date.month << "-" << date.year << endl;

    // task 14
    // StudentInfo student = {1, 19, 'M', 3.4};
    // cout << "Id: " << student.Id << ", Age: " << student.Age << ", Gender: " << student.Gender
    //  << ", CGA: " << student.CGA << endl;

    // task 15
    // StudentGrade student = {{90, 85, 88, 92, 87},{75, 80, 78},{89, 94}};
    // int total = 0;
    // int count = 0;
    // for (int i = 0; i < 5; i++) {
    //     total += student.Lab[i];
    //     count++;
    // }
    //
    // for (int i = 0; i < 3; i++) {
    //     total += student.Homework[i];
    //     count++;
    // }
    //
    // for (int i = 0; i < 2; i++) {
    //     total += student.Exam[i];
    //     count++;
    // }
    //
    // float average = static_cast<float>(total) / count;
    // for (int i = 0; i < 5; i++) cout << student.Lab[i] << " ";
    // cout << endl;
    //
    // for (int i = 0; i < 3; i++) cout << student.Homework[i] << " ";
    // cout << endl;
    //
    // for (int i = 0; i < 2; i++) cout << student.Exam[i] << " ";
    // cout << endl;
    //
    // cout << "Total: " << total << endl;
    // cout << "Average: " << average << endl;

    // task 16
    // StudentInfo students[3];
    // for (int i = 0; i < 3; i++) {
    //     cout << "Enter details for Student " << i + 1 << ":" << endl;
    //     cout << "ID: ";
    //     cin >> students[i].Id;
    //     cout << "Age: ";
    //     cin >> students[i].Age;
    //     cout << "Gender (M/F): ";
    //     cin >> students[i].Gender;
    //     cout << "CGA: ";
    //     cin >> students[i].CGA;
    //     cout << endl;
    // }
    //
    // for (int i = 0; i < 3; i++) {
    //     cout << "Student " << i + 1 << " -> ";
    //     cout << "Id: " << students[i].Id
    //          << ", Age: " << students[i].Age
    //          << ", Gender: " << students[i].Gender
    //          << ", CGA: " << students[i].CGA << endl;
    // }

    // task 17
    // StudentInfo student1 = {1, 18, 'M', 3.75};
    // StudentInfo student2 = student1;
    //
    // cout << "Id: " << student1.Id
    //      << ", Age: " << student1.Age
    //      << ", Gender: " << student1.Gender
    //      << ", CGA: " << student1.CGA << endl;
    //
    // cout << "Id: " << student2.Id
    //      << ", Age: " << student2.Age
    //      << ", Gender: " << student2.Gender
    //      << ", CGA: " << student2.CGA << endl;

    // task 18
    // StudentInfo students[5] = {
    //     {1, 18, 'M', 3.9},
    //     {2, 19, 'F', 3.5},
    //     {3, 20, 'M', 3.78},
    //     {4, 21, 'F', 3.8},
    //     {5, 0, ' ', 0.0}
    // };
    // students[4] = students[2];
    // cout << "Id: " << students[2].Id
    //      << ", Age: " << students[2].Age
    //      << ", Gender: " << students[2].Gender
    //      << ", CGA: " << students[2].CGA << endl;
    // cout << "Id: " << students[4].Id
    //     << ", Age: " << students[4].Age
    //     << ", Gender: " << students[4].Gender
    //     << ", CGA: " << students[4].CGA << endl;

    // task 19
    // BankAccount account;
    // cout << "name: ";
    // cin >> account.name;
    // cout << "account number: ";
    // cin >> account.number;
    // cout << "account balance: ";
    // cin >> account.balance;
    // cout << "Date of Birth (DD MM YYYY): ";
    // cin >> account.date.day >> account.date.month >> account.date.year;
    //
    // cout << "\n----- Account Information -----" << endl;
    // cout << "Name: " << account.name << endl;
    // cout << "Account No: " << account.number << endl;
    // cout << "Balance: $" << account.balance << endl;
    // cout << "Date of Birth: "
    //      << account.date.day << "-"
    //      <<  account.date.month << "-"
    //      << account.date.year << endl;

    // task 20
    // Line line;
    // cout << "Point 1 (x y): ";
    // cin >> line.p1.x >> line.p1.y;
    //
    // cout << "Point 2 (x y): ";
    // cin >> line.p2.x >> line.p2.y;
    //
    // float dx = line.p2.x - line.p1.x;
    // float dy = line.p2.y - line.p1.y;
    // float distance = sqrt(dx * dx + dy * dy);
    //
    // cout << "Distance = " << distance << endl;

    // task 21
    // Triangle t;
    // cout << "Point A (x y): ";
    // cin >> t.A.x >> t.A.y;
    // cout << "Point B (x y): ";
    // cin >> t.B.x >> t.B.y;
    // cout << "Point C (x y): ";
    // cin >> t.C.x >> t.C.y;
    //
    // float one = distance(t.A, t.B);
    // float two = distance(t.B, t.C);
    // float three = distance(t.C, t.A);
    //
    // float perimeter = one + two + three;
    // cout << perimeter;

    return 0;
}