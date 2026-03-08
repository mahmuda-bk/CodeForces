#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
 
        int neg = 0;
 
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == -1)
                neg++;
        }
 
        int pos = n - neg;
 
        if (pos >= neg && neg % 2 == 0)
        {
            cout << 0 << endl;
        }
        else if (pos >= neg && neg % 2)
        {
            cout << 1 << endl;
        }
        else
        {
            int diff = neg - pos;
            int change = diff % 2 + diff / 2;
            neg -= change;
            if (neg % 2 == 0)
            {
                cout << change << endl;
            }
            else
                cout << change + 1 << endl;
        }
    }
    return 0;
}
