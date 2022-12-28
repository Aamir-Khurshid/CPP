#include<iostream>
using namespace std;

int main()
{
    int x,sum,diff,multiply,divide;
    int y ,rem ;
    cout << "Enter first number " << endl;
    cin >> x ;
    cout << "Enter second number" << endl;
    cin >> y;
    sum = x + y;
    diff = x - y;
    multiply = x*y;
    rem = x/y;

    cout << "Your sum is " << sum << endl;
    cout <<  "Your difference is " << diff << endl;
    cout <<  "Your product is " << multiply << endl;
    cout <<  "Your remainder is " << rem << endl;




    return 0;
}