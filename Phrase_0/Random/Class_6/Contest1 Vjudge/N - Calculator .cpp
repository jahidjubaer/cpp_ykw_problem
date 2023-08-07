#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int a , b ;
    char s ;
    cin >> a >> s >> b ;

    if (s == '+') {
        int sum = a + b ;
        cout << sum << endl ;
    }
    if (s == '-') {
        int sum = a - b ;
        cout << sum << endl ;
    }
    if (s == '*') {
        int sum = a * b ;
        cout << sum << endl ;
    }
    if (s ==  '/') {
        int sum = a / b ;
        cout << sum << endl ;
    }
    return 0 ;
}
