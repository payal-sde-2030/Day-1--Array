#include <iostream>
using namespace std ;
int main ( ) {
    int n = 5 ;
    int arr[ ] = {5, 2, 1, 9, 7} ;
    int key = 9 ;
    
    bool found = false ;
    
    for (int i=0 ; i<n ; i++) {
        if (arr[i] == key) {
            cout << key << "Found at position :"<< i << endl ;
       found = true ;
       break ;
        }
    }
    
    if (found = false) {
        cout << key << " not found " << endl ;
    }
    return 0 ;
    
}
