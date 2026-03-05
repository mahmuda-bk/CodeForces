#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int x[n], y[n], z[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i] >> z[i];
    }
 
    int X = 0;
    for (int i = 0; i < n; i++)
    {
        X = X + x[i];
    }
 
    int Y = 0;
    for (int i = 0; i < n; i++)
    {
        Y = Y + y[i];
    }
 
    int Z = 0;
    for (int i = 0; i < n; i++)
    {
        Z = Z + z[i];
    }
 
    if (X == 0 && Y == 0 && Z == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
 
    return 0;
}
