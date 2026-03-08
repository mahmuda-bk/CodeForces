#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--)
    {
        int n;
        cin >> n;
 
        if(n>=1 && n<=10)
        {
            cout << n << endl;
        }
        else if(n>10)
        {
            string s = to_string(n);
            int len = s.size();
            int f = s[0] - '0';
 
            int res = 9 * (len - 1) + f;
            cout << res << endl;
        }
        
    }
    return 0;
}
