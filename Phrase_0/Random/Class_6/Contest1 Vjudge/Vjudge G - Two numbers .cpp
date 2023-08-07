#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    double a , b ;
    cin >> a >> b ;
    double div1 = a / b ;

    cout <<"floor " << a << " / " << b << " = " << floor(div1) << endl ;
    cout <<"ceil " << a << " / " << b << " = " << ceil(div1) << endl ;
    cout <<"round " << a << " / " << b << " = " << round(div1) << endl ;

    return 0 ;

}

//floor 10 / 3 = 3
//ceil 10 / 3 = 4
//round 10 / 3 = 3
