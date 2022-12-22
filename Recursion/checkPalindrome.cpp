#include<iostream>
#include<vector>
using namespace std;

bool palindrome(int *v , int begin , int end){
    if( begin >= end  ) return true;
    
    return (v[begin] == v[end] && palindrome(v , ++begin , --end));
}

int main(){
    int v[] = {1,2,3,4,5,4,3,2,1};
    cout<<palindrome(v , 0 , 8)<<"\n";
    return 0;
}