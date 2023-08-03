#include<iostream>
using namespace std;

int main()
{
            //  *** Scope of Variable *** //      
    int a=3;
    cout<< a<< endl;

    if(true)
    {
        int a=5;
        cout<<a<<endl;
    }

    cout<<a<<endl;

}