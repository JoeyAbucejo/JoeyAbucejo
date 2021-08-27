#include <stdio.h>
#include <string.h>
void main()
{
   int CustomID, ConUnit;
   float chg, surchg=0, gramt,netamt;

   printf("Input Customer ID :");
   scanf("%d",&CustomID);
   printf("Input the unit consumed by the customer : ");
   scanf("%d",&ConUnit);
   if (ConUnit > 200)
	chg = 1.50;
	else if (ConUnit>=250 && ConUnit<400)
		chg = 1.60;
	else if (ConUnit>=450 && ConUnit<600)
		chg = 1.85;
   else (ConUnit>600);
	chg = 2.00;
   gramt = ConUnit*chg;
   if (gramt>400)
	surchg = gramt*10/100.0;
   netamt = gramt+surchg;
   if (netamt  < 100)
	netamt =100;
   printf("\n[Electricity Bill]\n");
   printf("Customer ID#                       :%d\n",CustomID);
   printf("unit Consumed                      :%d\n",ConUnit);
   printf("Unit Charges @P%4.2f  per unit     :%8.2f\n",chg,gramt);
   printf("Surchage Amount                    :%8.2f\n",surchg);
   printf("Total Customer Bill                :%8.2f\n",netamt);
}

