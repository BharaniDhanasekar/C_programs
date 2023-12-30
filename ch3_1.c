#include<stdio.h>

int main(){
float sp,cp;

printf("Enter the cost price : ");
scanf("%f",&cp);

printf("Enter the selling price : ");
scanf("%f",&sp);

if(sp>cp){
    printf("Profit");
}
else{
    printf("Loss");
}

return 0;
}
