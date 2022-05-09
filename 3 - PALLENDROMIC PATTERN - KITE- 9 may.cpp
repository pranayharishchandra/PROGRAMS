//PALLENDROMIC PATTERN - KITE
#include <iostream>
using namespace std;
int main() {
    int n ;
    cin >> n ;
    for(int row = 1 ; row <= n ; row++){
        int i = 2;        
        for (int col = 1 ; col <= (n + row - 1); col++){
            if (col <= (n - row)){
                cout << " ";
            }
            else if (col <= n){
                cout << (n - col + 1);
            }            
            else{
                cout << i++ ;
            }
        }     
        cout << endl;
    }
    // i am doing n-1 not n because i want perfect kite pattern
    // since it's like 4th quadrant (mirror image of 1)so i have
    //  reversed rows and cols will remain the same
    for(int row = n - 1 ; row >= 1 ; row--){
        int i = 2;        
        for (int col = 1 ; col <= (n + row - 1); col++){
            if (col <= (n - row)){
                cout << " ";
            }
            else if (col <= n){
                cout << (n - col + 1);
            }            
            else{
                cout << i++ ;
            }
        }     
        cout << endl;
    }

    return 0;
}

/*
5
    1    
   212   
  32123  
 4321234 
543212345
 4321234 
  32123  
   212 
    1  
*/
