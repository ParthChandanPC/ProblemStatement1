#include <bits/stdc++.h>
using namespace std;
void print(int x,int y){
    if(y<x){
        return;
    }
    if(y%2==0){
        print(x,y-2);
    }else{
        print(x,y-1);
    }
    if(y%2==0){
        cout<<y<<" ";
    }
}
int main() {
    cout<<"Enter a number: ";
    int number;
    cin>>number;
    cout<<"Even numbers from 0 to "<<number<<" is: ";
    print(0,number);
    cout<<"\n";
    return 0;
}
