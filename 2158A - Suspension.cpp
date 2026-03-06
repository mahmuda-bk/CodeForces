#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--)
    {
        int n, y, r;
        cin >> n;
        cin >> y >> r;
 
        int cnt = r + int(y/2);
        if(cnt > n)
        {
            int x = cnt - n;
            cout << cnt - x << endl;
        } else
        cout << cnt  << endl;
 
        
 
    }
    return 0;
}
