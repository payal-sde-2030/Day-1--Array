#include<iostream>
using namespace std ;
int main ( ) {

int n = 5 ;
int arr[5] = {5, 2, 7, 9, 1} ;

int max = arr[0] ;

for (int i=0 ; i<n ; i++) {
    if (arr[i] > max) {
        max  = arr[i]  ;
    }
}
     cout << "Max= " << max ;
     
     return 0 ;
}
