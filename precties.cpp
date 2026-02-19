#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number" << endl;
    cin >> number;
    int k=number;
      int count=0;
      int sum=0;
      while(number>=1)
      {
          if(k%number==0)
          {
              cout<<number<<endl;
            count=count+1;
          }

          number--;
      }
      cout<<"total factor="<<count<<endl;
     cout<<"sum"<<sum<<endl;
     if(sum==number)
     {
         cout<<"perfect number"<<endl;
     }
     else
     {
         cout<<"not perfect number"<<endl;
     }


}



