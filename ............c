#include<stdio.h>
int main(){
int i,n,factorial=1;
scanf("%d",&n);
if(n>0){
    for(i=1;i<=n;i++){
        factorial=factorial*i;
    }
    printf("factorial is=%d\n",factorial);
}
else{
    printf("invalid");
}

}
