#include<stdio.h>
int main()
{
    int a,b,res;
    printf("Enter the value of a and b");
    scanf("%d %d",&a,&b);
    printf("a is %d and b is %d\n",a,b);
    res=a+b;
    printf("The sum of a and b is %d\n",res);
    res=a-b;
    printf("The difference of a and b is %d\n",res);
    res=a*b;
    printf("The product of a and b is %d\n",res);
    res=a/b;
    printf("The quotient of a and b is %d\n",res);
    res=a%b;
    printf("The remainder of a and b is %d\n",res); 
    return 0;
}