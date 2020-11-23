#include <stdio.h>
#include "myMath.h"

double Exponent(int x){
    double e=2.718281828;
    double ans=Power(e,x);
    return ans;
}
double Power(double x,int y){
   if (y==0){
       return 1.0;
   }

   if (y==1){
       return x;
   } else{
       return x*Power(x,y-1);
   }
}
