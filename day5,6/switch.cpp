#include<iostream>
using namespace std;

int main()
{
    /*
    int num=1;
    char ch='1';

    switch(ch)
    {
        case 1:
        cout<<"One"<<endl;
        break;

        case '1':
        switch(num)
        {
            case 1: cout<<"Value of num is "<<num<<endl;
            break;
        }
        break;

        default: cout<<"Invalid";

    }
    */


     
     //Calculator using switch
     /*
     int a,b;
     char ch;

     cout<<"Enter the value of a and b and the operator between them: "<<endl;
     cin>> a>>ch>>b;

     switch(ch)
     {
        case '+':
        cout<<"The sum of a and b is: "<<a+b<<endl;
        break;
        case '-':
        cout<<"The subtraction of a and b is: "<<a-b<<endl;
        break;
        case '/':
        cout<<"The division of a and b is :"<<a/b<<endl;
        break;
        case '*':
        cout<<"The multiplication of a and b is: "<<a*b<<endl;
        break;
        case '%':
        cout<<"The mod of a and b is :"<<a%b<<endl;
        break;
        default: cout<<"*Enter valid operation*"<<endl;
     }
     */


    //calculating notes using switch
    int n,r100,r50,r20,r10;
    cout<<"Enter the amount: "<<endl;
    cin>>n;

    switch(1)
    {
        case 1:
        r100=n/100;
        n=n%100;
        cout<<"Rupees 100 notes: "<<r100<<endl;
        case 2:
        r50=n/50;
        n=n%50;
        cout<<"Rupees 50 notes: "<<r50<<endl;
        case 3:
        r20=n/20;
        n=n%20;
        cout<<"Rupees 20 notes: "<<r20<<endl;
        case 4:
        r10=n/10;
        n=n%10;
        cout<<"Rupees 10 notes: "<<r10<<endl;
        case 5:
        cout<<"Coins of 1 rupees: "<<n<<endl;
    }
}