#include <iostream>
using namespace std;
class calc
{ 
public:
int x,y,z;
char ch;
void getdata()
{
cout<<"\nenter two numbers\n";
cin>>a>>b;
}
void fn()
{
cout<<"\n Enter your choice\n";
cout<<"+ \n - \n * \n / \n";
cin>>ch;
switch (ch)
{
case '+': cout<<x+y;break;
case '-': cout<<x-y;break;
case '*': cout<<x*y;break;
case '/': cout<<x/y;break;
default : cout<<"wrong choice";break;
}
}

}
int main()
{
calc a;
a.getdata();
a.fn();
return 0;
}