#include<iostream>
using namespace std;
int main(){
    int num;
    int reverse=0;
    cout<<"Enter the number:";
    cin>>num;
    while(num>0){
        int digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;
    }
    cout<<"The reverse of the number:"<<reverse<<endl;
    return 0;
}
