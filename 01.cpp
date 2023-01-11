#include <bits/stdc++.h>
using namespace std;

//* Print 1 to N
void counter(){
    static int count = 0;
    if(count==3) return;
    cout<<count<<endl;
    count++;
    counter();
}

int main(){
    counter();
    return 0;
}