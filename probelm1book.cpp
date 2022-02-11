// print the grade of student which is above 75% grade A above 60% and below 75% grade B and below 60% 'C'
#include <iostream>
using namespace std;
int main(){
    int n1;
    cout<<"Enter the marks of student"<<endl;
    cin>>n1;
    if(n1>=75){
        cout<<"Grade A student"<<endl;
    }
    else if(n1<75 && n1>=60){
        cout<<"Grade B student"<<endl;
    }else{
        cout<<"Grade C student"<<endl;
    }
    return 0;
}