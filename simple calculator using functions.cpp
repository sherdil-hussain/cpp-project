#include <iostream>
using namespace std;



int add(int a, int b){
    return a+b;
}
int subtract(int a, int b){
    return a-b;
}
int devide(int a, int b){
    return a/b;
}
int multiply(int a, int b){
    return a*b;
}


int main()
    {
double a,b;
char op;
cout<<"simple calculator\n";
cout<<"enter the first number\n";
cin>>a;
cout<<"enter the second number\n";
cin>>b;
cout<<"enter the operator\n";
cin>>op;
    if (op=='+')
   { cout<<"addition ="<<add(a,b);}
   else if (op=='-')
       { cout<<"subtraction ="<<subtract(a,b);}
   else if (op=='*')
    {cout<<"multiplication ="<<multiply(a,b);}
   else if (op=='/'){
        if(b!=0)
        {cout<<"divsion ="<<devide(a,b);}

        else 
        cout<<"error! the denenomitor cannot be zero :";}
    else 
    cout<<"invalid ooperator\n";
    return 0;


          }

