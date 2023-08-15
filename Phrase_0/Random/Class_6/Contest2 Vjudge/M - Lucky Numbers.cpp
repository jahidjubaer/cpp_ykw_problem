#include <bits/stdc++.h>

using namespace std;

int main ()

{
    int n;
    cin >> n;
    int last , won ;

    while(n > 0) {
        last = n % 10 ;
        cout << last << " " ;
        if(last != 4 && last != 7) {


        }
        if (last == 4 || last ==7) {
            cout << last  << " " ;
        }
        n = n / 10 ;

    }

}
