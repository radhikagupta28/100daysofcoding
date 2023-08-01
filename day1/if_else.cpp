#include<iostream>
using namespace std;

int main()
{
   /* int n;
    cin>>n; 
    cout<<"Value of n is:"<<n<<endl;

    if(n>0)
    {
        cout<<"n is positive";
    }
    else
    cout<<"n is negative"; */

   /* int a,b;
    cin>>a>>b;

    if(a>b)
    {
        cout<<a;
    }
    else
    {
        cout<<b;
    }       */


  /*  int n;
    cout<<"Enter number:"<<endl;
    cin>>n;

    if(n>0)
    {
        cout<< n <<" is positive"<<endl;
    }
    else if(n<0)
    {
        cout<< n <<" is negative"<<endl;
    }
    else
    {
        cout<< n <<" is zero"<<endl;
    }   */


    char ch;
    cout<<"Enter the character:";
    cin>>ch;

    if(ch>=97&&ch<=122)
    {
        cout<<ch<<" is lower case"<<endl;
    }
    else if(ch>=65&&ch<=90)
    {
        cout<<ch<<" is upper case"<<endl;
    }
    else if (ch>=48&&ch<=57)
    {
        cout<<ch<<" is numeric"<<endl;
    }
    

    
}