#include<iostream>
using namespace std;

int main(){
    int a = 20;                 // Cant use same variable with different datatype
    char b= 'a';               // Char only takes one variable 
    int size = sizeof(a);     // Use sizeof() To find size of variable 
    cout<<size;
}