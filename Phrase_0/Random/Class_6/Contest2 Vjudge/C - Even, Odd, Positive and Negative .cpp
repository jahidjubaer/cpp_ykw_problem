#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int a ;
    cin >> a ;
    int n ;
    int even = 0 ;
    int odd = 0 ;
    int positive = 0 ;
    int negative = 0 ;
    for (int i =1 ; i <= a ; i++) {
        cin >> n ;

        if (n % 2 == 0 ) {
            even ++ ;
        }
        else {
            odd ++ ;
        }
        if (n > 0 ) {
            positive ++ ;
        }
        if (n < 0) {
            negative ++ ;
        }
    }
    cout << "Even: " << even <<  endl;
    cout << "Odd: " << odd <<endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative <<  endl;


}
