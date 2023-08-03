#include<iostream>
using namespace std;

int main()
{
    //Pattern-24
    /*
        1234
        -234
        --34
        ---4
    */
 /*  int n;
   cin>>n;

   int i=1;
   while(i<=n)
   {
    int j=1;
    while(j<=n)
    {
        if(j>=i)
        {
            cout<<j;
        }
        else
        {
            cout<<" ";
        }
        j=j+1;
    }
    cout<<endl;
    i=i+1;
   }
        */



    //Pattern-25
    /*
        ---1
        --23
        -456
        78910
    */
 /*  int n;
   cin>>n;

   int i=1;
   int c=1;
   while(i<=n)
   {
     int j=1;
     while(j<=n)
     {
        if(j>=n-i+1)
        {
            cout<<c;
            c=c+1;
        }
        else
        {
            cout<<" ";
        }
        j=j+1;
     }
     cout<<endl;
     i=i+1;
   }
        */



    //Pattern-26
    /*
           1
          121
         12321
        1234321
    */    
 /*  int n;
   cin>>n;

   int i=1;
   while(i<=n)
   {
       int space=n-i;
       while(space)
       {
         cout<<" ";
         space=space-1;
       }
       int j=1;
       while(j<=i)
       {
         cout<<j;
         j=j+1;
       }
       int s=i-1;
       while(s)
       {
         cout<<s;
         s=s-1;
       }
       cout<<endl;
       i=i+1;
   }
        */



    //Pattern-27
    /*
       1234554321
       1234**4321
       123****321
       12******21
       1********1
    */
   int n;
   cin>>n;

   int i=1;
   while(i<=n)
   {
      int j=1;
      while(j<=n-i+1)
      {
        cout<<j;
        j=j+1;
      }
      int s1=i-1;
      while(s1)
      {
         cout<<"*";
         s1=s1-1;
      }
      int s2=i-1;
      while(s2)
      {
        cout<<"*";
        s2=s2-1;
      }
      int m=n-i+1;
      while(m)
      {
        cout<<m;
        m=m-1;
      }
      cout<<endl;
      i=i+1;
   }    
}