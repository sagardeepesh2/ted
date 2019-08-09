#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{clrscr();
float a,b,c,dis,r1,r2;
cout<<"\n\tEnter the a,b and c for the expression a*x^2+b*x+c ";
cin>>a>>b>>c;
dis=(b*b)-(4*a*c);
if(dis==0)
{
 cout<<"\n\tThe roots are real and equal";
 r1=(-1*b)/(2*a);
 cout<<"\n\tThe roots are "<<r1<<" and "<<r1;
}
else if(dis>0)
{
 cout<<"\n\tThe roots are real and unequal";
 r1=((-1*b)+sqrt(dis))/(2*a);
 r2=((-1*b)-sqrt(dis))/(2*a);
 cout<<"\n\tThe roots are "<<r1<<" and "<<r2;
}
else if(dis<0)
{dis=(dis*-1);
 float img;
 cout<<"\n\tThe root are unreal and unequal";
 r1=(-1*b)/(2*a);
 r2=(-1*b)/(2*a);
 img=(sqrt(dis))/(2*a);
 cout<<"\n\tThe roots are "<<r1<<" + "<<img<<"i" <<" and "<<r2<<" - "<<img<<"i";
}
else
{
cout<<"\n\t wrong inputs";
}
getch();
}
