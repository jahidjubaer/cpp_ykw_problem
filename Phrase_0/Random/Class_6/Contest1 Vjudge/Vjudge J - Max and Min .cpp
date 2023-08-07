#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int a , b ,c ;
    cin >> a >> b >> c ;

    int minimun = min(min(a,b) , c) ;
    int maximum = max(max(a,b), c);
    cout << minimun << " " << maximum << endl ;
    return 0 ;
}
