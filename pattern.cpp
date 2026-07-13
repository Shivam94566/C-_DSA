// pattern - nested loop pattern

// 1- for the loop outer , count the no, of lines 
// 2- for the inner loop , focus on the columns and connect them somehow to the rows 
// 3- print them "x" inside the inner for loop 
// 4- observe some patterns and try to find the logic behind them

// print 
// ****
// ****
// ****
// ****


#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout << "*";
        }
        cout << endl;
    }
}