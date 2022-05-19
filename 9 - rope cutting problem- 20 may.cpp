/*
HOW TO MAKE A RECURSIVE PROGRAM
--> 1st make a flow chart of what's happing ... by taking an example.
--> 2nd make a write whatever is coming in your mind ... steps coming in your mind to solve that problem
       --> like - wring the formula required to solve the question
                    - base cases and other cases
                    - main body of the program
                    -  how you are gonna call the function ... should u use 'return' b4 calling the function or not
                    - any procedure/approach coming in your mind to solve the problem
-->  Final step : now write full code ... above things will help you to write it.
*/

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
