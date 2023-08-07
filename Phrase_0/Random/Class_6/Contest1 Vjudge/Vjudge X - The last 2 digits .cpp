#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    long long int a, b, c, d;
    cin >> a >> b >> c>> d ;

    long long int mul = a* b* c* d ;

    int result = mul % 100 ;
    cout << result << endl ;

    return 0 ;
}

