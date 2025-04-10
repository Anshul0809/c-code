//special operator// It is use to access the globle veriable in case of duplicasy
//1.scope resolution ::
//2.address operator &
//3.sizeof()
#include<iostream>
using namespace std;
int a=100;//globle
int b=80;
int main()
{
 int a=90;//local
 cout<<"a="<<a<<endl;
 cout<<"a="<<::a<<endl;
 cout<<"b="<<b<<endl;
 cout<<"address of a="<<&a<<endl;//& repersant of address in datatype
 cout<<"bytes="<<sizeof(a);
}
