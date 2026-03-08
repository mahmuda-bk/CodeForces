#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--)
    {
        int n;
        cin >> n;
 
        string a[n], s = "";
 
        for(int i= 0; i<n; i++)
        {
            cin >> a[i];
        }
 
 
        s = s + a[0];
 
        for(int i=1; i<n; i++)
        {
            string left = a[i] + s;
            string right = s + a[i];
            s = min(left, right);
        }
 
        cout << s << endl;
    }
    return 0;
}
