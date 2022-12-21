#include<iostream>
using namespace std;

int sumOfNumbers(int count){
    if(count == 0 ) return 0;
    return count+sumOfNumbers(count-1);
}

int main(){
    cout<<sumOfNumbers(10);
    return 0;
}