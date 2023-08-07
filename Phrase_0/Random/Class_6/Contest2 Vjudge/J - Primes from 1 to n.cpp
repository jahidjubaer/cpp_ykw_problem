 #include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int n ;

    cin >> n ;
    int sum ;
    for (int i=1 ; i <= n ; i++) {
        for (int f=2 ; f <  n ; f++) {
                sum = i % f ;
            }
            if (sum == 0 && i == 1) {
                    break ;

            }
            else {
                cout << i << endl ;
            }
        }

    }


