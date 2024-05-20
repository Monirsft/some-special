#include<stdio.h>
#include<limits.h>
int main(){

int i,n,a[1000],max1,max2;
scanf("%d",&n);
int size=sizeof(a)/sizeof(a[0]);
max1=max2=INT_MIN;
for(i=0;i<n;i++){
    scanf("%d",&a[i]);

}

for(i=0;i<n;i++){
    if(a[i]>max1){
       max2=max1;
       max1=a[i];
    }
    else if(a[i]<max1&&a[i]>max2){
       max2=a[i];
    }
}
printf("max1 of array=%d\n",max1);
printf("max2 of array=%d\n",max2);
}
