#include <bits/stdc++.h>

using namespace std;

int main ()

{
    int n;
    cin >> n;
int     a[n] ;

    long long sum = 0 ;

    for(int i = 0; i < n; i++) {
        cin >> a [i] ;
        sum = sum + a[i] ;
    }
    if (sum < 0) {
        sum = sum * (-1) ;
        cout << sum << endl ;
    }
    else {
        cout << sum << endl ;
    }
}
