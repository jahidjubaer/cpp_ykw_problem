#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int x1 , x2 , n1 , n2 ;
    cin >> x1 >> x2 >> n1 >> n2 ;
    int interval1 = max(x1 , n1) ;
    int interval2 = min(x2 , n2) ;

    if(interval1 <= interval2) {
        cout << interval1 << " " <<  interval2 << endl ;
    }
    else {
        cout << -1 << endl ;
    }
}
//#INCLUDE<IOSTREAM>
//USING NAMESPACE STD;
//
//INT MAIN() {
//  INT L1, R1, L2, R2; CIN >> L1 >> R1 >> L2 >> R2;
//  INT LEFT_BOUNDARY = MAX(L1, L2);
//  INT RIGHT_BOUNDARY = MIN(R1, R2);
//  IF (LEFT_BOUNDARY <= RIGHT_BOUNDARY) {
//    COUT << LEFT_BOUNDARY << ' ' << RIGHT_BOUNDARY << '\N';
//  }
//  ELSE {
//    COUT << -1 << '\N';
//  }
//  RETURN 0;
//
