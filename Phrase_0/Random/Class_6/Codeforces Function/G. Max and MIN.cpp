#include <iostream>
using namespace std;

int n ;
int a[1001];

int maximum ()
{
    int maxi = a[0] ;


    for (int i = 0; i <n; i++) {
            if (maxi < a[i]) {
                    maxi = a[i] ;

            }

    }
    return maxi ;

}

int minimum ()
{
    int mini = a[0] ;
     for (int i = 0; i <n; i++) {
            if (mini > a[i]) {
                mini = a[i] ;
            }

}
return mini ;

}

int main() {

    cin >> n ;

    for (int i = 0; i <n; i++) {
        cin >> a[i];

    }
   cout << minimum() <<" " << maximum() << endl ;

}
