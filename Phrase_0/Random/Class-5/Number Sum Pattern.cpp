#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int num ;
    cin >> num ;
    int sum = 0 ;

    for (int line = 1 ; line <= num ; line ++) {
        for ( int col = 1 ; col <= line ; col ++) {
            cout << col ;
            if (line == col) {
                cout << "=" ;
            }
            else {
                cout << "+" ;
            }

            sum += col ;

        }
       /* int sum = 0 ;
        for (int i = 1; i <=line ; i++) {
            sum += i ;
        }
        */
        cout << sum ;
        cout << endl ;

    }
}

