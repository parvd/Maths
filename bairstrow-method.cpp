#include<bits/stdc++.h>
#define ESP 0.001
#define F(x) (x)*(x)*(x) + (x) + 10
#define a3 1
#define a2 0
#define a1 1
#define a0 10
#define c3
int main()
{
  double u,v,u1,v1,u2,v2,b3,b2,p,b1,b0,c2,c1,c0,U,V;
  int i;
  i=1;
  float c3=0;
  cout<<"Enter the value of u: ";
  cin>>u;
  cout<<"Enter the value of v: ";
  cin>>v;
  b3=a3;
  b2=a2+u*b3;
  b1=a1+u*b2+v*b3;
  b0=a0+u*b1+v*b2;
  c2=b3;
  c1=b2+u*c2+v*c3;
  c0=b1+u*c1+v*c2;
  p=c1*c1-c0*c2;
  U=((-(b1*c1-b0*c2))/(p));
  V=((-(b0*c1-c0*b1))/(p));
  u1=u+U;
  v1=v+V;
  cout<<"\n b0 ="<<b0;
  cout<<"\n b1 ="<<b1;
  cout<<"\n b2 ="<<b2;
  cout<<"\n b3 ="<<b3;
  cout<<"\n c0 ="<<c0;
  cout<<"\n c1 ="<<c1;
  cout<<"\n c2 ="<<c2;
  cout<<"\n c3 ="<<c3;
  cout<<"\n * * * u =  * * *"<<u1;
  cout<<"\n * * * v =  * * *"<<v1;

  do
  {
   u=u1;
   v=v1;
   b3=a3;
   b2=a2+u*b3;
   b1=a1+u*b2+v*b3;
   b0=a0+u*b1+v*b2;
   c2=b3;
   c1=b2+u*c2+v*c3;
   c0=b1+u*c1+v*c2;
   p=c1*c1-c0*c2;
   U=((-(b1*c1-b0*c2))/(p));
   V=((-(b0*c1-c0*b1))/(p));
   u2=u+U;
   v2=v+V;
   cout<<"\n\n b0 = "<<b0;
   cout<<"\n\n b1 = "<<b1;
   cout<<"\n\n b2 = "<<b2;
   cout<<"\n\n b3 = "<<b3;
   cout<<"\n\n c0 = "<<c0;
   cout<<"\n\n c1 = "<<c1;
   cout<<"\n\n c2 = "<<c2;
   cout<<"\n\n c3 = "<<c3;
   cout<<"\n\n  u =  "<<u2;
   cout<<"\n\n  v =  "<<v2;

   if(fabs(u1 - u2) < ESP && fabs(v1-v2) < ESP)
   {
    cout<<"\n\nREAL ROOT ="<<u2;
    cout<<"\n\nREAL ROOT ="<<v2;
    i=0;
   }
   else
   {
     u1 = u2;
     v1 = v2;
   }
  }while(i!=0);

}
