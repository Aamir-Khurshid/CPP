#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;      // cin is used to take input in c++
    
    if(n>=0){
      cout << "Square of n : " << n*n;
    }
    else{
      cout << "Negative number";
    }
    return 0;
}