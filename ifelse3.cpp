#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    if (x<18){
        cout << "not eligible for job";}
        if (x>57){
            cout << "retirement";
        }
        else if(x>=18){
            cout<<" eligible for job";}
            else if (x>=55 && x<=57){
cout << "eligle for job, but retirement soon.";
            }

}
        