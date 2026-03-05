#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(s.size() <= 10) {
            cout << s << endl;
        } else {
            cout << s[0];
            int cnt = 0;
            for(int i=1; i<s.size()-1; i++){
                cnt++;
            }
            cout << cnt << s[s.size()-1] << endl;
        }
    }
    return 0;
}
