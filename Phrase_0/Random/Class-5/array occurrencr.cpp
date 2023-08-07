#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int a [10] = {1, 5, 6, 3, 2, 4, 1, 3, 4} ;
    int n = 10 ;

    for (int value = 1 ; value < n ; value ++) {

    int con = 0 ;
    for (int i=0 ; i <n ; i ++) {
        if ( a[i] == value)
            con ++ ;
    }
     cout << value << " Occurs : " << con << "Times" << endl ;

    }

   return 0 ;
}
