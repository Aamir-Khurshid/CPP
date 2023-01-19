#include<iostream>
using namespace std;
int main(){
    int i=0,j, m ;
    cout<<"Enter the number of rows"<<endl;
    cin >> m;
    cout<<endl;
    while(i<m){
        int j=0;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i=i+1;
    }
}