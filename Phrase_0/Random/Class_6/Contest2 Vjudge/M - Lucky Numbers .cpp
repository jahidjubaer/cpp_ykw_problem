#include <bits/stdc++.h>

using namespace std;

bool lucky (int num)

{
    while(num > 0) {
        int last = num % 10 ;
        if ( last == 4 || last == 7) {

        }
        else {
            return false ;
        }
        num = num / 10 ;
    }
    return true ;
}

int main()

{
    int n , m ;
    cin >> n >> m;
    bool unlucky = false ;
    for(int i = n ; i <= m ; i++) {
        if(lucky(i)) {
                cout << i << " " ;
                unlucky = true ;

        }
    }
    if (!unlucky) {
        cout << -1 << endl ;
    }

}
