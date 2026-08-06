#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int age;
    int roll;
    string dept;

    Student(){
        cout<<"I ma a construcor\n";
    }

};
int main(){
    Student s1;
    s1.name="prawin";
    s1.age=20;
    s1.roll=46;
    s1.dept="I.T";
    cout<<s1.name<<"\n";
    cout<<s1.age<<"\n";
    cout<<s1.dept<<"\n";

    


}