#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int len = s1.size();
 
    for (char &c1 : s1)
        c1 = tolower(c1);
 
    for (char& c2 : s2)
        c2 = tolower(c2);
        
        
    if (s1 < s2)
        cout << "-1" << endl;
    else if (s1 > s2)
        cout << "1" << endl;
    else
        cout << "0" << endl;
 
    return 0;
}
