#include<bits/stdc++.h>
using namespace std;

typedef struct STUDENT {
char name[30]; 
char classroom[10]; 
float mMath; 
float mPhysical; 
float avg;
};

void find(STUDENT *students,int n,char *name){
    for(int i=0;i<n;i++){
        if(strcmp(students[i].name,name)==0){
            //print 
            cout<<"Student "<<i+1<<": "<<endl;
            cout<<"Name: "<<students[i].name<<endl;
            cout<<"Classroom: "<<students[i].classroom<<endl;
            cout<<"Math: "<<students[i].mMath<<endl;
            cout<<"Physical: "<<students[i].mPhysical<<endl;
            cout<<"Average: "<<students[i].avg<<endl;
            return;
        }
    }
    cout<<"Not found!"<<endl;
    return;
}
void sortByAvg(STUDENT *students,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(students[j].avg>students[j+1].avg){
                STUDENT temp=students[j];
                students[j]=students[j+1];
                students[j+1]=temp;
            }
        }
    }
}

int main(){
    //add n students
    cout<<"Enter the number of students: ";
    int n;
    cin>>n;
    STUDENT students[n];
    cout<<"Enter the students: "<<endl;
    for(int i=0;i<n;i++){
        
        cout<<"Student "<<i+1<<": "<<endl;
        cout<<"Name: ";
        cin.ignore();
        cin.getline(students[i].name,30);
        cout<<"Classroom: ";
        cin.getline(students[i].classroom,10);
        cout<<"Math: ";
        cin>>students[i].mMath;
        cout<<"Physical: ";
        cin>>students[i].mPhysical;
        cout<<"Average: ";
        cin>>students[i].avg;
       
        
    }
    //find a student
    cout<<"Enter the name of the student you want to find: ";
    char name[30];
    cin.ignore();
    cin.getline(name,30);
    find(students,n,name);
    sortByAvg(students,n);
    cout<<"The students sorted by average: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"Student "<<i+1<<": "<<endl;
        cout<<"Name: "<<students[i].name<<endl;
        cout<<"Classroom: "<<students[i].classroom<<endl;
        cout<<"Math: "<<students[i].mMath<<endl;
        cout<<"Physical: "<<students[i].mPhysical<<endl;
        cout<<"Average: "<<students[i].avg<<endl;
    }
}