 //ternary operator x as a if else condition if the condition is true the part of quetion mark will bw return otherwise the colon will be return or print
//ternary operator
//syntex:
//(condition)?ontrue:onfalse
/*#include<iostream>
using namespace std;
int main()
{
    int age;
    int r;
    cout<<"enter ur age\n";
    cin>>age;
    r=(age>=18)?100:0;
    cout<<"result="<<r<<"\n";
    (age>=18)?cout<<"welcom":cout<<"bhidcum";
}*/
//write a program to print even and odd number

/*#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter a number"<<endl;
    cin>>number;
    (number%2==0)?cout<<"even number":cout<<"odd number";
}*/

//write a program which return absolute value

#include<iostream>
using namespace std;
int main()
{
    int number;

    cout<<"enter a number"<<endl;
    cin>>number;
    (number>=0)?cout<<number:cout<<-number;
}
