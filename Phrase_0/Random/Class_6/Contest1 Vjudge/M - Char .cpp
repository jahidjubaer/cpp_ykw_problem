#include <bits/stdc++.h>

using namespace std ;

int main ()
{
    char x ;
    cin >> x ;

    if (x >= 'A' && x <= 'Z' )
    {
        char low = tolower(x) ;
        cout << low << endl ;
    }
    else {
        char top = toupper(x) ;
        cout << top << endl ;
    }
}
