#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number for it's Factorial!";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    cout<<"factorial is "<<fact<<endl;
}

