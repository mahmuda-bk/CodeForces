#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;  cin >> n;
    int arr[n][3];
    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
        if((arr[i][0] == 1 && arr[i][1] == 1 && arr[i][2] == 1) || 
        (arr[i][0] == 1 && arr[i][1] == 1) || 
        (arr[i][1] == 1 && arr[i][2] == 1) ||
        (arr[i][0] == 1 && arr[i][2] == 1)) {
            cnt++;
        }
    }
 
    cout << cnt << endl;
    return 0;
}
