#include <stdio.h>

int main(){
    int a1,a2,a3,a4,a5,t;
    float A,p;

    printf("enter the marks of five subjects");
    scanf("%d,%d,%d,%d,%d",&a1,&a2,&a3,&a4,&a5);
    t=a1+a2+a3+a4+a5;
    A=t/5;
    p=t*100/500;
    printf("the total,avg,per:%d,%.2f,%.2f%",t,A,p);
    return 0;
}
