#include<iostream>
using namespace std ;
int main ( ) {

int n = 5 ;
int arr[5] = {5, 2, 7, 9, 1} ;

int min = arr[0] ;

for (int i=0 ; i<n ; i++) {
    if (arr[i] < min) {
        min  = arr[i]  ;
    }
}
     cout << "Min= " << min ;
     
     return 0 ;
}
