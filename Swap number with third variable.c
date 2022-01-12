#include <stdio.h>
int main()
{
    int first, second,sum;  
    printf("Enter the value of first and second: ");//5 and 6
    scanf("%d %d",&first,&second); //5 and 6
    printf("before swapping numbers: %d   %d\n",first,second);  
    sum = first + second;  //sum=5+6=11
    first = sum - first;   //first=11-5=6 
    second = sum - second;  //second=11-6=5
    printf("After swapping:\nfirst :%d\nSecond:%d",first,second);//6 and 5
    return 0;
}


