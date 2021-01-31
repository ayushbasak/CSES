#include <iostream>
#include <algorithm>
#include <vector>
#define pb push_back
using namespace std;
int main(){
    int n, c, count = 1, i;
    cin >> n;
    vector<int> v;
    for(;n--;){
        cin >> c;
        v.pb(c);
    }
    sort(v.begin(), v.end());
    n = v.size(); 
    for(i=0;i<n-1;i++){
        if(v[i] != v[i+1])
            ++count;
    }
    cout << count;
    return 0;
}