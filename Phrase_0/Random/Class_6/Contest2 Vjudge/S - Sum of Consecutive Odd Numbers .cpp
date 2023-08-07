#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int t ;
    int a , b ;
    cin >> t ;

    while (t--) {
        cin >> a >> b ;
        if(a > b) {
            swap(a,b);
        }
        int sum = 0 ;
    for (int i = a ; i < b ; i++) {
        if(i % 2 == 1 && i != a) {
            sum += i ;
        }
    }
    cout << sum << endl ;
    }
    return 0 ;
}
