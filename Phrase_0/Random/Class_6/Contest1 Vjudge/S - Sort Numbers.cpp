#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int a , b , c ;
    cin >> a >> b >> c ;

    int maxi = max (max(a,b) , c ) ;
    int mini = min (min(a,b) , c ) ;
    int mid = a + b + c - maxi - mini ;

    cout << mini <<endl  << mid << endl  << maxi << endl ;
    cout << endl ;
    cout << a << endl  << b << endl << c << endl ;
}
