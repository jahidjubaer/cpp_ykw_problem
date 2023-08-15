#include <bits/stdc++.h>

using namespace std;

void shift (int n ,int a[])
{
    int m = n ;
    for(int i = 0; i < n; i++) {

            if(a[i] == 0)
        {
            n = n - 1 ;
            a[n] = a[i] ;
            a[i] = a[i+1];

        }


    }

    for(int i = 0 ; i < m ; i++){
        cout << a[i] << " " ;
    }
    cout << endl ;
}

int main ()

{
    int n ;
    cin >> n;
    int a[n+1];

    for(int i = 0; i < n ; i++) {
        cin >> a[i] ;
    }
    shift(n , a) ;
}
