#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    bool flag = 0;
    for(int i=2;i<n-1;i++){
        if (n%i==0){
            cout<<n<<" not prime"<<endl;
            flag = 1;
            break;
        }
    }
    if (flag==0){
        cout<<n<<" is prime"<<endl;
    }
    return 0;
}


