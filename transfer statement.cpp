//transfer statement
//1.switch case(choiec base/menu base programing)(it is called jumping statement .the exicusion speed of switch case is faster than leader condition it si use for choice base and menu base programing)
/*syntex
switch(expression)
{
case value 1:
{
statement/code;
break;
}
case value 2:
{
statement/code;
break;
}
default:
{
statement/code;
break;
}

}
*/


#include<iostream>
using namespace std;
int main ()

{
   int a,b,c;
   cout<<"enter a 2no."<<endl;
   cin>>a>>b;
   cout<<"select 1 for +,select 2for -,select 3 for *,select 4 for /,"<<endl;
   cin>>c;
   switch(c)//(it does not support float data type)

   {
   case 1://('A')(charecter kare to)//(case 'a':)
    {
        cout<<"sum="<<a+b<<endl;
        break;//(without break=fall through condition)
    }
    case 2:
    {
        cout<<"substract="<<a-b<<endl;
        break;
    }
    case 3:
    {
        cout<<"multiply="<<a*b<<endl;
        break;
    }
    case 4:
    {
        cout<<"division="<<a/b<<endl;
        break;
    }
    default:
    {
        cout<<"invalid choice"<<endl;
        break;
    }
   }


}


