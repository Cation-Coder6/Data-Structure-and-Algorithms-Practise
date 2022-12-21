#include<iostream>
using namespace std;

void sumOfNumbers(int sum , int count){
    if(count == 0 ) {
        cout<<sum;
        return;
    }
    sum += count;
    sumOfNumbers(sum , --count);
}

int main(){
    sumOfNumbers(0 , 10);
    return 0;
}