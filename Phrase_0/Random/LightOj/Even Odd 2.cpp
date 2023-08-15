#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int t ;
    string k;

    cin >> t ;

    for(int i=1 ; i <= t ; i++) {
            cin >> k;
        int s = k.size() ;
       int n = k[s-1] - '0' ;
        if(n%2 == 0 ) {
            cout << "Even" << endl ;
        }

        else {
            cout << "Odd" << endl ;
        }
    }
}
