#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--)
    {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        if (s.find("2026") != string::npos || s.find("2025") == string::npos) {
            cout << 0 << "\n";
            continue;
        }
 
        int cost2026 = 4;
        for (int i = 0; i + 3 < n; i++) {
            int diff = 0;
            if (s[i] != '2') diff++;
            if (s[i+1] != '0') diff++;
            if (s[i+2] != '2') diff++;
            if (s[i+3] != '6') diff++;
            cost2026 = min(cost2026, diff);
        }
 
        cout << min(cost2026, 1) << endl;
    }
    return 0;
}
