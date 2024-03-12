#include<iostream>
using namespace std;

void result(int a,int b,int c){
    if(a+b==c){
        cout<<'+';
    }else{
        cout<<'-';
    }
}
int main(){
    int t;
    cin>>t;
    int a;
    int b;
    int c;
    for(int i=0;i<t;i++){
    cin>>a>>b>>c;
    result(a,b,c);
    cout<<endl;
    }
}