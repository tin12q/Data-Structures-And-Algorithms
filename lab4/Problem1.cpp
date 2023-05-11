#include<bits/stdc++.h>
using namespace std;
int a[100];
int n;
void readA(int *a){
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

}
void printA(int *a){
    cout<<"The array is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void insertionSortA(int *a){
    for(int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
void selectionSortA(int *a){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}
void bubbleSortA(int *a){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp; 
            }
        }
    }
}
int linearSearch(int *a,int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }
    return -1;
}
int binarySearch(int *a,int key){
    int l=0;
    int r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}
void reset(){
    memset(a,0,sizeof(a));
    n = 0;
}
int main(){
    
    reset();
    readA(a);
    printA(a);
    int*b =a;
    int *c=a;
    double start = clock();
    insertionSortA(a);
    double end = clock();
    fstream file;
    file.open("SortingTime.txt",ios::out|ios::app);
    file<<"Insertion sort took "<<(end-start)/CLOCKS_PER_SEC<<" seconds"<<endl;
    start = clock();
    selectionSortA(b);
    end = clock();
    file<<"Selection sort took "<<(end-start)/CLOCKS_PER_SEC<<" seconds"<<endl;
    start = clock();
    bubbleSortA(c);
    end = clock();
    file<<"Bubble sort took "<<(end-start)/CLOCKS_PER_SEC<<" seconds"<<endl;
    printA(a);
    //close file
    file.close();
    int x;
    cout<<"Enter the element to search: ";
    cin>>x;
    int index = linearSearch(a,x);
    if(index==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index "<<index<<endl;
    }
    index = binarySearch(a,x);
    if(index==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index "<<index<<endl;
    }
}