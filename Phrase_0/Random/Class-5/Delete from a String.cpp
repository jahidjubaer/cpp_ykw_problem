#include <bits/stdc++.h>

using namespace std ;

 int main ()

 {
     char s [10] ;
     cin >> s ;

int      lenth = strlen(s) ;

     for (int i= 0 ; i < lenth ; i++) {
        s[i-1] = s[i] ;
     }

     s[lenth - 1 ] = '\0' ;



     cout << s << endl ;
 }

