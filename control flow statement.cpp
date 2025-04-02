//control flow statement
//1.condition (1.single,2.bI 3.nested 4.ladder)
//2.transfer(1.goto 2.switch 3.break 4.continue)
//3.loop (1.do while 2.while 3.for)
//single condition(single condition will be excutied if and only if the condition is ture
//if(condition)
//
//{
  //  statment/code;
//}

/*#include<iostream>
using namespace std;
int main()
{
 int pwd;
 cout<<"enter a pwd"<<endl;
 cin>>pwd;
 if(pwd>=0)
 {
     cout<<"pwd="<<pwd;
 }
}*/

/*{
    int age;
    cout<<"enter age"<<endl;
    cin>>age;
    if(age>=18)
    {
        cout<<"you are eligible"<<endl;
        cout<<"done";
    }

}*/

//BI condition( in a BI condition we use if and else if condition will be exicuted when the condition is ture otherwise else statment will be exicuted)

/*if(condition)
{
    statment/code;
}
else
{
    statment/code;
}*/



/*{

    int age;
    cout<<"enter age"<<endl;
    cin>>age;
    if(age>=18)
    {
        cout<<"you are eligible"<<endl;
        cout<<"done";
    }
    else
    {
        cout<<"you are not eligible"<<endl;
    }
}*/


//operator =(assiment),==(comparision operator)



//write a program to print the given number is even or odd

/*{
    int number;
    cout<<"enter a number"<<endl;
    cin>>number;
    if(number%2==0)
    {
        cout<<"even number"<<endl;
    }
    else
    {
        cout<<"odd number"<<endl;
    }
}
*/
//write a program to display the large value between 2 number

/*{
    int a;
    cout<<"enter a"<<endl;
    cin>>a;
    int b;
    cout<<"enter b"<<endl;
    cin>>b;
    if(a>b)
    {
        cout<<"max no="<<a;
    }
    else
    {
    cout<<"max no="<<b;
    }
}*/

//else if ladder(more than one condition given)

/*if (condition)
{

}
else if
{

}
else if
{

}
else
{

}*/


/*{
  int price;
  cout<<"enter a price"<<endl;
  cin>>price;
 float discount;

 if(price<1000)
  {
      discount=0.1*price;
      cout<<"you will get 10% discount and the final price of the product="<<price-discount<<endl;
  }
else if(1000<=price<2000)
{
    discount=0.15*price;
   cout<<"you will get 15% discount and the final price of the product="<<price-discount<<endl;
}
else if(price>=2000)
{
    discount=0.20*price;
    cout<<"you will get 20% discount and the final price of the product="<<price-discount<<endl;
}*/

//nested if(else if)
/*if (condition)


{
    if (condition)
    {

    }
    else
    {

    }

}
else
{

}*/


#include<iostream>
using namespace std;
int main()
/*{

int marks;
cout<<"enter a marks"<<endl;
cin>>marks;
if(marks<33)
{
    cout<<"fail"<<endl;
}
else
{
    cout<<"pass"<<endl;
    if(marks>=33&&marks<45)
    {
        cout<<"3rd division"<<endl;
    }
    else if(marks>=45&&marks<60)
    {
        cout<<"2nd division"<<endl;
    }
    else
    {
        cout<<"1st division"<<endl;
    }
}

}*/

/*{
  int password;
  cout<<"enter a password"<<endl;
  cin>>password;
    if(password==2025)//comparision operator
    {
        cout<<"welcome"<<endl;
    }
    else
    {
        cout<<"invalid"<<endl;
    }
}
*/
//nested condition(in a nested condition we use multipel if inside one another)(nested condition is also called inner condition)
//syntex
/*if(condition)
{
if(condition)
{

}
else
{
}
}
else
{
}
*/

/*
{
    int pwd,otp;
    cout<<"enter pwd"<<endl;
    cin>>pwd;
    if(pwd==2025)

    {
        cout<<"enter otp"<<endl;
        cin>>otp;
        if(otp==2026)
        {
            cout<<"you are owner"<<endl;
        }
        else
        {
            cout<<"you are fruwd"<<endl;
        }
    }
    else
    {
        cout<<"invalid"<<endl;
    }
}
*/

/*{
    int adhhar,age;
cout<<"enter your adhhar"<<endl;
cin>>adhhar;
if(adhhar==1234)
{
    cout<<"enter your age"<<endl;
    cin>>age;
    if(age>=18)
    {
        cout<<"you can drive"<<endl;
    }
    else
    {
        cout<<"you are not eligible"<<endl;
    }
}
    else
    {
        cout<<"invalid adhhar no"<<endl;
    }

}*/

//leader(leader condition is also caleed other condition it will exicute the next elseif condition if and only if the previoues condition is false otherwise it will exit from the condition)
/*syntex
if(condition)
{
statement;
}
else if(condition)
{
}
.
.
.
else
{
}
*/

/*
{
int a,b,c;
cout<<"enter three numbera"<<endl;
cin>>a>>b>>c;
if(a>b && a>c)
{
    cout<<"large no="<<a;
}
else if(b>a && b<c)
{
    cout<<"large no="<<b;
}
else
{
    cout<<"large no="<<c;
}
}
*/
//write a program to generet the bill of electricity using following constraints:

/*{
  int unit,bill;
  cout<<"enter a unit"<<endl;
  cin>>unit;
  if (unit>=1 && unit<=50)
  {
     bill=unit*2;
      cout<<bill+(bill*2/100)<<endl;
  }
  else if (unit>=51 && unit<=100)
  {
      bill=unit*3;
      cout<<bill+(bill*2/100)<<endl;
  }
  else if (unit>=101 && unit<=500)
  {
      bill=unit*5;
      cout<<bill+(bill*2/100)<<endl;
  }
  else if (unit>=501 && unit<=1000)
  {
      bill=unit*7;
      cout<<bill+(bill*2/100)<<endl;
  }
  else if (unit>1000)
  {
      bill=unit*10;
      cout<<bill+(bill*2/100)<<endl;
  }
  else
  {
      cout<<"invalid"<<endl;
  }

}*/

{
    int p,c,m,total,percentage;
    cout<<"enter a number"<<endl;
    cin>>p>>c>>m;
    cout<<"total marks="<<p+c+m<<endl;
    percentage=(p+c+m)/3;
    if (percentage>=60 && percentage<=100)
    {
        cout<<"first division"<<endl;
    }
   else if (percentage<=59 && percentage>=50)
    {
        cout<<"second devision"<<endl;

    }
   else if (percentage<=49 && percentage>=35)
    {
        cout<<"third devision"<<endl;
    }
    else
    {
        cout<<"fail"<<endl;
    }

}









