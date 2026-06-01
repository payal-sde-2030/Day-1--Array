#include <iostream>
using namespace std ;
int main ( ) {
    int n = 6 ;
    int arr[ ] = {12, 17, 70, 15, 22, 65 } ;
    
    int evenCount = 0 ;
    int oddCount = 0 ;
    
    for (int i = 0 ; i<n ; i++) {
        if (arr[i] % 2 == 0 ) {
            evenCount++ ;
        }  else {
           oddCount++ ; 
        }
    }
    
    cout << "Even numbers :  " << evenCount << endl ;
    cout << "Odd numbers :  " << oddCount << endl ;
    
    return 0 ;
    
}
