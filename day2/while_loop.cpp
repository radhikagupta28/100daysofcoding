#include<iostream>
using namespace std;

int main()
{
    //printing numbers from 1 to n
 /* int n;
    cin>>n;

    int i=1;
    while (i<=n)
    {
        cout<<i<<" ";
        i=i+1;
    }    */


    //sum of numbers from 1 to n
   /* int n;
    cin>>n;

    int i=1,sum=0;
    while (i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    cout<<"sum is:"<<sum;
        */

    
    // sum of all even numbers from 1 to n
   /* int n;
    cin>>n;

    int i=1,sum=0;
    while(i<=n)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        i=i+1;
    }
    cout<<"sum of even number is:"<<sum<<endl;
        */

    //fahrenheit to celcius table
  /*  float f;
    int s;
    cout<<"No. of units:";
    cin>>s;

    int i=1;
    while(i<=s)
    {
        cout<<"Temperature in fahrenheit:";
        cin>>f; 
        float c=((f-32)*5)/9;
        cout<<"Temperature in Celcius:"<<c<<"\n";
        i=i+1;
    }
          */

    //whether the no. is prime or not
    int n;
    cin>>n;

    int i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"Not prime for"<<i<<endl;
        }
        else
        cout<<"prime for"<<i<<endl;
        i=i+1;
    }
}