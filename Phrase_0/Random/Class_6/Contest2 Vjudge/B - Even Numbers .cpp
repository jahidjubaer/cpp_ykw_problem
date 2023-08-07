#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int n ;
    cin >> n ;
    int con = 0 ;
    for (int i= 1  ; i <= n ; i++){
        if (i % 2 == 0 ) {
            cout << i << endl ;
            con ++ ;
        }

    }

    if (con < 1 ) {
        cout << -1 << endl ;
    }
    return 0 ;
}
