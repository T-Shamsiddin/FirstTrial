//
// Created by Shamsiddin Tohirov on 27/03/25.
//
#include <iostream>
#include <cctype>
#include <cstdlib>  // For rand() and srand()

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

bool strictlyEqual(const int list1[], const int list2[], int size) {
    for (int i = 0; i < size; i++) {
        if (list1[i] != list2[i]) {
            return false;
        }
    }
    return true;
}

void reverseArray(int arr[], int start, int end) {
    int a = arr[end];
    for (int i = start; i < end-1; i++) {

    }
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

    // task 5
    // int n;
    // cin>>n;
    // int a[n], b[n];
    // for (int i = 0; i < n; i++) {
    //     cin>>a[i];
    // }
    // for (int i = 0; i < n; i++) {
    //     cin>>b[i];
    // }
    // cout << strictlyEqual(a, b, n) << endl;

    // task 6
    // int frequency[25] = {0};
    // char inputChar;
    // while (true) {
    //     cin >> inputChar;
    //     if (inputChar == '0') {
    //         break;
    //     }
    //     if (islower(inputChar)) {
    //         frequency[inputChar - 'a']++;
    //     }
    // }
    // cout << "Letter frequencies:" << endl;
    // for (int i = 0; i < 26; i++) {
    //     if (frequency[i] > 0) {
    //         cout << char('a' + i) << ": " << frequency[i] << endl;
    //     }
    // }

    // task 7
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++) {
    //     cin>>a[i];
    // }
    // for(int i=0;i<n;i++) {
    //     for(int j=i+1;j<n-1;j++) {
    //         if(a[i]>a[j]) {
    //             int temp = a[i];
    //             a[i] = a[j];
    //             a[j] = temp;
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++) {
    //     cout<<a[i]<<" ";
    // }

    // task 8
    // int frequency[6] = {0};
    // for (int i = 0; i < 10000; i++) {
    //     int roll = rand() % 6 + 1;
    //     frequency[roll - 1]++;
    // }
    //
    // // Display the frequency of each value (1-6)
    // for (int i = 0; i < 6; i++) {
    //     cout << "Value " << i + 1 << " appeared " << frequency[i] << " times." << endl;
    // }

    // task 9


}