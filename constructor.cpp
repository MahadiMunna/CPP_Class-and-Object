#include <bits/stdc++.h>
using namespace std;

class Student{//class declare
    public:
        char name[100];
        int roll;
        int cls;
        char section;
        Student(int r,char s,int c,char* n){//this function is called constructor
            roll=r;
            section=s;
            cls=c;
            strcpy(name,n);
        }

};

int main(){
    Student rahim(29,'A',7,"Rahim Mia");

    cout<<rahim.name;

    return 0;
}