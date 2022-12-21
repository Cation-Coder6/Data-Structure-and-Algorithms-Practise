#include<iostream>
using namespace std;

void linear(int count){
    if(count == 0 ) return;
    cout<<count<<"\n";
    linear(--count);
}

int main(){
    linear(10);
    return 0;
}