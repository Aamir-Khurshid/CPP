#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cin>> n;
    char ch = ('A');
    while(i<=n){
        int j=1;
        while(j<=i){
            int h=int(ch)+j+i-2;
            cout<<char(h);
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}