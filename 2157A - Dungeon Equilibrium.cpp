#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int j = 0; j < n; j++)
            cin >> arr[j];
 
        unordered_set<int> seen;
        vector<int> r;
 
        for (int x : arr) {
            if (!seen.count(x)) {
                seen.insert(x);
                r.push_back(x);
            }
        }
 
        int sum = 0;
        for(int a : r)
        {
            int cnt = 0;
            for(int k = 0; k < n; k++)
                if(arr[k] == a) cnt++;
 
            if(a == 0) {
                sum += cnt; 
            }
            else if(cnt == a) {
 
            }
            else if(cnt > a) {
                sum += cnt - a;        
            }
            else {
                sum += cnt;
            }
        }
 
        cout << sum << endl;
    }
    return 0;
}
