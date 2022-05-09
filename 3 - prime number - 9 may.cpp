#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    bool flag = true;
    for (int i = 2; i < sqrt(n) ; i++){
        if (n%i == 0){
            flag = false;
            cout << "not-prime" << endl;
            break;
        }
    }
    if (flag){
        cout << "prime" << endl;
    }
    return 0;
}

/* NOT PRIME
5
prime
*/

/*
#prime number
from math import sqrt
a = int(input(">"))
flag = 1
for i in range(2,int(sqrt(a))):
    if a%i == 0 :
        flag = 0
        print("not")
        break
if flag:
    print("prime")

*/
