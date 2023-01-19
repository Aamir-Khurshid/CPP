#include<iostream>
using namespace std;
int main(){
    int i,j, m ,n;
    cout<<"Enter the number of rows"<<endl;
    cin >> m;
    n = 2*m -1;  // n is the number of columns
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                if(i==0 && j==int(n/2)){
                    cout<<"*";
                }
                else if((i+j)%int(n/2)==0){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
        }
        cout<<endl;
    }
}
