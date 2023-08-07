#include <bits/stdc++.h>

using namespace std ;

int number (int num) {
int sum , rev = 0 ;
for(int i=num ; i >= 0 ; i--) {
    sum = num % 10 ;
    rev = rev * 10 + sum ;
    num = num / 10 ;
    if (num == 0) break ;
}
return rev ;

}

void odd(int num , int rev) {
 if (num == rev && num % 2 ==1) {
    cout << "YES" << endl ;
 }
 else {
    cout << "NO" << endl ;
 }
}

int main ()

{
    int num ;
    cin >> num ;
    int sum = number(num) ;
    odd(num , sum) ;
}
