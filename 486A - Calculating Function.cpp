#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
 
    long long sum = 0;
    
    long long e = n/2;
    long long k = (n+1)/2;
 
    if(n%2==1)
        sum = (k*(k-1)) - k*k;
    else if(n%2==0)
        sum = (e*(e+1)) - e*e;
    
    cout << sum << endl;
    return 0;
}
