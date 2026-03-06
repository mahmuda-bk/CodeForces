#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    for(int i=0; i<t; i++)
    {
        string s;
        cin >> s;
 
        int sz = s.size();
 
        if(sz%2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            int h = sz/2;
 
            string c;
            for(int p=0; p<h; p++)
            {
                c[p] = s[p];
            }
            int cnt = 0;
            for(int p=0; p<h; p++)
            {
                if(c[p] == s[h+p])
                    cnt++;
            }
 
            if(cnt == h)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            }
        
    }
    return 0;
}
