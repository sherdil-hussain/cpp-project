#include<iostream>
using namespace std;
class A 
{
    int a=2, b=200 ;
    public :
    void fun ()
    {
        int sum = a+b ;
        cout<<"addition ="<<sum<<endl;

    }
    void fun (int c , int d)
    {
        int sub= c-d ;
        cout<<"subtraction ="<<sub<<endl;
         }
};

int main()
{
    A obj ;
obj.fun(); obj.fun(30,39);
return 0;
}