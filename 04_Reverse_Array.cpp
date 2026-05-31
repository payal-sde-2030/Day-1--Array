#include<iostream>
using namespace std ;
int main ( ) {

int n = 5 ;
int arr[5] = {5, 2, 7, 9, 1} ;

cout << "original :"  ;
for (int i=0 ; i<n ; i++) {
  cout << arr[i] << " "  ;
}

cout << endl;

cout << " Reverse :" ;
for (int i=n-1 ; i>=0 ; i--) {
  cout << arr[i] << " "  ;
}  
     
     return 0 ;
}
