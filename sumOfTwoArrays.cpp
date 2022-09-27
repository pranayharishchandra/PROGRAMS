#include <bits/stdc++.h>
using namespace std;

int sumOfTwoVectors(int *v1, int* v2 , int n1 , int n2)
{
  // write your code here
  // int sizeOfVectorV1 = v1.size();
  // int sizeOfVectorV2 = v2.size();

  // int i = sizeOfVectorV1 - 1;
  // int j = sizeOfVectorV2 - 1;
  int i = n1 - 1;
  int j = n2 - 1;

  int sum = 0;

  while(i >= 0 || j >= 0)
  {
 
      if (i >= 0)
      {
        cout << "i = " << i;
        sum += v1[i];
        i--;
      }
      else 
          cout << "     ";

      if (j >= 0)
      {
        cout << " j = " << j;
        sum += v2[j];
        j--;
      }
      cout << endl;

  }
  return sum;
}
int main()
{
  // vector<int> vec1 = {1,2,3};
  // vector<int> vec2 = {1,2};
  // vector<int> vec3 = {1,2,3,4};

  int vec1[] = {1,2,3};
  int vec2[] = {1,2};
  int vec3[] = {1,2,3,4};

  int size1 = sizeof(vec1)/sizeof(vec1[0]);
  int size2 = sizeof(vec2)/sizeof(vec2[0]);
  int size3 = sizeof(vec3)/sizeof(vec3[0]);

  int sum1 = sumOfTwoVectors(vec1, vec2, size1, size2);
  cout << "sum1 = " << sum1 << endl;

  cout << endl;

  int sum2 = sumOfTwoVectors(vec1, vec3, size1, size3);
  cout << "sum2 = " << sum2 << endl;

  return 0;
}
