#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int q;
    cin >> q;
    for(int i=0; i<q; i++)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        int cnt = 0;
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<n; k++)
            {
                if(s[j]==t[k])
                {
                    cnt++;
                    t[k] = '?';
                    break;
                }
                    
            }
        }
        if(cnt == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
