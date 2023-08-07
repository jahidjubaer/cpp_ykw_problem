#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int num ;
    cin >> num ;

    for(int line = 1 ; line < num ; line ++)
    {
        int space = num - line ;
        for (int i = 1 ; i <= space ; i ++) {
            cout << " " ;
        }
        int star = 2 * line - 1 ;
        for (int i = 1 ; i <= star  ; i++) {
                cout << i ;

        }
        cout << endl ;
    }

   for(int line = num  ; line >= 1 ; line --)
    {
        int space = num - line ;
        for (int i = 1 ; i <= space ; i ++) {
            cout << " " ;
        }
        int star = 2 * line - 1 ;
        for (int i = 1 ; i <= star  ; i++) {
                cout << i ;

        }
        cout << endl ;
    }
}
