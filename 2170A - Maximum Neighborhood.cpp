#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    for(int i=0; i<t; i++)
    {
        int n;
        cin >> n;
 
        int arr[n][n];
        int p = 1;
 
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<n; k++)
            {
                arr[j][k] = p;
                p++;
            }
        }
 
        int mx = 0;
 
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<n; k++)
            {
                int sum = arr[j][k];
                if (j - 1 >= 0) sum += arr[j - 1][k];
                if (j + 1 < n)  sum += arr[j + 1][k];
                if (k - 1 >= 0) sum += arr[j][k - 1];
                if (k + 1 < n)  sum += arr[j][k + 1];
 
                if (sum > mx) mx = sum;
            }
        }
 
        cout << mx << endl;
        
    }
    
    return 0;
}
