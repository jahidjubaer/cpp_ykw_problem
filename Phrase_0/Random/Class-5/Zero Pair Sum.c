#include <bits/stdc++.h>

using namespace std ;

 int main ()

 {
     int num ;
     cin >> num  ;
     a[num] ;

     int cont = 0 ;

     for(int i=0 ; i < num ; i++) {
        for(int j = 1 ; j < num ; j++ )
        {
            if(a[i] + a[j] == 0 )
            {
                cont ++ ;
            }
        }
     }
     cout << cont ;
 }
