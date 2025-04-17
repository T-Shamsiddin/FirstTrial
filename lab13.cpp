//
// Created by Shamsiddin Tohirov on 17/04/25.
//
#include <iostream>
#include <float.h>
#include <cstdlib>
#include <ctime>
using namespace std;

void greet() {
    cout << "Hello" << endl;
}

void bye() {
    cout << "Goodbye" << endl;
}

// void add(int a, int b) {
//     cout << a + b << endl;
// }
//
// void multiply(int a, int b) {
//     cout << a * b << endl;
// }

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

void result(int (*op)(int, int), int x, int y) {
    int result = op(x, y);
    cout << "Result: " << result << endl;
}
int main() {
    // task1
    // int arr[5] = {10, 20, 30, 40, 50};
    // int* a = arr;
    // for (int i = 0; i < 5; i++) {
    //     cout << *(a + i) << " ";
    // }

    // task 2
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++) {
    //     cin>>a[i];
    // }
    // int* ptr = a;
    // for(int i=0;i<n;i++) {
    //     *(ptr + i) *= 3;
    //     cout << *(ptr + i) << " ";
    // }

    // task 3
    // int a[5] = {1, 2, 3, 4, 5};
    // int* ptr = a;
    // cout << ptr[2] << endl;
    // cout << *(ptr+2) << endl;

    // task 4
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++) {
    //     cin>>a[i];
    // }
    // int* ptr = a+n-1;
    // for (int i = 0; i < n; i++) {
    //     cout << *(ptr - i) << " ";
    // }

    // task 6
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++) {
    //     cin>>a[i];
    // }
    // int* ptr = a;
    // for (int i = 0; i < 4; i++) {
    //     cout << *(ptr + i) << ": " << (ptr + i) << endl;
    // }

    // task 7
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++) {
    //     cin>>a[i];
    // }
    // int* ptr = a;
    // for (int i = 0; i < n; i++) {
    //     if (*(ptr + i) % 2 == 0) {
    //         cout << *(ptr + i) << " ";
    //     }
    // }

    // task 8
    // int arr[2][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6}
    // };
    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cout << *(*(arr + i) + j) << " ";
    //     }
    //     cout << endl;
    // }

    // task 9
    // int a = 1, b = 2, c = 3;
    // int* arr[3];
    // arr[0] = &a;
    // arr[1] = &b;
    // arr[2] = &c;
    //
    // for (int i = 0; i < 3; i++) {
    //     cout << *arr[i] << endl;
    // }

    // task 10
    // int arr[5] = {9, 3, 7, 1, 6};
    // for (int i = 0; i < size - 1; i++) {
    //     for (int j = 0; j < size - i - 1; j++) {
    //         if (*(arr + j) > *(arr + j + 1)) {
    //             int temp = *(arr + j);
    //             *(arr + j) = *(arr + j + 1);
    //             *(arr + j + 1) = temp;
    //         }
    //     }
    // }
    // for (int i = 0; i < 5; i++) {
    //     cout << *(arr + i) << " ";
    // }

    // task 11
    // string arr[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    // string *a = arr;
    // for (int i = 0; i < 4; i++) {
    //     cout << *(a + i) << " ";
    // }

    // task 12
    // string arr[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    // string* a = arr;
    // for (int i = 0; i < 7; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cout << (*(a+i))[j];
    //     }
    //     cout << endl;
    // }

    // task 13
    // string type[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    // string f[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};
    //
    // string a[4][13];
    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 13; j++) {
    //         a[i][j] = f[j] + " of " + type[i];
    //     }
    // }
    //
    // cout << a[3][12] << endl;

    // tsk 15
    // void (*funcPtr)();
    // funcPtr = greet;
    // funcPtr();
    // funcPtr = bye;
    // funcPtr();

    // task 16
    // int a = 1, b = 1;
    // void (*fptr)(int, int);
    // fptr = add;
    // fptr(a, b);
    //
    // fptr = multiply;
    // fptr(a, b);

    // task 17
    // int a, b;
    // cin >> a >> b;
    // result(add, a, b);
    // result(multiply, a, b);

    return 0;
}