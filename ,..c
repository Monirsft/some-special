#include<stdio.h>
int main(){
float basic,gross,hra,ma;
scanf("%f",&basic);
if(basic<=10000){
    hra=basic*0.20;
    ma=basic*0.15;
}
 else if(basic<=20000){
    hra=basic*0.30;
    ma=basic*0.25;
 }
gross=basic+hra+ma;
printf("gross salary of employee=%.2f\n",gross);




return 0;
}
