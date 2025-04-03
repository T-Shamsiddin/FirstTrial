//
// Created by Shamsiddin Tohirov on 03/04/25.
//
#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void square(int *a) {
    *a = *a * *a;
}

int main() {

    // task 1
    // int n;
    // cin>>n;
    // int *a = &n;
    // cout<<a<<endl;
    // cout<<*a<<endl;
    // cout<<&a<<endl;

    // task 2
    // int n;
    // cin>>n;
    // int *a = &n;
    // cout<<n<<endl;
    // cout<<*a<<endl;
    // *a = *a+1;
    // cout<<n<<endl;
    // cout<<*a<<endl;

    // task 3
    // int a, b;
    // cin >> a >> b;
    // swap(&a, &b);
    // cout << a << endl;
    // cout << b << endl;

    // task 4
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int *a = arr;
    // for (int i = 0; i < 10; i++) {
    //     cout << *(a+i) << " ";
    // }

    // task 5
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int *a = arr;
    // cout << *(a + size(arr)/2) << endl;

    // task 6
    // int n;
    // cin >> n;
    // square(&n);
    // cout << n << endl;

    // task 7
    // int n;
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }
    // int *b = a;
    // cout << *b << endl;
    // cout << sizeof(b) << endl;
    // cout << sizeof(a) << endl;

    // task 8
    // int n;
    // cin >> n;
    // int *a = &n;
    // cout << a << endl;
    // cout << *a << endl;
    // cout << *(static_cast<int*>(a)) << endl;

    // task 9
    // int n;
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }
    // int *p = a;
    // int max = *p;
    // for (int i = 0; i < n; i++) {
    //     if (max < *(p+i)) {
    //     max = *(p+i);}
    // }
    // cout << max << endl;

    // task 10
    // int a, b;
    // cin >> a >> b;
    // int *pA = &a, *pB = &b;
    // cout << *pA << endl;
    // cout << *pB << endl;

    // task 11

    return 0;
}