#include <bits/stdc++.h>
using namespace std;

void printName(){
    static int cnt = 0;
    if(cnt==5) return;
    cout<<"Rushikesh\n";
    cnt++;
    printName();
}

void printN(int n){
    static int cnt = 1;
    if(cnt>n)return;
    cout<<cnt<<" ";
    cnt++;
    printN(n);
}

void printOneToN(int n){
    if(n<5)return;
    cout<<n<<" ";
    printOneToN(n--);
}

void printBackN(int n){
    if(n<1)return;
    printN(n--);
    cout<<n<<" ";
}

int main(){
    //* Q1 --> Print name 5 times

    //printName();

    //* Q2 --> Printing linearly from 1 to N

    //int n;
    //cout<<"Enter a number: ";
    //cin>>n;

    // printN(n);

    //* Q3 --> Print n to 1

    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // printOneToN(n);

    //* Q3 --> Print 1 to n using backtrack

    int n;
    cout<<"Enter a number: ";
    cin>>n;    
    printBackN(n);

    return 0;
}