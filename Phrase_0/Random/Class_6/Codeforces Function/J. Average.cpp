#include <bits/stdc++.h>
using namespace std ;

double a[10001] ;
int  n ;

double average ()
{
    double sum = 0 ;
    double ave ;
    for(int i = 0 ; i <n  ; i++) {
        sum = sum + a[i] ;
        ave = sum / n ;
    }
    return ave ;
}

int main ()
{
    cin >> n ;
    for(int i= 0 ; i<n ; i++) {
        cin >> a[i] ;
    }
    cout << fixed << setprecision(6) << average() << endl ;

}
