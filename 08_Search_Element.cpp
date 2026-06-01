#include <iostream>
using namespace std ;
int main ( ) {
      int n , target ;
      cin >> n ;
      int arr[n] ;
      
      for (int i = 0 ; i<n ; i++)
      cin >> arr[i] ;
      cin >> target ;
      
      bool found = false ;
      
     for (int i = 0 ; i<n ; i++) {
         if (arr[i]  == target) {
             found = true ;
             break ;
         }
     }
     if (found) cout << "Element found" ;
     else cout << "Element not found" ;
     
           return 0 ;  
}
