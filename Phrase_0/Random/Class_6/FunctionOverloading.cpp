 #include <bits/stdc++.h>

 using namespace std ;

 int age(int wight , int age)

 {
     int sum = wight + age ;

     return sum ;
     cout << endl ;
 }

 int age(double wight , int age) // here the function is overload but if i make some crectation it will run .

 {
     int sum = wight + age ;

     return sum ;
     cout << endl ;
 }

 int main ()

 {
     cout << age(39,10) << endl ;
 }
