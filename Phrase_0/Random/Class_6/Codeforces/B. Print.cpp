#include <bits/stdc++.h>

using namespace std ;

void number (int n) {

for(int i=1  ; i <= n ; i++) {
        if(i > 1 ){
    cout << " " ;
        }
        cout << i ;
}
cout << endl ;

}
int main ()

{
    int n ;
    cin >> n ;
    number(n);
}
