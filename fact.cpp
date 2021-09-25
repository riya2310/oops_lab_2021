//write a prgram to calculate factorial of a given number using the function fact.
#include<iostream>
using namespace std;
int fact(int n);
int main(){
int n;
cin>>n;
cout<<"factorial of two number is:"<<fact(n)<<endl;
return 0;
}
int fact(int n){
if(n==1){
 return 1;
}
else
return (n*fact(n-1));
}
