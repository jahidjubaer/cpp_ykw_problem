#include <bits/stdc++.h>

using namespace std;

int main ()

{
    int n ;
    cin >> n ;
    int a[n+1];
    int i ;
    a[1] = 0 ;
    a[2] = 1 ;

    for(int i = 3 ; i <= n ; i++) {
            a[i] = a[i-1] + a[i-2] ;

    }
    for(int i = 1 ; i <= n ; i++) {
        cout << a[i] << " " ;
    }
    cout << endl ;
}
