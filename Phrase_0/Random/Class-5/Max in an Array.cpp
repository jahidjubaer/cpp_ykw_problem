#include <bits/stdc++.h>

using namespace std ;

int main ()

{
    int num ;
    cin >> num ;
    int a[num] ;

    for (int i=0 ; i < num ; i++)
    {
        cin >> a[i]  ;
    }

    int num_max = a[0] ;

    cout << "Hey " << num_max << endl ;

    for (int i =0 ; i < num ; i++)
    {
        if (num_max < a[i] )
        {
            num_max = a[i] ;
        }
    }
    cout << num_max << endl ;

}
