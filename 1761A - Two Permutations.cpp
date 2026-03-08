#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
 
        if(a+b>n)
        {
            if(a==n && b==n) cout << "Yes" << endl;
            else cout << "No" << endl;
        } 
        else
        {
            int x = n-a-b;
            if(x>1) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}
