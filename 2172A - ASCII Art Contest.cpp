#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int g, c, l;
    cin >> g >> c >> l;
 
    vector<int> a = {g, c, l};
    sort(a.begin(), a.end());
 
    int mn = a[0];
    int md = a[1];
    int mx = a[2];
 
    if (mx - mn >= 10)
        cout << "check again" << endl;
    else
        cout << "final " << md << endl;
 
    return 0;
}
