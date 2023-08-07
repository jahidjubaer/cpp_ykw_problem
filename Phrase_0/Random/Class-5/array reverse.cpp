#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int a[10] ;
    int num = 4 ;

    for (int i =0 ; i < num ; i ++) {
        cin >> a[i] ;
    }

    int b[10] ;
    int j = 0 ;
    for(int i = num-1 ; i >=0 ; i--) {
        b[j] = a[i] ;
        j++ ;
    }
    for (int i =0 ; i < num; i++) {
        a[i] = b[i] ;
    }
    for (int i=0 ; i < num; i++) {
        cout << a[i] << endl ;
    }
    return 0 ;
}
