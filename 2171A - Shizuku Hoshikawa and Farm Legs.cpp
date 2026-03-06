#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        int cnt = 0;
        for(int b=0; b<=n/4; b++)
        {
            int rem = n - 4*b;
            if(rem>=0 && rem%2==0)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
