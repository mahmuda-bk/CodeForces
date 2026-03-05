#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int arr[5+1][5+1];
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            cin >> arr[i][j];
        }
    }
    int cnt = 0;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            if(arr[i][j] == 1 && j!=3)
            {
                if(j==4 || j==2)
                    cnt++;
                else 
                    cnt+=2;
            }
        }
    }
 
    for(int j=1; j<=5; j++)
    {
        for(int i=1; i<=5; i++)
        {
            if(arr[i][j] == 1 && i!=3)
            {
                if(i==4 || i==2)
                    cnt++;
                else 
                    cnt+=2;
            }
        }
    }
 
    cout << cnt << endl;
 
    return 0;
}
