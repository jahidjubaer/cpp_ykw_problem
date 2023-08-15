#include <bits/stdc++.h>

using namespace std;

int main ()

{
    int n , m ;
    cin >> n >> m ;
    int lucky ;
    for(int i = n ; i <= m ; i++) {
        while(i >= 0 ) {
            int digit = i % 10 ;
            if(digit == 4 || digit == 7) {
                lucky = i ;
                i = i / 10 ;
            }
        }
        cout << lucky << endl ;
    }
}
