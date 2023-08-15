#include <bits/stdc++.h>
using namespace std ;
int main ()

{
    int n ;
    cin >> n ;
    int prime  ;
    for(int i=2 ; i <= n  ; i++) {
        for(int j = 2 ; j < i; j++) {
            if(i % j == 0) {
                break ;
            }
            else {
                prime = i ;
            }
        }
        cout << i << endl ;
        }
    }

