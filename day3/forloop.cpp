#include<iostream>
using namespace std;

int main()
{
    //printing count from 1 to n using for loop
    /*
    int n,i;
    cout<<"Enter n:"<<endl;
    cin>>n;

    cout<<"Printing count from 1 to n using for loop:"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<i<<endl;
    }
    */


 /*
   for(int a=0,b=1 ; a>=0 && b>=1 ; a--,b--)
   {
    cout<<a<<" "<<b<<" "<<endl;
   }
  */



    //printing the sum from 1 to n 
    /*
    int n,i,sum=0;
    cout<<"Enter n:"<<endl;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"SUM:"<<sum<<endl;
    */



    //fibonacci series
    /*
    int n,a=0,b=1,i;
    cout<<"Enter n:"<<endl;
    cin>>n;

    cout<<a<<" "<<b<<" ";
    for(i=1;i<=n-2;i++)
    {
        int num=a+b;
        cout<<a+b<<" ";

        a=b;
        b=num;
    }
    */



   //Prime number
    int n;
    cout<<"Enter n:";
    cin>>n;

    bool isPrime=1;

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            isPrime=0;
            break;
        }
    }

    if(isPrime==0)
    {
        cout<<"Not a Prime Number";
    }
    else{
        cout<<"Is Prime Number";
    }

  /*
   for(int i=0;i<5;i++)
   {
      cout<<"Hi"<<endl;
      cout<<"Hey"<<endl;;
      continue;

      cout<<"Bye"<<endl;
   }
   */
}