#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int num = 10 ;
        int sum = 0 ;
        int mul ;
    for(int i = 10 ; i >= 1 ; i--) {
        cout << i << " " ;
        sum ++ ;
        mul = 5 * sum ;
        if(i == mul) {
            cout << endl ;
        }




    }
    cout << endl << sum ;
}
