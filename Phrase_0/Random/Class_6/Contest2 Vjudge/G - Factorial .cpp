#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int num ;
    cin >> num ;
    int x ;

   for (int i = 1 ; i <= num  ; i++) {
        cin >> x ;
        int fact = 1 ;
        for(int i=1 ; i <= x ; i ++  ){
            fact = fact * i ;

        }
        cout << fact << endl ;

    }

     return 0 ;
}

