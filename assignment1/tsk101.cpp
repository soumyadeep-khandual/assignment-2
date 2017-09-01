#include<iostream>
using namespace std;
int integer()
{
int a;
cout<<"enter an integer";
cin>>a;
cout<<"the integer is"<<a<<"\n";
return a;
}
double decimal()
{
double b;
cout<<"enter an integer"<<"\n";
cin>>b;
cout<<"the integer is"<<b<<"\n";
return b;
}
bool torf()
{
cout<<boolalpha;
bool c;
cout<<" 2 an even number (1=true/0=false)\n";
cin>>c;
cout<<"the statement is "<<c<<"\n";
return c;
}
char yos()
{
char d;
cout<<"enter an alphabet\n";
cin>>d;
cout<<"the alphabet is"<<d<<"\n";
return d;
}
int main()
{
yos();
integer();
decimal();
torf();
return 0;
}
