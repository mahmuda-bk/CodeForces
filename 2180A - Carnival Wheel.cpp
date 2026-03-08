#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--)
    {
        int l, a, b;
        cin >> l >> a >> b;
 
        vector<bool> vis(l, false);
        int cur = a;
        int res = a;
 
        while (!vis[cur]) 
        {
            vis[cur] = true;
            res = max(res, cur);
            cur = (cur + b) % l;
        }
 
        cout << res << endl;
    }
    return 0;
}
