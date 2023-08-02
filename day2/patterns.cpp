#include<iostream>
using namespace std;

int main()
{
    //pattern-1
    /*
         ****
         ****
         ****
         ****
    */
  /* int n;
   cin>>n;

   int i=1;
   while(i<=n)
   {
    int j=1;
    while(j<=n)
    {
        cout<<"*";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
   }
      */



    //Pattern-2
    /*
          1111
          2222
          3333
          4444
    */
 /*  int n;
   cin>>n;

   int i=1;
   while (i<=n)
   {
        int j=1;
        while(j<=n)
        {
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
   }
       */



    //Pattern-3
    /*
         1234
         1234
         1234
         1234  
    */    
 /*  int n;
   cin>>n;

   int i=1;
   while(i<=n)
   {
    int j=1;
    while(j<=n)
    {
        cout<<j;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
   }
     */



    //Pattern-4
    /*
         4321
         4321
         4321
         4321
    */
  /* int n;
   cin>>n;

   int i=1;
   while(i<=n)
   {
       int j=1;
       while(j<=n)
       {
           cout<<n-j+1;
           j=j+1;
       }
       cout<<endl;
       i=i+1;
   }
        */


    
    //Pattern-5
    /*
          123
          456
          789
    */
 /*  int n;
   cin>>n;

   int i=1;
   int count=1;
   while(i<=n)
   {
       int j=1;
       while(j<=n)
       {
        cout<<count<<" ";
        count=count+1;
        j=j+1;
       }
       cout<<endl;
       i=i+1;
   }
          */



    //Pattern-6
    /*
         *
         **
         ***
         ****
    */
 /*  int n;
   cin>>n;

   int i=1;
   while(i<=n)
   {
       int j=1;
       while(j<=i)
       {
           cout<<("*");
           j=j+1;
       }
       cout<<endl;
       i=i+1;
   }
       */



    //Pattern-7
    /*
        1
        22
        333
        4444
    */
 /*  int n;
   cin>>n;

   int i=1;
   while(i<=n)
   {
       int j=1;
       while(j<=i)
       {
           cout<<i;
           j=j+1;
       }
       cout<<endl;
       i=i+1;
   }
         */
    


    //Pattern-8
    /*
          1
          23
          456
          78910
    */
 /*  int n;
   cin>>n;

   int i=1;
   int count=1;
   while(i<=n)
   {
       int j=1;
       while(j<=i)
       {
           cout<<count;
           count=count+1;
           j=j+1;
       }
       cout<<endl;
       i=i+1;
   }
          */



    //Pattern-9
    /*
        1
        23
        345
        4567
    */
 /*  int n;
   cin>>n;

   int i=1;
   while(i<=n)
   {
        int j=1;
        while(j<=i)
        {
            cout<<i+j-1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
   }
        */



    //Pattern-10
    /*
         1
         21
         321
         4321
    */
 /*  int n;
   cin>>n;

   int i=1;
   while(i<=n)
   {
      int j=1;
      while(j<=i)
      {
         cout<<i-j+1;
         j=j+1;
      }
      cout<<endl;
      i=i+1;
   }
          */
    


    //Pattern-11
    /*
         AAA
         BBB
         CCC
    */
 /*  int n;
   cin>>n;

   int i=1;
   while(i<=n)
   {
      int j=1;
      while(j<=n)
      {
        char ch='A'+i-1;
        cout<<ch;
        j=j+1;
      }
      cout<<endl;
      i=i+1;
   }
        */



    //Pattern-12
    /*
         ABC
         ABC
         ABC
    */
 /*   int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char ch='A'+j-1;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
        */



    //Pattern-13
    /*
        ABC
        DEF
        GHI
    */
 /*  int n;
   cin>>n;

   int i=1;
   int count=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char ch='A'+count-1;
            cout<<ch;
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
         */



    //Pattern-14
    /*
        ABC
        BCD
        CDE
    */
 /*  int n;
   cin>>n;

   int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char ch='A'+i+j-2;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
         */



    //Pattern-15
    /*
        A
        BB
        CCC
    */
 /*  int n;
   cin>>n;

   int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            char ch='A'+i-1;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
         */



    //Pattern-16
    /*
         A
         BC
         DEF
         GHIJ
    */
 /*  int n;
   cin>>n;

   int i=1;
   int count=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            char ch='A'+count-1;
            cout<<ch;
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
        */



    //Pattern-17
    /*
        A
        BC
        CDE
        DEFG
    */
 /*  int n;
   cin>>n;

   int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            char ch='A'+i+j-2;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
         */



    //Pattern-18
    /*
         D
         CD
         BCD
         ABCD
    */
 /*  int n;
   cin>>n;

   int i=1;
    while(i<=n)
    {
        int j=1;
        char ch='A'+n-i;
        while(j<=i)
        {
            cout<<ch;
            j=j+1;
            ch=ch+1;
        }
        cout<<endl;
        i=i+1;
    }
        */



     //Pattern-19
     /*
          ---*
          --**
          -***
          ****
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
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
         */



    //Pattern-20
    /*
        ****
        ***
        **
        *
    */
 /*  int n;
   cin>>n;

   int i=1;
   while(i<=n)
   {
      int j=1;
      while(j<=n-i+1)
      {
        cout<<"*";
        j=j+1;
      }
      cout<<endl;
      i=i+1;
   }
        */



    //Pattern-21
    /*
        ****
        -***
        --**
        ---*
    */
 /*  int n;
   cin>>n;

   int i=1;
    while(i<=n)
    {
        int space=i-1;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=n-i+1)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
         */



    //Pattern-22
    /*
        1111
         222
          33
          4
    */
 /*  int n;
   cin>>n;

   int i=1;
    while(i<=n)
    {
        int space=i-1;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=n-i+1)
        {
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
         */



    //Pattern-23
    /*
         ---1
         --22
         -333
         4444
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
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
          */

}