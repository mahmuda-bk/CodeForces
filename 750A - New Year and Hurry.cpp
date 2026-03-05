#include<bits/stdc++.h>
using namespace std;
 
void sol() {
    int n, k;
    cin >> n >> k;
 
    int leftmin = 240 - k;
    int low = 0;
    int high = n;
    int ans = 0;
 
    while (low <= high) {
        int mid = (low + high) / 2;
        int done = (mid * (2 * 5 + (mid - 1) * 5)) / 2;
 
        if (done > leftmin) 
        {
            high = mid - 1;
        } 
        else 
        {
            ans = mid;
            low = mid + 1;
        }
    }
    cout << ans << endl;
}
 
int main() {
    sol();
    return 0;
}
