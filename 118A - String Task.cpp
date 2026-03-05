#include <bits/stdc++.h>
using namespace std;
 
bool isVowel(char c)
{
    c = tolower(c);
    return c=='a' || c=='o' || c=='y' || c=='e' || c=='u' || c=='i';
}
 
int main()
{
    string s;
    cin >> s;
 
    string result = "";
 
    for (char c : s)
    {
        c = tolower(c);     
 
        if (!isVowel(c))     
        {
            result += '.';  
            result += c;      
        }
    }
 
    cout << result;
    return 0;
}
