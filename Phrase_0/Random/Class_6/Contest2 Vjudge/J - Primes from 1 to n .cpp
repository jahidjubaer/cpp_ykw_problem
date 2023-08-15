#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n ;
    cin >> n;
    int i , j , sum ;

    for(i = 2; i <= n; i++) {
        for(j = 2 ; j < i; j++) {
                sum = i % j ;
            if(sum == 0 ) {
                break ;
            }
        }
            if (sum == 0) {
                    continue ;
            }
        else {
            cout << i << " " ;
        }
    }
    cout << endl ;
}
