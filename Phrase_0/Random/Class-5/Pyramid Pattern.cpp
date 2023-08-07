#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int num ;
    cin >> num ;

    for(int line = num ; line >= 1 ; line--){
        for(int col =1 ; col <= line ; col++ )
        {
            cout << " " ;
        }
        for (int col = num ; col >= line ; col --){
            cout << "*"  ;
        }
        for (int col = num-1 ; col >= line ; col --){
            cout << "*" ;
        }

        cout << endl ;

        }

    }

