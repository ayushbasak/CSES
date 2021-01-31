#include <iostream>
#define ll  long long int
#define modulo 1000000007
using namespace std;
int main(){
    ll n;
    cin >> n;
    ll curr = 1;
    for(;n--;){
        curr = (curr%modulo * 2)%modulo;
    }
    cout << curr;
    return 0;
}