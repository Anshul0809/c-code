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


/*#include<iostream>
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


}*/
/*
#include<iostream>
using namespace std;
int main()
{
    float r;
    cout<<"enter any number"<<endl;
    cin>>r;
    char f;
    cout<<"enter A for area of circle,enter C for circumfarence of circle,enter S  of square of given number"<<endl;
    cin>>f;
    switch(f)
    {
    case 'A':
    case'a':
        {
            cout<<"area of circle ="<<3.14*r*r<<endl;
            break;
        }
    case 'C':
    case'c':
        {
            cout<<"circumfarence of circle ="<<2*3.14*r<<endl;
            break;
        }
    case 's':
    case'S':
        {
            cout<<"square of given number ="<<r*r<<endl;
            break;
        }
    default:
        {
            cout<<"Invalid choice"<<endl;
            break;
        }
    }
}
*/

//TRANSFER STATEMENT
/*2.goto

there are two type
1.bottom lebal
2.top lebal
/*
syntex

goto label(A);

label(A):

*/
//bottom lebal example
#include<iostream>
using namespace std;
int main ()
/*{
  cout<<"hello"<<endl;
  goto x;
  cout<<"okay"<<endl;
  cout<<"okay"<<endl;
  cout<<"okay"<<endl;
  cout<<"okay"<<endl;
  x:
      cout<<"bye"<<endl;
}*/
//top lable example

/*{
    int a=1;
    x:
        cout<<a<<"\t";
        a++;
        if (a<101)
        {
        goto x;
        }
        cout<<"\nfinished";
}*/
/*{
    int a=10;
    x:
        cout<<a<<"\t";
        a--;
        if (a>0)
        {
            goto x;
        }
}*/
//wirte a program to generate the table any number
 {
    int num, a = 1;

    cout << "Enter a number: ";
    cin >> num;


x:
    cout << num * a<<endl;
    a++;

    if (a > 10)

    {
    goto x;
    }
}





