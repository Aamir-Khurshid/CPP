#include<iostream>
using namespace std;
int main(){
    int i=0,j, m ;
    cout<<"Enter the number of rows"<<endl;
    cin >> m;
    int count =1;
    while(i<m){
        int j =1;
        while(j<=m){
            cout<<count<<" ";
            count = count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}