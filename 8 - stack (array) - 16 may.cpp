#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack <int> mystack; // creating stack // stack by default uses deque container
    mystack.push(5);
    mystack.push(1);
    mystack.push(2);

    // your stack is - 5, 1, 2

    // stack Top
    cout << mystack.top(); // 2

    // sum of all elements of the stack also fing number of elements of in the stack
    int sum = 0;
    int no_of_elements = 0;
    while (!mystack.empty()){            // until the stack is empty .. 
        sum = sum + mystack.top();       // mystack will be false ; !mystack will be false ..
        mystack.pop();                   // here we are adding the last element and removing the last element.
        no_of_elements++;
    }
    cout << sum << "\n";
    cout <<" no_of_elements " << no_of_elements << "\n";

    return 0;
}

int main() {
    stack <int> mystack; // emplace works same as push 
                         // it's "emplace" not "emplace_back"
                         // and above was 
                         // "push" not "push_back"
                         // in stack it' like this only
    mystack.emplace(5);
    mystack.emplace(1);
    mystack.emplace(2);


    // your stack is - 5 1 2

    // stack Top
    cout << mystack.top(); // 2

    cout<< mystack.size();

    // sum of all elements of the stack also fing number of elements of in the stack
    int sum = 0;
    int no_of_elements = 0;
    while (!mystack.empty()){            // until the stack is empty .. 
        sum = sum + mystack.top();       // mystack will be false ; !mystack will be false ..
        mystack.pop();                   // here we are adding the last element and removing the last element.
        no_of_elements++;

    }
    cout << sum << "\n";
    cout <<" no_of_elements " << no_of_elements << "\n"; // you could directly use cout << mystack.size()
    

    
    return 0;
}
//================================================================================================================

#include <iostream>
#include <stack>
using namespace std;


class Stack{
    int top;
    public:

    // constuctor
    Stack(){
        top = -1; // not a defined index so we have chose to use this not 0
    }
    
    int a[10];    // Max size of stack is 10 ... max value of top is 9

    void push(int );
    int pop(int); //<-- no need to write (int x)
    bool isEmpty();
}; //<-- don't forget ';'

void Stack :: push(int x){ // Stack(user defined word) < not > stack(keyword)(yellow)
    if (top >= 9)
        cout << "stack is full" << "\n";
    else 
        a[++top] = x;    // top from -1 to [0]

    // push(int x){      // don't write constructor ... imple write the above line .. 
                         // here we are using array to implement stack
    //     if 
    // }

}


int Stack :: pop(int x){
    if( top < 0 )
        cout << " stack is empty \n " ;
    else {
        top--;
    }
    return a[top];

}

bool Stack :: isEmpty(){
    if (top < 0)
        return true;
    else
        return false;
}

int main() {
    Stack s1;
    s1.push(19);
    s1.push(243);
    s1.pop();
    s1.isEmpty()
    s1.pop();
    s1.isEmpty();
    s1.pop();
    s1.isEmpty()

    return 0;
}
