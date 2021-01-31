/*
The concept follows:
for n!, the number of x's occuring in it is given by
floor(n/x) + floor(n/x^2) + floor(n/x^3) ...
Find minimum between count of 2 and 5 and that's the number of
trailnig zeroes.
*/

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int c2 = 0, c5 =0;
    int temp = n;
    int mul2 = 1, mul5 = 1;
    while(temp != 0){
        temp = n/pow(2,mul2++);
        c2 += temp;
    }
    temp = n;
    while(temp != 0){
        temp = n/pow(5,mul5++);
        c5 += temp;
    }
    cout << min(c2,c5);
    return 0;
}