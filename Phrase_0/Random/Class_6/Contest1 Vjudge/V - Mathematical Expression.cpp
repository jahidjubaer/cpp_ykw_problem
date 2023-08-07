#include <bits/stdc++.h>

using namespace std ;

int main()

{
    int a , b , c ;
    char q , s ;
    cin >> a >> q >> b >> s >> c ;

    int sum = a + b;
    int sub = a - b ;
    int mul = a*  b ;

    if (q ==  '+' && s == '=') {
        if (sum  == c ) {
            cout << "Yes" << endl ;
        }
        else {
                cout << sum << endl ;
    }
    }

    else if  (q == '-' && s == '=')
    {
        if (sub == c) {
            cout << "Yes" << endl ;
        }
        else {
            cout << sub << endl  ;
        }

    }
    else if  (q == '*' && s == '=') {
        if (mul == c) {
            cout << "Yes" << endl ;
        }
        else {
            cout << mul << endl ;
        }
    }
}
