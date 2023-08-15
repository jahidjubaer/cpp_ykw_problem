#include <bits/stdc++.h>

using namespace std;

int main()



{
    int n ;
    cin >> n;
    int a[n] ;

    for(int i = 0; i < n ; i++) {
        cin >> a[i] ;
        a[i] = a[i] + 1000 ;
    }

    bool visited [2002] ;
    for(int i = 0 ; i < 2002 ; i++) {
        visited[i] = false ;
    }

    for(int i = 0 ; i < n ; i++) {
        int x = a[i] ;
        visited[x] = true ;
    }
    int cnt = 0 ;
    for(int i = 0; i < 2002; i++) {
        if(visited[i]) {
            cnt++ ;
        }
    }
    cout << cnt << endl;
}
