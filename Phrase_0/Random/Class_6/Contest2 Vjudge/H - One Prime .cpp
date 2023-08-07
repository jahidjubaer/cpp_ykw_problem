#include <bits/stdc++.h>

using namespace std ;

int main ()

{   int i ;
    int num ;
    cin >> num ;
    int sum ;

    for(i = 2 ; i < num ; i++) {

            sum = num % i ;


           if (sum == 0) {
          break ;
           }


    }
    if (sum == 0) {
            cout << "NO" << endl ;

           }

           else {
                cout << i << endl ;

           }
}

