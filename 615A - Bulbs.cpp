#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<bool> marked(m + 1, false);  
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
 
        for (int j = 0; j < x; j++) {
            int bulb;
            cin >> bulb;
            marked[bulb] = true; 
        }
    }
 
    bool all_on = true;
    for (int i = 1; i <= m; i++) {
        if (!marked[i]) {
            all_on = false;
            break;
        }
    }
 
    cout << (all_on ? "YES" : "NO");
 
    return 0;
}
