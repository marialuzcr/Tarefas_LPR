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
    
    cout << "\033[1;32m" << "seu numero eh multiplo\n" << "\033[0m" << endl; 

}
else {
    cout<<"seu numero nao eh multiplo\n";
}
