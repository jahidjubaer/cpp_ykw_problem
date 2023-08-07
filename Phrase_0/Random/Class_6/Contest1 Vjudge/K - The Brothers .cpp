#include <bits/stdc++.h>
#include <string.h>

using namespace std ;

int main ()

{
    char a[100] , b[100] , c[100] , d[100] ;
    cin >> a >> b ;
    cin >> c >> d ;

    int len_b = strlen(b) ;
    int len_d = strlen(d) ;

    bool same = true ;
    for(int i=0 ; i < len_b ; i++) {
            if(b[i] != d[i]) {
                same = false ;
                break ;

    }
    }
    if (same) {
        cout << "ARE Brothers" << endl ;

    }
    else {
        cout << "NOT" <<endl ;
    }


}
