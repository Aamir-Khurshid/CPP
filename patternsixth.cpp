#include<iostream>
using namespace std;
int main(){
    int i,j, m ;
    cout<<"Enter the number of rows"<<endl;
    cin >> m;
   
    for(i=0;i<m;i++){
        for(j=1;j<=m;j++){
           cout<<j;
        }
        cout<<endl;
    }
}
