#include<bits\stdc++.h>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"Animal eats:"<<endl;
    }
};

class Dog: public Animal{
     public:
     void bark(){
        cout<<"Dog barks"<<endl;
     }
};

class puppy: public Dog{
    public:
    void play(){
        cout<<"Puppy palys"<<endl;
    }
};

int main(){
    puppy p1;
    p1.eat();
    p1.bark();
    p1.play();
}