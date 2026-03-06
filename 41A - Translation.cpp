
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    int x = s.size();
    string t;
    cin >> t;
    int y = t.size();
    int cnt = 0;
 
    if (x == y)
    {
        for (int i = 0; i < x; i++)
        {
            if (s[i] == t[x - i - 1])
                cnt++;
        }
    }
 
    if (cnt == x)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
 
    return 0;
}
