#include<bits/stdc++.h>
using namespace std;
int main(){
    /*Show the steps that binary search finds a given value x = 4 in an
    array A = {10, 8, 2, 7, 3, 4, 9, 1, 6, 5}.*/
    int A[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x=4;
    int l=0;
    int r=9;
    while(l<=r){
        int m=(l+r)/2;
        if(A[m]==x){
            cout<<"Found at index "<<m<<endl;
            break;
        }
        else if(A[m]>x){
            cout<<"Index "<<m<<": "<<A[m]<<endl;
            r=m-1;
        }
        else{
            cout<<"Index "<<m<<": "<<A[m]<<endl;
            l=m+1;
        }
    }
}