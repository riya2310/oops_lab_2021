//CODE FOR FUNCTION OVERLODDING
//NAME- RIYA BHATT; UNIVERSITY ROLL NO. - 2018652
#include<iostream>
#define pi 3.14
using namespace std;
int area(int a);
int area(int l,int b);
double area(int r,double f);
int main(){
int a,l,b,r;
cin>>a>>l>>b>>r;
cout<<"area of square is:"<<area(a)<<endl;
cout<<"area of rectangle is:"<<area(l,b)<<endl;
cout<<"area of circle:"<<area(r,pi)<<endl;
}
int area (int a){
int b=a*a;
return b;
}
int area(int l,int b){
int c=l*b;
return c;
}
double area(int r,double f){
double d=f*r*r;
return d;
}


