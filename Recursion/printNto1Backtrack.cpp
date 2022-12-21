#include<iostream>
using namespace std;

void linear(int count){
    if(count == 10 ) return;
    linear(++count);
    cout<<count<<"\n";
}

int main(){
    linear(0);
    return 0;
}