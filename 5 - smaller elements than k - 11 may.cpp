#include <iostream>
#include <vector>
using namespace std;

vector<int> fun(int *arr , int n , int k ){
    vector <int> res;
    // int a = 0;

    for(int i = 0 ; i < n; i++){

        if (arr[i] < k){
            // res[a] = arr[i];    // you can't simply write res[a] for a vector 
            res.push_back(arr[i]);
            // a++;
        }

    }

    return res;
}


int main() {

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k;
    cout << "enter k = ";
    cin >> k;

    // vector<int> vec;                  <-- make vector of same name
    // vec = fun(arr , n , k);

    // for (const int &element : vec  ){
    //     cout << element << " " ;
    // }
   
    vector<int> res;
    res = fun(arr , n , k);

    for (const int &element : res  ){
        cout << element << " " ;
    }
   
    return 0;
}
