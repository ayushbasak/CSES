#include <iostream>
using namespace std;
int main(){
    unsigned long long n, sum =0, parity, curr;
    cin >> n;
    int i;
    parity = (n*(n+1))/2;
    for(i = 0;i<n-1;i++){
        cin >> curr;
        sum += curr;
    }
    cout << parity - sum;
    return 0;
}