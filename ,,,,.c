#include<stdio.h>
int main(){
long long int n;
int i;
scanf("%lld",&n);
for(i=0;n!=0;i++){
    n=n/10;
}
printf("total digit=%d\n",i);
}
