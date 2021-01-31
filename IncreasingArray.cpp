#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;
int main(){
    int n ,i, curr, prev = -1;
    cin >> n;
    i =n;
    ll sum = 0;
    for(;i--;){
        cin >> curr;
        sum += max(0, (prev-curr));
        prev = max(prev, curr);
    }
    cout << sum;
    return 0;
}