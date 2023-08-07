#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int x ;
    cin >> x ;

    int year = x / 365 ;
    cout << year << " years" << endl ;

    int temp1 = x % 365 ;
    int month = temp1 / 30 ;
    cout << month << " months" << endl ;

    int day = temp1 % 30 ;
    cout << day << " days" << endl ;

    cout << round(3.5) << endl ;


}
