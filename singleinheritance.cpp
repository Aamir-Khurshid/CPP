#include<iostream>
using namespace std;

class Area{
    public:
    int a = 5 ;

};
class Square: public Area{
    public:
    int area = a*a;
    void show_area(){
        cout<<area;
    }
};
int main(){
    Square a1;
    a1.show_area();

    return 0;
}