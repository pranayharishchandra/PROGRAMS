#include <iostream>
using namespace std;
int main() {
    // re -> row_end
    int re;
    cin >> re ;
    for(int row = 1 ; row <= re ; row++){
        for (int col = 1 ; col <= row ; col++){
            cout << col;
        }     
        cout << endl;
    }
   

    return 0;
}

/*
5
1    
12   
123  
1234 
12345
*/
