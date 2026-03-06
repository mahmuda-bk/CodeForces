#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (char &c1 : s)
        c1 = tolower(c1);
 
    vector<bool> seen(26, false);
 
    for (char c : s) {
        if ('a' <= c && c <= 'z') {
            seen[c - 'a'] = true;
        }
    }
 
    for (bool exists : seen) {
        if (!exists) {
            cout << "NO";
            return 0;
        }
    }
 
    cout << "YES";
 
}
