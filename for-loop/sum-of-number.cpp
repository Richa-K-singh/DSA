#include<iostream>
using namespace std ;
int main(){
    int number ,a=0;
    cout<<"Enter the number:";
    cin>>number;
    for(int i=1;i<=number;i++){
     cout<<i<<endl;
     a=a+i;   
    }
    cout<<a;

}