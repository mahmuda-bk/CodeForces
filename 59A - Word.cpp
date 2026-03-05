#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
 
    int upper = 0, lower = 0;
 
    for (char c : s)
    {
        if (isupper(c))
            upper++;
        else
            lower++;
    }
 
    if (upper <= lower)
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
    else
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
        }
    cout << s << endl;
    return 0;
}
