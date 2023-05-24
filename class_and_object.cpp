#include <bits/stdc++.h>
using namespace std;

class Student{//class declare
    public:
        char name[100];
        int roll;
        int cls;
        char section;

};

int main(){
    Student rahim;//object create
    rahim.roll=10;
    rahim.cls=9;
    rahim.section='A';
    char nm[100]="Rahim Uddin";
    strcpy(rahim.name,nm);  
    Student Karim;
    Karim.roll=11;
    Karim.cls=9;
    Karim.section='A';
    char nm2[100]="Karim Mia";
    strcpy(Karim.name,nm);

    cout<<Karim.name;

    return 0;
}