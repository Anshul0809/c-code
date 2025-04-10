//relational operator
//>,>=,<,<=,!=
#include<iostream>
using namespace std;
int main()
{
    int a;
    a=(3>5)||(-1<4);
    cout<<a<<endl;//1
    a=(3>5)&&(1<4);
    cout<<a<<endl;//0
    a=9 && -8;
    cout<<a<<"\n";//1
    int k=1;
    cout<<(k!=a)<<endl;//0

}
