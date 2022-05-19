#include <iostream>
using namespace std;

int maxCuts(int n, int a, int b, int c, int p = 0)
{
	if(n == 0)
		return p;
  
	else if(n <= -1)
		return -1;

	return max(maxCuts(n-a, a, b, c, p+1), max(maxCuts(n-b, a, b, c, p+1), maxCuts(n-c, a, b, c, p+1)));
}

int main() {
	
	int n = 9, a = 2, b = 2, c = 2;
	
	cout << maxCuts(n, a, b, c);
	
	return 0;
}
