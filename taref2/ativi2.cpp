#include<iostream>

int main(){
    using namespace std;

int a;
int b;
cout<<"digite um numero\n";
cin>>a;
cout<<"digite um numero\n";
cin>>b;
if(a%b==0|| b%a==0){
    cout<<"seu numero eh multiplo\n";
}
else {
    cout<<"seu numero nao eh multiplo\n";
}   