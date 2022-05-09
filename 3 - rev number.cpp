#include <iostream>
using namespace std;
int main() {
    int n,rev = 0;
    cin >> n;
    while (n != 0){
        cout << "n = " << n << " rev = " << rev << endl;
        rev = rev*10 + n%10;
        n = n/10;
    }
    cout << rev;
    return 0;
}
