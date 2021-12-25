#include<iostream>
#include<cmath>
using namespace std;
main()
{
    double result1 , result;
    double a = 5;double b = 6; double c =1;
    result=sqrt( b*b -(4 * a * c));
    result1= -(b) + result;
    double result2= -(b) - result;
    result1=result1/(2*a);
    result2=result2/(2*a);
    cout<<"value of x are :" << result2 << "and" << result1;

}