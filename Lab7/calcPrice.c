#include <stdio.h>

int main(void)
{
int Item,QTY,month,day,year;
float price,Total;
printf("Enter item number:");
scanf("%d",&Item);
printf("Enter unit price:");
scanf("%f",&price);
printf("Enter quantity:");
scanf("%d",&QTY);
printf("Enter purchase date (mm/dd/yyyy):");
scanf("%d/%d/%d",&month,&day,&year);
Total = price*QTY;
printf("Item\tUnit Price\tQTY\tPurchase Date\tTotal Amount\n");
printf("%-d\t$%9.2f\t%-d\t%-d/%-d/%-d\t$%10.2f\n",Item,price,QTY,month,day,year,Total);
return 0;
}
