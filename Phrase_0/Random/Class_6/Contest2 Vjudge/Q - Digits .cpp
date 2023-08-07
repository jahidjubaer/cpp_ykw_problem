#include <bits/stdc++.h>

using namespace std ;

int main ()
{

    int t ;
    cin >> t ;
    int num ;
    int sum ;
    int rev = 0 ;

    for(int k=1 ; k <= t ; k++){
        cin >> num ;

        for(int i=num ; i >= 0 ; i--) {
            sum = num % 10 ;
            rev = rev * 10 + sum ;
            num = num /10 ;
        }
        cout << rev << endl ;
    }
}
