#include <iostream>
using namespace std ;
int main ( ) {
    int n = 6 ;
    int arr[ ] = {35, 12, 1, 10, 34, 1} ;
    
    int largest = INT_MIN ;
     int secondLargest = INT_MIN ;
     
     for (int i = 0 ; i<n ; i++) {
         if (arr[i] > largest) {
             largest = arr[i] ;
         }
     }
     
     for (int i = 0 ; i<n ; i++) {
         if (arr[i] != largest && arr[i] > secondLargest) {
             secondLargest = arr[i] ;
         }
     }
     
     if (secondLargest == INT_MIN) {
         cout << " Second largest nhi hai " << endl ;
      }   else {
          cout << "Second largest " << secondLargest << endl ;
      }
      
      return 0 ;
}
