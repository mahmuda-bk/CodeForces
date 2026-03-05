#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t, k=0;  cin >> t;
    string s; 
    char r[t];
    
    for(int i=1; i<=t; i++){
        cin >> s;
        int a=0, b=0;
        for(int j=0; j<5; j++){
            if(s[j] == 'A') a++;
            else b++;
        }
        if(a>b) r[k] = 'A';
        else r[k] = 'B';
        k++;
    }
    for(int i=0; i<t; i++){
        cout << r[i] << endl;
    }
    return 0;
}
