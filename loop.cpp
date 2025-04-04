//Loop statement
//1.do while 2.while 3.for
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

#include<iostream>
using namespace std;
int main()
/*{
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
{
    int a=1 ,s=0;
    do
    {

 s=s+a;
 a++;
    }while(a<=10);
    cout<<"total value="<<s<<endl;
}
