#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout << "ENTRER THE marks of the student";
    cin >> x;
    if(x>=90){
        cout << "A+" << endl;}
        else if(x>=80){
        cout << "A" << endl;}
        else if(x>=70){
        cout << "B+" << endl;}
        else if(x>=60){
        cout << "B" << endl;}
        else if(x>=50){
        cout << "C" << endl;}
        else{
        cout << "Fail" << endl;
        }
}