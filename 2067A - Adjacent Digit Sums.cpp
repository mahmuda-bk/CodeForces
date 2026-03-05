#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++) {
        int x, y, r;
        cin >> x >> y;
        r = ((x+1)-y)/9;
        if((y==(x+1-(9*r))) && (r>=0)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
 
    return 0;
}
