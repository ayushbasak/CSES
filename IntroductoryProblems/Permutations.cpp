/*
for n == 2 and n ==3 its imposiible to have
2 adjacent numbers without having thier difference = 1

n == 4 is just a special case

For all other cases:
    Seperating the odd and even numbers guarantees that
    adjacent differences != 1 
*/
#include <iostream>
using namespace std;
int main(){
    int n, i;
    cin >> n;
    if(n == 2 || n== 3){
        cout << "NO SOLUTION";
        return 0;
    }
    else if(n == 4){
        cout << "2 4 1 3";
    }
    else{
        for(i = n-1; i>0; i-=2)
            cout << i << " ";
        for(i = n; i>0; i-=2)
            cout << i << " ";
    }
    return 0;
}