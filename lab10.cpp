//
// Created by Shamsiddin Tohirov on 27/03/25.
//
#include <iostream>
using namespace std;

int indexOfLargestElement(double array[], int size) {
    if (size<=0) {
        return -1;
    }
    int max = array[0], index = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] >= max) {
            index = i;
            max = array[i];
        }
    }
    return index;
}

int main() {
    // task 1
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++) {
    //     cin>>a[i];
    // }
    // int sum = 0;
    // for(int i=0;i<n;i++) {
    //     sum += a[i];
    // }
    // cout<<sum;

    // task 2
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++) {
    //     cin>>a[i];
    // }
    // int sum = 0;
    // for(int i=0;i<n;i++) {
    //     sum += a[i];
    // }
    // cout<<float(sum/n);

    // task 3
    // int n;
    // cin>>n;
    // if (n<=0) {cout<<"Invalid input"<<endl; return 0;}
    // int a[n];
    // for(int i=0;i<n;i++) {
    //     cin>>a[i];
    // }
    // int min = a[0];
    // for(int i=0;i<n;i++) {
    //     if (min > a[i]) {
    //         min = a[i];
    //     }
    // }
    // cout << min << endl;

    // task 4
    // int n;
    // cin>>n;
    // double a[15];
    // for(int i=0;i<n;i++) {
    //     cin>>a[i];
    // }
    // cout << indexOfLargestElement(a, n) << endl;

    // task 6

}