// RECURSION
// - WHEN A FUNCTION CALLS ITSELF, IT IS CALLED RECURSION.
// until a specific condition is met, the function will keep calling itself. This is known as the base case. If there is no base case, 
// it will lead to infinite recursion and eventually a stack overflow error.

// #include<bits/stdc++.h>
// using namespace std;

// void print(){
//     cout << "1" << endl;
// print();
// }
// int main(){
//     print();
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void print(){
    if (cnt==5)
        return;
        cout << cnt << endl;
        cnt++;
        print();
    }

int main(){
    print();
    return 0;
}

//recursion tree f()->f()->f()->f()



// recursion must 
// -> Base case
// -> stack overflow / stack underflow/ stack memory
//-> recursion tree
