#include<stdio.h>
int main(){
int i,count=5,num;
scanf("%d",&num);
for(i=2;i<num;i++){
    if(num%i==0){
        //count=10;
        break;
    }

}
if(count==5){
    printf("%d is prime",num);
}
else{
  printf("%d is not prime",num);
}


}
