#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--)
    {
        string s;
        cin >> s;
 
        if(s[0]=='a') cout << "Yes" << endl;
        else if(s[1]=='b') cout << "Yes" << endl;
        else if(s[2]=='c') cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
