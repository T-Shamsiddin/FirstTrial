//
// Created by Shamsiddin Tohirov on 01/04/25.
//
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

// int main() {
    // MATRIX

    // task 1
    // int x, y;
    // cin >> x >> y;
    // int m[x][y];
    // int sum = 0;
    // for (int i=0; i<x; i++) {
    //     for (int j=0; j<y; j++) {
    //         cin >> m[i][j];
    //         sum += m[i][j];
    //     }
    // }
    // cout << sum << endl;

    // task 2
    // int x, y;
    // cin >> x >> y;
    // int m[x][y];
    // for (int i=0; i<x; i++) {
    //     for (int j=0; j<y; j++) {
    //         cin >> m[i][j];
    //     }
    // }
    //
    // for (int i=0; i<x; i++) {
    //     int max = m[i][0];
    //     for (int j=0; j<y; j++) {
    //         if (m[i][j] > max) {
    //             max = m[i][j];
    //         }
    //     }
    //     cout << max << " ";
    // }

    // task 3
    // int x, y;
    // cin >> x >> y;
    // int m[x][y];
    // for (int i=0; i<x; i++) {
    //     for (int j=0; j<y; j++) {
    //         cin >> m[i][j];
    //     }
    // }
    //
    // for (int i=0; i<y; i++) {
    //     int sum = 0;
    //     for (int j=0; j<x; j++) {
    //         sum += m[j][i];
    //     }
    //     cout << sum << " ";
    // }

    // task 4
    // int n;
    // cin >> n;
    // int m[n][n];
    // int a = 1;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         m[i][j] = a;
    //         a++;
    //     }
    // }
    // int sum = 0;
    // for (int i = 0; i < n; i++) {
    //     sum+= m[i][i];
    // }
    // cout << sum << endl;

    // task 5
    // int x, y;
    // cin >> x >> y;
    // int m[x][y];
    // for (int i=0; i<x; i++) {
    //     for (int j=0; j<y; j++) {
    //         cin >> m[i][j];
    //     }
    // }
    // for (int i=0; i<y; i++) {
    //     for (int j=0; j<x; j++) {
    //         cout << m[j][i] << " ";
    //     }
    //     cout << endl;
    // }

    // task 6
    // int n;
    // cin >> n;
    // int m1[n][n];
    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<n; j++) {
    //         cin >> m1[i][j];
    //     }
    // }
    //
    // cout << "------------------" << endl;
    //
    // int m2[n][n];
    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<n; j++) {
    //         cin >> m2[i][j];
    //     }
    // }
    //
    // int c[n][n];
    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<n; j++) {
    //         c[i][j] = 0;
    //     }
    // }
    //
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         for (int k = 0; k < n; k++) {
    //             c[i][j] += m1[i][k] * m2[k][j];
    //         }
    //     }
    // }
    //
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << c[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // task 7
    // int n;
    // cin >> n;
    // int m[n][n];
    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<n; j++) {
    //         cin >> m[i][j];
    //     }
    // }
    // for (int i=0; i<n; i++) {
    //     for (int j=n-1; j>=0; j--) {
    //         cout << m[j][i] << " ";
    //     }
    //     cout << endl;
    // }

    //-------------------------------------------------------

    // STRING
    // task 1
    // string s;
    // cin>>s;
    // string vowels = "aeiou";
    // int vowel = 0, consonants = 0;
    // for (int i=0; i<s.length(); i++) {
    //     if (vowels.find(s[i]) != string::npos) {
    //         vowel++;
    //     }else {
    //         consonants++;
    //     }
    // }
    // cout << vowel << " " << consonants << endl;

    // task 2
    // string s;
    // cin>>s;
    // string rev = "";
    // for (int i=s.length()-1; i>=0; i--) {
    //     rev += s[i];
    // }
    // cout << rev << endl;

    // task 3
   //  string s;
   //  cin>>s;
   //  string rev = "";
   //  for (int i=s.length()-1; i>=0; i--) {
   //      rev += s[i];
   //  }
   // if (rev == s) {
   //     cout<<"YES"<<endl;
   // }else {
   //     cout<<"NO"<<endl;
   // }

    // task 4
    // map<char, int> frequency_map;
    // string s;
    // cin >> s;
    // for (char c : s) {
    //     frequency_map[c]++;
    // }
    //
    // char most_frequent = s[0];
    // int max_count = frequency_map[most_frequent];
    //
    // for (const auto& entry : frequency_map) {
    //     if (entry.second > max_count) {
    //         most_frequent = entry.first;
    //         max_count = entry.second;
    //     }
    // }
    // cout << most_frequent;

    // task 5
    // string s;
    // cin>>s;
    // fisrt option
    // set<char> c(s.begin(), s.end());
    // cout<<string(c.begin(), c.end())<<endl;

    // second option
    // string p = "";
    // for (int i=0; i<s.length(); i++) {
    //     if (p.find(s[i]) == string::npos) {
    //         p += s[i];
    //     }
    // }
    // cout << p << endl;

    // task 6
    // string s;
    // getline(cin, s);
    // string max = "";
    // string temp = "";
    // for (int i=0; i<s.length(); i++) {
    //     if (s[i] !=' ') {
    //         temp += s[i];
    //     }else {
    //         if (temp.length() >= max.length()) {
    //             max = temp;
    //         }
    //         temp = "";
    //     }
    // }
    // cout << max << endl;

    // task 7
    // string s1, s2;
    // cin>>s1 >> s2;
    // sort(s1.begin(), s1.end());
    // sort(s2.begin(), s2.end());
    // if(s1==s2) {
    //     cout<<"YES"<<endl;
    // }else {
    //     cout<<"NO"<<endl;
    // }


// }