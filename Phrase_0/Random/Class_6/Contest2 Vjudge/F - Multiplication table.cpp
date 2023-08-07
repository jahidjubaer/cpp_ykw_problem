#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int n ;
    cin >> n ;

    for(int i= 1 ; i <= 12 ; i++) {
        int sum  = n * i ;
        cout << n << " * " << i << " = " << sum << endl ;
    }
}
