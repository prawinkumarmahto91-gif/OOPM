#include<bits\stdc++.h>
using namespace std;

class Father{
    public:
    void inspiration(){
        cout<<"Father is my inspiration"<<endl;
    }
    private:
    void money(){
        cout<<"Fathers money should not touch"<<endl;
    }
};

class Mother{

    public:

    void strength(){
        cout<<"Mother is my strength"<<endl;
    }
};

class son : public Father,public Mother{
     public:   
    void study(){
        cout<<"Child is studying"<<endl;
    }
};

int main(){
    son s1;
    s1.study();
    s1.inspiration();
    s1.strength();
    
}