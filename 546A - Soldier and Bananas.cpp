#include <iostream>
using namespace std;
 
int main() {
    int k, w;
    long long n;
    cin >> k >> n >> w;
 
    long long total = k * (w * (w + 1)) / 2;
    long long borrow = total - n;
 
    cout << (borrow > 0 ? borrow: 0) << endl;
 
    return 0;
}
