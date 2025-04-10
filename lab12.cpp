//
// Created by Shamsiddin Tohirov on 03/04/25.
//
#include <iostream>
using namespace std;

// #define val 33.3;
// #define number 50;
// int a;
// int& fun(){
//     return a;
// }
// int foo(){
//     return a;
// }

void sortArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int* countDigits(const int& number) {
    int* c = new int[10]();
    int n = number;
    if (n ==0) {
        c[0]++;
        return c;
    }

    while (n>0) {
        int a = n%10;
        c[a]++;
        n/=10;
    }
    return c;
}

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
    // int n;
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }
    // int *data = a;
    // for (int i = 0; i < n; i++) {
    //     if (*data >= a[i]) {
    //         data = &a[i];
    //     }
    // }
    // cout << *data;

    // task 12
    // int n1=9,n2=11, *ptr_1= nullptr, *ptr_2= nullptr, k=0;
    // double t;
    // ptr_1=&n1;
    // // ptr_2=&n2;
    // // *ptr_2=n2;
    // ptr_2=&n2;
    // t=val;
    // k=val;
    // // foo()=number;
    // fun()=number;
    // cout << "n1: " << n1 << " ";
    // cout << "n2: " << n2 << " ";
    // cout << "*ptr_1: " << *ptr_1 << " ";
    // cout << "*ptr_2: " << *ptr_2 << endl;
    // cout << "t (double from macro val): " << t << endl;
    // cout << "k (int from macro val): " << k << endl;
    // cout << "a (after fun()=number): " << a << endl;

    // task 13
    // int n;
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }
    // int *ptr = a;
    // for (int i = 0; i < n; i++) {
    //     cout << ptr[i] << " : " << &ptr[i] << endl;
    // }

    // task 14
    // int n;
    // cin >> n;
    // int *ptr = &n;
    // cout << *ptr << endl;

    // task 15
    // int arr[] = {10, 20, 30, 40, 50};
    // int *ptr = arr;
    // cout << *ptr << endl;
    // int i = size(arr);
    // cout << *(ptr + i-1) << endl;

    // task 16
    // int n = 75;
    // int *p = &n;
    // cout << *p << endl;
    // *p+=10;
    // cout << *p << endl;
    // cout << n << endl;

    // task 17
    // int n;
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }
    // int *start = a;
    // int size = sizeof(a) / sizeof(a[0]);
    // int *end = a+size-1;
    // while (start < end) {
    //     int temp = *start;
    //     *start = *end;
    //     *end = temp;
    //     start++;
    //     end--;
    // }
    // for (int i = 0; i < size; i++) {
    //     cout << a[i] << endl;
    // }

    // task 18
    // int n;
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }
    // int* first = &a[0], *second = nullptr, *third = nullptr;
    // for (int i = 0; i < n; i++) {
    //     if (a[i]> *first) {
    //         third = second;
    //         second = first;
    //         first = &a[i];
    //     }else if ((a[i]>*second || second == nullptr) && &a[i] != first) {
    //         third = second;
    //         second = &a[i];
    //     }else if ((a[i]>*third || third == nullptr) && &a[i] != second && &a[i] != first) {
    //         third = &a[i];
    //     }
    // }
    // cout << *first << " " << *second << " " << *third << endl;

    // task 19
    // int n;
    // cin >> n;
    // int * result = countDigits(n);
    // for (int i = 0; i < 10; i++) {
    //     cout << i << ": " << result[i] << endl;
    // }

    // task 20
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sortArray(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}