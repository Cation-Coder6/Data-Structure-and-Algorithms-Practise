#include<iostream>
#include<vector>
using namespace std;

void reverser(int *v , int begin , int end){
    if( begin > end  ) return;
    swap(v[begin] , v[end]);
    return reverser(v , ++begin , --end);
}

int main(){
    int v[] = {1,2,3,4,5,6,7,8,9};
    reverser(v , 0 , 8);
    for(int i = 0 ; i < 9 ; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}