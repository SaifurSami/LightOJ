#include<stdio.h>
#include<math.h>
int main()
{
int n;
scanf("%d",&n);
//printf("%d",n);
int a[6],i,j,x,y;
double t1=0,t2=0,t3=0,s;
double z,p,res;
for(i=1;i<=n;i++)
{
for(j=0;j<6;j++)
{
scanf("%d",&a[j]);
}
x=abs(a[0]-a[2]);
y=abs(a[1]-a[3]);
t1=sqrt((x*x)+(y*y));
t2=t1;
x=abs(a[2]-a[4]);
y=abs(a[3]-a[5]);
t3=sqrt((x*x)+(y*y));
//printf("%lf %lf %lf \n",t1,t2,t3);
s=2*(t1*t1);
//printf("%lf\n",s);
z=1-((t3*t3)/s);
//printf("%lf\n",z);
p=acos(z);
//printf("%lf\n",p);
res=t1*p;
printf("Case %d: %lf\n",i,res);
}
return 0;
}
