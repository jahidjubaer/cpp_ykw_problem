#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int num ;
    cin >> num ;

    int n ;
    int maxi = 0 ;
    for ( int i = 1 ; i <= num ; i ++) {
        cin >> n ;
        if (maxi < n ) {
            maxi = n ;
        }

    }
    cout << maxi << endl ;
}
