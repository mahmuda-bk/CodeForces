#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] = abs(a[i]);
    }
 
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
    }
 
    cout << min << endl;
 
    return 0;
}
