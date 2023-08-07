#include <bits/stdc++.h>

using namespace std ;

int main ()
{
    int num , t ;
    cin >> t ;

    int sum ;
    int rever = 0 ;

    for(int j = 1 ; j <= t ; j++){
            cin >> num ;

    for (int i = num ; i >= 0 ; i --) {

        sum = num % 10 ;
        rever = rever * 10 + sum ;
        num = num / 10 ;
        if (num == 0 ) {
            break ;

        }
        cout << rever << endl ;
    }
    cout << rever << endl ;
    }

}
