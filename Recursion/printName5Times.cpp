#include<iostream>
using namespace std;

void printer(int count){
    if(count <= 0) return;
    cout<<"Aditya\n";
    printer(--count);
}
    

int main(){
    int count = 5;
    printer(count);
    return 0;
}