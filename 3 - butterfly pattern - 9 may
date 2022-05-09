#include <iostream>
using namespace std;
int main() {
    // re -> row_end
    int re;
    cin >> re ;
    for(int row = 1 ; row <= re ; row++){
        for (int col = 1 ; col <= (2*re) ; col++){
            if (col <= row){
                cout << "*";
            }
            else if (col <= (2*re)-row){
                cout << " ";
            }
            else{
                cout << "|";
            }
        }     
        cout << endl;
    }
    for(int row = re ; row >= 1 ; row--){
        for (int col = 1 ; col <= (2*re) ; col++){
            if (col <= row){
                cout << "|";
            }
            else if (col <= (2*re)-row){
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
*        |
**      ||
***    |||
****  ||||
*****|||||
|||||*****
||||  ****
|||    ***
||      **
|        *
*/
