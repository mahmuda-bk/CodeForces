#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    string s="";
    
    for(int i=1;i<=n;i++)
    {
        if(i%2==1&&i!=n){
            s+="I hate that ";
        }
        else if(i%2==0&&i!=n){
            s+="I love that ";
        }
        else if(i%2==1){
                s+="I hate ";
        }
            
        else if(i%2==0){
            s+="I love ";
        }
    
    }
    s+="it";
    
    cout<<s<<endl;
 
    return 0;
}
