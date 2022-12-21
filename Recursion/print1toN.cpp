#include<iostream>
using namespace std;

void linear(int count){
    if(count == 0 ) return;
    linear(--count);
    cout<<count+1<<"\n";
}

int main(){
    linear(10);
    return 0;
}