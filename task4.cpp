#include<iostream>
#include<cmath>
using namespace std;
main()
{
    double number;
    cout<<"enter number:";
    cin >> number;
    double result;
    double c=1/57.2958;
    c=c*30;
    c=tan(c);
    cout<< c;
    result = c*number;
    cout<<"hight is equal to:"<< result;

}