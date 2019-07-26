#include<stdio.h>
#include<math.h>
int main()
{
 double  pi=3.14159265359;
int a,i;
scanf("%d",&a);
double n[a],squ,cir,t1=0,res;
for(i=0;i<a;i++)
{
scanf("%lf",&n[i]);
t1=n[i]*2;
squ=t1*t1;
cir=pi*(n[i]*n[i]);
res=squ-cir;
printf("Case %d: %.2lf\n",(i+1),res);
}



return 0;
}
