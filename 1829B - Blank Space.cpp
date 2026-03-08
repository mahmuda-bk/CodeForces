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
 
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
 
        vector<int> zero;
 
        int countZeros = 0;
 
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                countZeros++;
            }
            else
            {
                if (countZeros > 0)
                {
                    zero.push_back(countZeros);
                    countZeros = 0;
                }
            }
        }
 
        if (countZeros > 0)
            zero.push_back(countZeros);
 
        int max = INT_MIN;
        int x = zero.size();
        if (x == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = 0; i < zero.size(); i++)
            {
 
                if (max < zero[i])
                    max = zero[i];
            }
 
            cout << max << endl;
        }
    }
    return 0;
}
