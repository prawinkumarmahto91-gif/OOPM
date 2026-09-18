#include<bits\stdc++.h>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"Animal is eating:"<<endl;
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout<<"Dog is barking";
    }
};

int main(){
    Dog d1;
    d1.eat();
    d1.bark();
}