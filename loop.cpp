//Loop statement
//1.do while 2.while(infinite loop) 3.for(certility)
//Do While loop ( do while loop will exicute the statement or core till the condition will ture otherwise loop will be termineted it will also called exit loop
//note;- the do while loop exicute the statement atleast one time wheather the condition is ture or false)
//syntex
/*

(initializw variable)
do
{
statement \code;
increment\decrement
}while(conditon);
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int a=1;
    do
    {
        cout<<a<<endl;
        a++;

    }
    while(a<=10);
}*/
/*
{
    int a=10;
    do
    {
        cout<<a<<endl;
        a--;

    }while (a>=1);
}
*/

/*{
int number ;
cout<<"enter a number"<<endl;
cin>>number;
int a=1;
do
{
    cout<<number*a<<endl;
    a++;
}while(a<=10);


}
*/
// write a program to print beetween even number 1 to 10
//write a program to print beetween odd number 1 to 10
/*
{
    int a=1;
    do
    {
        if (a%2!=0)

        {
            cout<<a<<endl;
        }
        a++;

    }
    while (a<=10);
}
*/
//write a program to print the sum of the values between 1 to 10
/*
{
    int a=1 ,s=0;
    do
    {

 s=s+a;
 a++;
    }while(a<=10);
    cout<<"total value="<<s<<endl;
}
*/
//write a program to generate factorial

/*
#include<iostream>
using namespace std;
int main()

{
    int number,a=1;
    cout<<"enter number"<<endl;
    cin>>number;
    do
    {
        a=a*number;
        number--;
    }while(number>=1);
    cout<<a<<endl;
}
*/

//while (while loop will exicute the statement if the condition is ture otherwise it will terminet the loopand it will also called entry loop)
//syntex

/*veriable initilize
while(condition)
{
    statement\code;
    increment\decrement;
}
*/
//using while loop print 1to 10
/*
{
  int a=1;
  while(a<=10)
  {
      cout<<a<<endl;
      a++;
  }
}
*/
/*
{
    int a=10;
    while(a>=1)
    {
        cout<<a<<endl;
        a--;
    }
}
*/
//write a program to find out the how many digits in given number
/*
#include<iostream>
using namespace std;
int main()

{
    int number ,a=0;
    cout<<"enter a number"<<endl;
    cin>>number;
    while(number>0)
    {

        number=number/10;
        a++;

    }
    cout<<"total digit="<<a<<endl;
}
*/

/*triky
#include<iostream>
using namespace std;
int main()

{
   int i=10;
   while(i)//expresion(j,i=multiexpresion)
   {
       cout<<i<<"\t";
       i++;
       //i--;
   }
}
*/
/*
{


int i=1;
int j=1;
while(j--,i--)
{
    cout<<"hello";
    i--;
}
cout<<"finised";

}
*/

//for loop (for loop will exicute the statetment tillthe cindition is ture otherwiseit will get termineted in a for loop we can initialize the variable, give the condition and use increment and decrement in a single line condition)
/*syntex
 for (initialize;condition; inc|dec)
 {
 statement/code;
 }
 */
/*
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=10;i++)
  {
      cout<<i<<"\t";
  }
  int j;
  for(j=10;j<=20;j++)
  {
      cout<<j<<"\t";
  }
  int x=1;
  for(;x<=2;x++)
  {
      cout<<x<<"\t";
  }

}
*/
/*
#include<iostream>
using namespace std ;
int main()
/*
{
    int number ;
    cout<<"enter a number"<<endl;
    cin>>number;
    for(int i=1;i<=10;i++)
    {
        cout<<number*i<<endl;
    }

}
*/

