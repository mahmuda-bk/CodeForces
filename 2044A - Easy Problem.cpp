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
        if(n>=2 && n<=100)
        for(int k=1; k<=100; k++)
        {
            for(int j=100; j>=1; j--)
            {
                if(k+j == n)
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
