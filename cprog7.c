#include<stdio.h>
int main()
{
char sn[50],rn[10];
int age;
double h,w,bmi;
printf("enter student's name:");
scanf("%s",sn);
printf("enter student's roll no.:");
scanf("%s",rn);
printf("enter student's age:");
scanf("%d",&age);
printf("enter student's height in meter:");
scanf("%lf",&h);
printf("enter student's weight in kg:");
scanf("%lf",&w);
printf("----------STUDENT PROFILE-----------\n");
printf("Name:%s\n",sn);
printf("Roll no.:%s\n",rn);
printf("Age:%d\n",age);
printf("Height:%lf",h);
printf("m\n");
printf("weight:%lf",w);
printf("kg\n");
bmi=w/(h*h);
printf("BMI:%lf\n",bmi);
return 0;
}