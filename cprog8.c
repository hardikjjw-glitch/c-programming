#include <stdio.h>
int main()
{
char cn[50],pn[50];
int qt;
double price;
printf("enter the name of customer:");
scanf("%s",cn);
printf("enter the product name:");
scanf("%s",pn);
printf("enter the quantity:");
scanf("%d",&qt);
printf("enter the price of the product:");
scanf("%lf",&price);
double total=qt*price;
double dis=total*(5.0/100.0);
double dt=total-dis;
double gst=dt*(18.0/100.0);
double nt=dt+gst;
printf("**********SHOPPING BILL**********\n");
printf("Customer Name:%s\n",cn);
printf("Product Name:%s\n",pn);
printf("Quantity:%d\n",qt);
printf("Price/Unit:%lf\n",price);
printf("\n");
printf("Total Amount:%lf\n",total);
printf("Discount:%lf\n",dis);
printf("GST:%lf\n",gst);
printf("\n");
printf("Net Amount%lf\n",nt);
return 0;
}
