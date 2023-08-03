#include<iostream>
using namespace std;

int main()
{
    // <--bitwise operator--> 
    /*
    int a,b;
    cin>>a>>b;
    
    cout<<"a&b: "<<(a&b)<<endl;   //AND operator
    cout<<"a|b: "<<(a|b)<<endl;   //OR operator
    cout<<"~a: "<<(~a)<<endl;     //NOT operator
    cout<<"~b: "<<(~b)<<endl;
    cout<<"a^b: "<<(a^b)<<endl;   //XOR operator
    */


   // <--left shift and right shift-->
   /*
   cout<<(13>>1)<<endl;    //right shift(/2)
   cout<<(13>>2)<<endl;

   cout<<(13<<1)<<endl;    //left shift(*2)
   cout<<(13<<2)<<endl; 
   */


   //<--PRE INCREMENT AND POST INCREMENT-->
   /*
      -------------------
      i=i+1  i++ (post increment)
      i=i+1  ++i (pre increment)
      i=i-1  i-- (post decrement)
      i=i-1  --i (pre decrement)
      --------------------
   */

   /*
    int i=4;
    int j=i++;
    cout<<"j:"<<j<<" "<<"i:"<<i;
    */

    /*
    int i=3,j=2;
    cout<<(i+(j++))<<endl;    //5    //j=2
    cout<<(i+(++j))<<endl;    //7    //j=4
    */

    int i = 9;
    cout << (++i) << endl;   //10,i=10
    cout << (i++) << endl;   //10,i=11
    cout << (i--) << endl;   //11,i=10
    cout << (--i) << endl;   //9,i=9
}