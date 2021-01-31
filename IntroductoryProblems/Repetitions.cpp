#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    int size = s.length(), i;
    int curr = 1, max_curr = 1;
    for(i=0;i<size-1;i++){
        if(s[i] == s[i+1])
            max_curr = max(++curr, max_curr);
        else
            curr = 1;
    }
    cout << max_curr;
    return 0;
}