// sort elements according to their index and print the element with it' original index
#include <iostream>
#include <vector>
using namespace std;

vector<pair<int,int>> sortingArray(int *arr , int n){
    vector<pair<int,int>>v;
    for (int i = 0 ; i < n ; i++)
        v.push_back({arr[i] , i}); //or you can write it like v.push_back(make_pair(arr[i] , i))

    sort(v.begin() , v.end());
    
    return v;
}




int main() {
    int arr[] = {20,40,30,10};

    int n = sizeof(arr) / sizeof(arr[0]);

    // vector<pair<int,int>>v;
    // for (int i = 0 ; i < n ; i++)
    //     v.push_back({arr[i] , i});

    // sort(v.begin() , v.end());

    vector<pair<int , int>> v = sortingArray;

    // for (int i = 0 ; i < n ; i++)
    for ( int i : v)
        cout << v[i].first << v[i].second << endl;
    
    return 0;
}

// time complexity - O(n logn) <- sorting
// space complexity - O(n)
