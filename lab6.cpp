//
// Created by Shamsiddin Tohirov on 20/02/25.
//
#include <iostream>
#include <math.h>
using namespace std;

int findGCD(int a, int b) {
    if (a == 0)
        return b;
    return findGCD(b % a, a);
}

int main() {
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
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    int g = findGCD(a, b);
    cout << g << endl;




    return 0;
}

