#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    int p = 0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == 'h')
        {
            p = i;
            break;
        }
    }
 
    int q = 0;
    for(int i=p+1; i<s.length(); i++)
    {
        if(s[i] == 'e')
        {
            q = i;
            break;
        }
    }
 
    int r = 0;
    for(int i=q+1; i<s.length(); i++)
    {
        if(s[i] == 'l')
        {
            r = i;
            break;
        }
    }
 
    int ss = 0;
    for(int i=r+1; i<s.length(); i++)
    {
        if(s[i] == 'l')
        {
            ss = i;
            break;
        }
    }
 
    int t = 0;
    for(int i=ss+1; i<s.length(); i++)
    {
        if(s[i] == 'o')
        {
            t = i;
            break;
        }
    }
 
    if(q>p && r>q && ss>r && t>ss)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
