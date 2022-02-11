#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag =1;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            cout<<"Non prime"<<endl;
            break;
            flag=1;
        }
    }
    if(flag==0){
        cout<<"Prime number"<<endl;
    }
    return 0;
}