#include<bits\stdc++.h>
using namespace std;

//area of circle
float area(float radius){
    return 3.14*radius*radius;
}

//area of triangle
float area(float base,int height){
    return 0.5*base*height;
}

//area of rectangle
float area(float length,float breadth){
    return length*breadth;
}


int main(){
    float r,base,l,b;
    int h;
    cout<<"Enter radius of circle:";
    cin>>r;
    cout<<"Enter base of triangle:";
    cin>>base;
    cout<<"Enter height of triangle:";
    cin>>h;
    cout<<"Enter length of rectangle:";
    cin>>l;
    cout<<"Enter breadth of rectangle:";
    cin>>b;

   cout<<"area of circle is: "<< area(r)<<endl;
     cout<<"area of triangle is: "<< area(base,h)<<endl;
      cout<<"area of rectangle is: "<< area(l,b)<<endl;
}