#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int a,b,c,d;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b >> c >> d;
        if(a==b && b==c && c==d && (a*a + b*b) == (c*c + d*d))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
 
    return 0;
 
}
