#include<iostream>
using namespace std ;
int main (){
    int age ;
    cout<<" Enter the age : " ;
    cin>>age;
    if (age>=18){
        cout<<"Eligible for vote : " ;
        
    }
    else if (age<18){
        cout<<"Not eligible for vote : ";
    }
}