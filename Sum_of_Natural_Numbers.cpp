#include<iostream>
using namespace std;
int main(){
    int n,sum=0,i;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        sum = sum+i;
    }
    cout<<"sum of N Natural Numbers:"<<sum;
    return 0;
}
