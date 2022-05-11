// sort students by marks
// we will have to use a vector of pairs

#include <iostream>
#include <vector>
using namespace std;



// void myCmp(vector<pair<int,int>>p1 , vector<pair<int,int>>p2){
void myCmp(pair<int,int>p1 , pair<int,int>p2){
    return p1.second > p2.second;
}


void printByMarks(int roll[] , int marks[] , int n){
    vector<pair<int,int>>v;
    for (int i = 0 ; i < n ; i++){
        v.push_back({roll[i] , marks[i]})
    }

    /*
    roll [] = {101 , 103 , 105}
    marks[] = {80 , 70 , 90}
    v = {(101,80) , (103, 70) , (105, 90)} <--pairizng roll no and marks
    */

   sort(v.begin(), v.end(), myCmp); // how to give parameter in myCmp?
   // if i use default sort then the vecotrs will be sorted according to the roll numbers
   // to use default sort take marks first and then roll ... 
   // then your vector of pair will get sorted in ascending order.. 
   // so still you will need to make you own comparision 
   for (int i = 0 ; i < n; i++){
       cout << v[i].first << " " << v[i].second;
       cout << endl;
   }
}



int main() {
    int marks[] = {101,103,105};
    int roll[] = {80 , 90 ,100};
    int n = sizeof(marks) / sizeof(marks[0]);

    printByMarks(roll , marks , n);

    return 0;
}


//=================================================================

#include <iostream>
using namespace std;

void printByMarks2(int roll[] , int marks[] , int n){

    // a vector v that takes pair of 2 intigers
    vector<pair<int,int>>v;

    // making pairs and adding in vector v
    for (int i = 0 ; i < n ; i++)
        v.push_back({marks[i], roll[i]});

    //sorting the vector v in decending order of marks which is 1sd argement now
    sort(v.begin() , v.end() , greater<pair<int,int>>())

    // greater funciton reverses the default order


    //printing the vector after sorting
    for (int i = 0 ; i < n; i++){
        cout << v[i].second << " " << v[i].first;
        cout << endl;
    }

    /*
    if you don't want to use greater funciton and want to use default function
    then you can print the vector in reverse order

    for (int i = n-1 ; i <= 0 ; i--)
        cout << v[i].second << " " << v[i].first << endl;

     */
    

}

int main() {
    int marks[] = {101,103,105};
    int roll[] = {80 , 90 ,100};
    int n = sizeof(marks) / sizeof(marks[0]);

    printByMarks2(roll , marks , n);

    return 0;
}
