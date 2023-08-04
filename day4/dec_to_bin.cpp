#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    //Decimal to binary---> For positive numbers
    int n;
    cin>>n;
    float ans=0;
    int i=0;

    while (n != 0)
        {
            int bit = n & 1;
            ans = (bit * pow(10, i)) + ans;
            n = n >> 1;
            i++;
        }
        cout << "the answer in binary is : " << ans;


   //Decimal to binary---> For negative numbers
   /*
   int n;
   cin>>n;

   float ans=0;
   int i=0;

   n=n* -1;
   while(n!=0)
   {
     int bit=n&1;
     ans=((!bit)*pow(10,i))+ans;
     n=n>>1;
     i++;
   }
   int n2=ans+1;

   ans=0;
   i=0;

   while(n2!=0)
   {
      int bit=n2&1;
      ans=(bit*pow(10,i))+ans;
      n2=n2>>1;
      i++;
   }

   cout<<"Answer is:"<<ans<<endl;
   */
   



  //Binary to Decimal
  /*
  int n;
  cin>>n;

  int ans=0,i=0;

  while(n!=0)
  {
    int digit=n%10;
    if(digit==1)
    {
        ans=ans+pow(2,i);
    }
    n=n/10;
    i++;
  }
  cout<<ans<<endl;
  */
}
    
