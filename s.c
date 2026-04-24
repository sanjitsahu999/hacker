#include<stdio.h>
int main(){
    int n;
printf("enter the marsk");
scanf("%d", &n);
if(n < 0 || n >100)
    printf("invaild marsk");
else if(n>=90)
    printf("toper");
else if(n>=60)
    printf("first");
else if(n>=45)
    printf("second");
else if(n>=30)
    printf("third");
else
    printf("fail");

    return 0;
}