#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int n, m;
    if (!(cin >> n >> m)) 
        return 0;
 
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i) 
        cin >> a[i];
 
    sort(a.begin(), a.end()); 
 
    int sum = 0;
    for (int i = 0; i < m && i < n && a[i] < 0; ++i) {
        sum += a[i];
    }
 
    cout << -sum << endl; 
    return 0;
}
