#include<stdio.h>
int main(){
    int cus,units,n;
    int total=0,max=0;
    for(int i=1;i<=20;i++){
        printf("\n \nenter the customer id:");
        scanf("%d",&cus);
        if(cus==1||cus<=20){
            printf("valid customer");
            printf("\nEnter number of units:");
            scanf("%d",&units);

            if(units<=100){
            n=units*2;
             }
             else if(units>100 && units<=200){
            n=(100*2)+(units-100)*3;
            }
             else{
            n=(100*2)+(100*3)+(units-200)*5;
            }
            printf("\ntotal bill of the customer%d:%d",cus,n);
            total=total+n;
            if(n>max){
            max=n;
            }
        }else{
            printf("invalid customer");
        }    
        
    }
    printf("\ntotal revenue:%d",total);
    printf("\nmaximum bill:%d",max);
    return 0;
}
