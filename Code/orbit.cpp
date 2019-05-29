#include<math.h>
#include"const.h"
#include<stdlib.h>
#include<iostream>
using namespace std;

int ElemToCor(long double* elm,long double t,long double* rasd,long double* vasd)
{
long double a[3],b[3];
long double epo=ep2000;

long double sa=sqrtl(elm[0]);
long double m1=elm[5]+t/elm[0]/sa;
long double u=m1;
long double su=sinl(u),cu=cosl(u);
long double c=elm[1]*su;
   while(fabsl(c)>1.0e-14)
   {u=u+c/(1.0-elm[1]*cu);
   su=sinl(u);cu=cosl(u);
   c=m1-u+elm[1]*su;
   }
long double bb=elm[0]*sqrtl(1.0-elm[1]*elm[1]);
long double sw=sinl(elm[2]),cw=cosl(elm[2]);
long double sn=sinl(elm[3]),cn=cosl(elm[3]);
long double si=sinl(elm[4]),ci=cosl(elm[4]);
long double sep=sinl(epo),cep=cosl(epo);



long double s=cw*sn+sw*cn*ci;
a[0]=elm[0]*(cw*cn-sw*sn*ci);
a[1]=elm[0]*(s*cep-sw*si*sep);
a[2]=elm[0]*(s*sep+sw*si*cep);

s=-sw*sn+cw*cn*ci;
b[0]=-bb*(sw*cn+cw*sn*ci);
b[1]=bb*(s*cep-cw*si*sep);
b[2]=bb*(s*sep+cw*si*cep);

su=sinl(u);cu=cosl(u);
long double ce=cu-elm[1];
for(int i=0;i<3;i++){rasd[i]=a[i]*ce+b[i]*su;}

//long double rmd=sqrtl(rasd[0]*rasd[0]+rasd[1]*rasd[1]+rasd[2]*rasd[2]);
//elm[8]=rmd;
//for(int i=0;i<3;i++){vasd[i]=a[i]*(-su/rmd/sa)+b[i]*(cu/rmd/sa);}

return 0;
}
