#include<iostream>
#include<conio.h>
using namespace std;

class point
{
public:
int x,y;
public:
void get()
{
cout<<"\nEnter Two co-ordinate: \n";
cin>>x>>y;
}
void disp()
{
cout<<"X= "<<x<<"\tY= "<<y;
}
friend point operator-(point &);
};
point operator-(point &t1,point &t2)
{
point z;
z.x=t1.x-t2.x;
z.y=t1.y-t2.y;
return z;
}
int main()
{

point p1,p2,p3;

p1.get();
p2.get();
cout<<"\n\n\tFirst co-ordinate: ";
p1.disp();
cout<<"\n\n\tSecond co-ordinate: ";
p2.disp();
p3=p1-p2;
cout<<"\nDistance between two co-ordinates: ";
p3.disp();
getch();
return 0;
}