#include<bits/stdc++.h>
using namespace std;
 
unsigned long long gcd_ull(unsigned long long a, unsigned long long b) {
    while (b != 0) {
        unsigned long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
 
int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        
        unsigned long long arr[n];
        for(int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
 
        vector<unsigned long long> l(n,10000000000000000001ULL);
 
        unsigned long long global_best = 10000000000000000001ULL;
 
        for(int j = 0; j < n; j++)
        {
            for(unsigned long long k = 2; k <= 10000000000000000000ULL; k++)
            {
                if (gcd_ull(arr[j], k) == 1) {
                    l[j] = k;
                    global_best = k;
                    break;
                }
            }
        }
 
        unsigned long long ans = *min_element(l.begin(), l.end());
 
        if(ans == 10000000000000000001ULL)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
 
    return 0;
}