//wirte a program to display odd number between 20 to 50
/*
{

 for(int i=20;  i<=50; i++)
 {


 if(i%2!=0)
 {
    cout<<"odd number"<<i<<endl;
 }
 else

    cout<<"even number"<<i<<"\t";
}}
*/
/*
write a program to find out the given number is prime or not
write a program to find out the l.c.m. of 24 and 40
write a program to  find out the h.c.f. 24 to 40
write a program to find out the factor of any number
*/
/*
{
    int number;
    int count=0;
    cout<<"enter a number"<<endl;
    cin>>number;
    for (int i=1;i<=number;i++)
    {
        if(number%i==0)
        {
            count++;
            //cout<<i<<endl;
        }
    }
    if(count>2)
    {
        cout<<"non prime number"<<endl;
    }
    else
        {
            cout<<"prime  number"<<endl;

    }
}
*/
/*
{
    int number;
    cout<<"enter a number"<<endl;
    cin>>number;
    int a=number;
    int sum=0;
    while(number>0)
    {
        int x=number%10;
        sum+=x;
        number=number/10;
    }
    if(a%sum==0)
    {
        cout<<"harshad number";
    }
    else
    {
        cout<<"not";
    }
}
*/
/*
{
    int amount;
    cout<<"enter amount"<<endl;
    cin>>amount;
    int a=0,b=0,c=0,d=0,e=0;

    a=amount/2000;
    amount=amount%2000;
        b=amount/1000;
    amount=amount%1000;
        c=amount/500;
    amount=amount%500;
        d=amount/200;
    amount=amount%200;
        e=amount/100;
    amount=amount%100;
    cout<<a<<"\t";
    cout<<b<<"\t";
    cout<<c<<"\t";
    cout<<d<<"\t";
    cout<<e<<"\t";
}
*/
//2.l.c.m and h.c.f
/*
{
 int number1;
 cout<<"enter number 1"<<endl;
 cin>>number1;
 int number2;
 cout<<"enter number 2"<<endl;
 cin>>number2;
 int mx;
 mx=number1>number2?number1:number2;
 while(1)
 {
     if(mx%number1==0 && mx%number2==0)
     {
         cout<<"l.c.m="<<mx;
         break;
     }
     mx++;
 }



}
*/
/*
{


int number1;
cout<<"enter number 1"<<endl;
cin>>number1;
int number2;
cout<<"enter number 2"<<endl;
cin>>number2;
int mn;
mn=number1<number2?number1:number2;
while(1)
{
    if(number1%mn==0 && number2%mn==0)
    {
        cout<<"h.c.f="<<mn;
        break;
    }
    mn--;
}
}
*/
/*
{
    int number;


    cout<<"enter number"<<endl;
    cin>>number;
    int k=number;
int count=0;
    while(number>=1)

    {
    if(k%number==0)
    {
        cout<<number<<endl;

        count+=1;
    }
    number--;
    }
    cout<<"total factor="<<count<<endl;

}
*/
//prime number
/*
{
  int number,b,f=0;
  cout<<"enter a number"<<endl;
  cin>>number;
  b=number-1;
  while(b>1)
  {
      if(number%b==0)
      {
          f=1;
          break;
      }
      b--;
  }
  if(f==1)
  {
      cout<<"It is not prime"<<endl;
  }
  else
    {
        cout<<"It is prime number"<<endl;
    }


}
*/
//wirte a program to find out the given number is perfect number or not?(perfect number=factor ke digit ko add karne pe whi number aana chahiye)
//write a program to print the given number in reverse order
//write a program to print the sum of frist & last digit?
//armstrom number

//3.

#include<iostream>
using namespace std;
int main()
{
 int number;
 cout<<"enter a number "<<endl;
 cin>>number;
 int k=number;

 while(k>=10)
 {
     k=k/10;
 }
 cout<<"first digit"<<k<<endl;

 int a=number%10;
 {
     cout<<"last number="<<a<<endl;
 }
 int sum=k+a;
 cout<<"sum of first and last digit="<<sum<<endl;

}

//2.
/*
#include<iostream>
using namespace std;
int main()

{

int number;
int a;
cout<<"enter a number"<<endl;
cin>>number;
while(number>0)
{
    a=number%10;
    number=number/10;
    cout<<a;
}
}
*/
/*
int n;
int z=n;
cout<<"enter a number"<<endl;
cin>>n;
int temp=0;
while(n>0)
{
int x=n%0;
temp=temp*10+x;
n/10;
cout<<temp;
if(temp==z)
{
cout<<"pleadron number;
}
*/
//1.
/*
{
    int number;
    cout<<"enter a number"<<endl;
    cin>>number;
    int sum=0;
    for(int i=1; i<number; i++)
    {
        if(number%i==0)
        sum=sum+i;

    }
    if(sum==number)
    {
        cout<<"perfect number"<<endl;
    }
    else
        {
        cout<<"not perfect number"<<endl;
        }

}


*/
