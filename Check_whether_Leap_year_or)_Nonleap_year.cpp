#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter your year :"<<endl;
    cin>>year;
    if(year%4==0 && year%100!=0 || year%400==0){
        cout<<"Entered year is Leap year.";
    }else{
        cout<<"Entered year is not an Leap year.";
    }
     return 0;   
}
