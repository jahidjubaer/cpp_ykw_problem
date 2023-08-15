#include <bits/stdc++.h>

using namespace std;

int main ()

{
    int n , a , b ;
    cin >> n >> a >> b ;

    int rev ;
    int sum = 0 ;
    int sub = 0 ;

    for(int i = 1  ; i <= n ; i++) {
            while(i > 0) {
                rev = i % 10 ;
                sum = sum + rev ;
                i = i / 10;
                }

    }

    for(int i = 1 ; i <= n ; i++) {
        if (sum >= a && sum <= b ) {
            sub = sub + i ;
        }
    }
    cout << sub << endl ;

}
