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

Student fun(){
    char name[100]="Karim Mia";
    Student karim(18,'C',7,name);
    return karim;
}

int main(){
    Student rahim(29,'A',7,"Rahim Mia");

    Student karim=fun();
    cout<<rahim.name<<endl;
    cout<<karim.name<<endl;

    return 0;
}