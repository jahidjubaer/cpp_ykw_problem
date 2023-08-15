#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int n ;
    cin >> n;
    int a , b ;
    double number ;
    long long int  sum ;

    for(int i = 1 ; i<= n ; i++) {
        cin >> a >> b ;

        if( a > b) {
            swap(a,b) ;
        }
        number = (b-a) +1 ;
        sum = number / 2 * (a+b) ;
        cout << sum << endl ;
    }
}
