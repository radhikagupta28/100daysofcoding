#include<iostream>
using namespace std;

//--->function for power
/*
int pow(int a,int b)
{
    int ans=1;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    return ans;
}

int main()
{
    int a,b;
    
    for(int x=1;x<=4;x++)
    {
        cout<<"Enter a and b:";
        cin>>a>>b;
        int answer=pow(a,b);
        cout<<"Answer is:"<<answer<<endl;
    }    
    return 0;

}

*/



//---->Check even or odd
/*
int isevodd(int a)
{
    if(a==0)
    {
        cout<<"Neither odd nor even";
    }
    else if(a%2==0)
    {
        cout<< a<< " is Even"<<endl;
    }
    else
    {
        cout<< a<< " is Odd"<<endl;
    }
}
int main()
{
    int a;

    for(int i=1;i<=3;i++)
    {
        cout<<"enter number:";
        cin>>a;

        isevodd(a);
    }
    

}
*/



//---->ncr program
/*
int fact(int n)
{
    int fac=1;
    for(int i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    return fac;
}
int ncr(int n,int r)
{
    int num,den;
    num=fact(n);
    den=fact(r)*fact(n-r);
    return num/den;
}
int main()
{
    int n,r;
    cin >> n>>r;
    
    ncr(n,r);
    cout<<"Answer is:"<<ncr(n,r);

}
*/



//--->Prime or not
/*
bool isprime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;

}
int main()
{
    int n;
    cin>>n;

    if(isprime(n))
    {
        cout<<n<<" is a prime no.";
    }
    else
    cout<<n<<" is not a prime no.";
}
*/


//-->For AP
/*
int ap(int n)
{
    int AP=(3*n+7);
    return AP;
}
int main()
{
    int n;
    cout<<"Enter num:"<<endl;
    cin>>n;

    ap(n);
    cout<<ap(n);
}
*/


//--->No. of set bits
int bit(int a)
{
    int count=0;
    while(a!=0)
    {
        int b=a&1;
        if(b==1)
        {
            count++;
        }
        a=a>>1;
    }
    return count;
}
int main()
{
    int a,b;
    cin>>a>>b;

    bit(a);
    cout<<"No. of set bits in a: "<<bit(a)<<"\nNo. of set bits in b: "<<bit(b)<<endl;
    cout<<"Total no. of set bits: "<<bit(a)+bit(b)<<endl;
} 

