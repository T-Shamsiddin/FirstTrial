//
// Created by Shamsiddin Tohirov on 13/03/25.
//

#include <iostream>
using namespace std;
int task_one(int a, int b);
int factorial(int n);
int fibonacci(int n);
int sum(int n);
void numberPrint(int n);
int countDigits(int n, int count);
int sumOfDigits(int n, int sum);
int power(int a, int b);
int reverseDigits(int n, int result);
int isPolindrome(int n, int reverse);
int isPrime(int n, int check);
void hanoi(int n, char from, char to, char aux);

int main() {
    // task 1
    // int a, b;
    // cout << "Please enter two integers: ";
    // cin >> a >> b;
    // cout << "Multiplication: " << task_one(a, b);

    // task 2
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // cout << factorial(n) << endl;

    // task 3
    // int n;
    // cin >> n;
    // cout << fibonacci(n) << endl;

    // task 4
    // int n;
    // cin >> n;
    // cout << sum(n) << endl;

    // task 5
    // int n;
    // cin >> n;
    // numberPrint(n);

    // task 6
    // int n;
    // cin >> n;
    // cout << countDigits(n, 0);

    // task 7
    // int n;
    // cin >> n;
    // cout << abs(sumOfDigits(n, 0)) << endl;

    // task 8
    // int a, b;
    // cout << "Please enter two integers: ";
    // cin >> a >> b;
    // cout << power(a, b) << endl;

    // task 9
    // int n;
    // cin >> n;
    // cout << reverseDigits(n, 0);

    // task 10
    // int n;
    // cin >> n;
    // if (isPolindrome(n, countDigits(n, 0))==0) {
    //     cout << "true" << endl;
    // }else {
    //     cout << "false" << endl;
    // }

    // task 11
    // int n;
    // cin >> n;
    // isPrime(n, 2);

    // task 12
    // int n;
    // cin >> n;
    // hanoi(n, 'A', 'B', 'C');
}

int task_one(int a, int b) {
    if (b==0) return 0;
    if (b>0) return a+task_one(a, b-1);
    return -task_one(a, -b);
}

int factorial(int n) {
    if (n==0 || n==1) return 1;
    if (n>1) return n * factorial(n-1);
}

int fibonacci(int n) {
    if (n==0) return 0;
    if (n==1) return 1;
    if (n>1) return fibonacci(n-1) + fibonacci(n-2);
}

int sum(int n) {
    if (n==0) return 0;
    if (n==1) return 1;
    if (n>1) return n + sum(n-1);
}

void numberPrint(int n) {
    if (n <= 0) return;
    cout << n << " ";
    numberPrint(n-1);
}

int countDigits(int n, int count) {
    if (n==0) {
        return count;
    }else {
        return countDigits(n/10, count + 1);
    }
}

int sumOfDigits(int n, int sum) {
    if (n==0) {
        return sum;
    }else {
        return sumOfDigits(n/10, sum+n%10);
    }
}

int power(int a, int b) {
    if (b==1) return a;
    if (b>1) return a * power(a, b-1);
}

int reverseDigits(int n, int result) {
    if (n==0) {
        return result;
    }else {
        return reverseDigits(n/10, result*10 + n%10);
    }
}

int isPolindrome(int n, int digits) {
    if (n<10) {
        return 0;
    }
    int first = n/int(pow(10, digits-1));
    int last = n%10;
    cout << first << " " << last << endl;
    if (first==last) {
        int number = (n % (int)pow(10, digits - 1)) / 10;
        cout << number << endl;
        return isPolindrome(number, digits-2);
    }else {
        return 1;
    }
}

int isPrime(int n, int check) {
    if (abs(n)==2) {
        cout << "true";
        return 0;
    }
    if (abs(n)%check==0 && check<=sqrt(abs(n))) {
        cout << "false";
        return 0;
    }
    if (abs(n)%check!=0 && check==int(sqrt(abs(n)))+1) {
        cout << "true";
        return 0;
    }
    return isPrime(n, check+1);
}

void hanoi(int n, char from, char to, char aux) {
    if (n==0) return;
    hanoi(n-1, from, aux, to);
    cout << n << " - from " <<from << " to " << to << endl;
    hanoi(n-1, aux, to, from);
}