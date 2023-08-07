#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int n = 10 ;
        int a[n] = {1,2,2,2,3,3,4,4,4} ;

    int f[10] ;
    for(int i=0 ; i < n ; i ++) {
         f[i] = 0 ;
    }
    for (int i = 0 ; i < n ; i++) {
         f[a[i]]++ ;
    }

    for (int num = 1 ;num  <n ; num ++) {
        cout << num  << " Occurs : " << f[num] << endl ;
    }
}
