#include<iostream>
using namespace std;
int main (){
    int a,b,c;// swap a number using third variable
    cout<<" Enter a first number:";
    cin >> a;
    cout <<" Enter a second number:";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b;
}