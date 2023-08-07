#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int n , m ;

    while(cin >> n >> m) {

         if (n <= 0 || m <= 0) {
      break;
         }
      if(n < m ) {
            int sum = 0 ;
        for(int i = n ; i <= m ; i++) {
            cout << i << " ";
            sum = sum + i ;

        }
        cout << "sum =" << sum << endl ;
      }
      if (n > m ) {
            int sum2 =  0 ;
        for(int j = m ; j <= n ; j++) {
            cout << j << " " ;
            sum2 = sum2 + j ;

        }
        cout << "sum =" << sum2 << endl ;

      }
      if(n == m) {
        cout << n << " " << "sum =" << n << endl;
      }


    }
}
