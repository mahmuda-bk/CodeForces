#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, k;
    cin >> n >> k;
 
    long long oCnt = (n + 1) / 2;
 
    if (k <= oCnt)
        cout << 2 * k - 1 << endl;
    else
        cout << 2 * (k - oCnt) << endl;
    return 0;
}
