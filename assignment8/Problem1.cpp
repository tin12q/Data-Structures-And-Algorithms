#include<bits/stdc++.h>
using namespace std;

int main(){
    /*Show the steps that Linear search finds a given value x = 4 in an
array A = {10, 8, 2, 7, 3, 4, 9, 1, 6, 5}.*/
    int A[10]={10, 8, 2, 7, 3, 4, 9, 1, 6, 5};
    int x=4;
    int i=0;
    while(i<10){

        if(A[i]==x){
            cout<<"Found at index "<<i<<endl;
            return 0;
        }
        else{
            cout<<"Index "<<i<<": "<<A[i]<<endl;
        }
        i++;
    }
}