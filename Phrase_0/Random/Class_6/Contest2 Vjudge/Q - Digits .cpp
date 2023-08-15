#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int num ;
    cin >> num;
    int rev , n ;

    for(int i = 1 ; i <= num ; i++) {
            cin >> n ;
            if (n == 0 ) {
                cout << 0 << endl ;
                continue  ;
            }

    while (n > 0) {
        rev = n % 10 ;
        cout << rev << " " ;
        n = n / 10 ;
    }
    cout << endl ;
    }

    return 0 ;
}
