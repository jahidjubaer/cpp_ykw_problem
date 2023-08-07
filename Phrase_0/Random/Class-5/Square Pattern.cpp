#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int num ;
    cin >> num ;

    for (int line = 1; line <= num; line++) {
        for (int col = 1; col <= num; col++){
                if (line == 1 || line == num || col == 1 || col == num ) {
                    cout << "*" ;
                }
                else {
                        cout << " " ;

                }

        }
        cout << endl ;
    }
}
