#include<iostream>
using namespace std;

int main()
{
    int a=228;
    cout<<a<< endl;
    
    char b = 'r';
    cout<<b << endl;

    bool bl =false;
    cout<< bl << endl;

    float f = 2.8;
    cout<< f << endl;

    double d = 3.56;
    cout<< d << endl;



    //Sizeof
    int size=sizeof(a);
    cout<<"Size of int is:"<<size<< endl;

    cout<<"Size of char is:"<<sizeof(b)<< endl;
    cout<<"Size of bool is:"<<sizeof(bl)<< endl;
    cout<<"Size of float is:"<<sizeof(f)<< endl;
    cout<<"Size of double is:"<<sizeof(d)<< endl;
    


    //typeCasting
    int y= 'A';
    cout<< y << endl;

    char u=98;
    cout<< u<< endl;


    
}