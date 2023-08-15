#include <bits/stdc++.h>

using namespace std;

void arr (int n , int a[] , int b[])
{
    int c[n+n+1] ;

    for(int i = 0 ;  i < n ; i++) {
        c[i] = b[i] ;
    }

    for (int i = 0 ; i < n  ; i++) {
            c[n+i] = a[i] ;


    }
    for(int i = 0 ; i < n+n ; i++) {
        cout << c[i] << " " ;
    }
    cout << endl ;
}

int main ()

{
    int n ;
    cin >> n ;
    int a[n+1] ;
    int b[n+1] ;


    for(int i = 0 ;  i < n ; i++) {
        cin >> a[i] ;


    }
    for(int i = 0 ; i < n ; i++) {
        cin >> b[i] ;
    }

    arr(n , a , b ) ;
    return 0 ;


}
