//RHOMBUS PATTERN
#include <iostream>
using namespace std;
int main() {
    int n ;
    cin >> n ;
    for(int row = 1 ; row <= n ; row++){
        for (int col = 1 ; col <= ((2*n) - row); col++){
            if (col <= (n - row)){
                cout << " ";
            }
            else{
                cout << "*";
            }            
        }     
        cout << endl;
    }
   

    return 0;
}

/*
5
    *****
   ***** 
  *****  
 *****   
*****   
*/
