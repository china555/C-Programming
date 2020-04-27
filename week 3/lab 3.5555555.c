#include <stdio.h>
int main()
{
	int cus_id;
	float unit,paid,charge;
	char str[100];

	printf("Enter customer ID, name and the unit consumed by the customer: ");
	scanf("%d %s %f", &cus_id, &str, &unit);
	printf("Customer ID : %d\nName of the customer : %s\nTotal unit consumed by the customer : %f", cus_id,str,unit);

	if(unit <= 100)
	{
		paid = unit;
	}
	else if (unit >= 100 && unit < 300)
	{
		paid = 100 + (unit*0.75);
		if (paid > 300)
		{
			charge = (paid*15)/100;
			paid = 100 + (unit*0.5) + charge;
		}
	}
	else if (unit >= 300 && unit < 600)
	{
		paid = 100 + (unit*0.5);
		if (paid > 300)
		{
			charge = (paid*15)/100;
			paid = 100 + (unit*0.5) + charge;
		}
	}
	else if (unit > 600)
	{
		paid = 100 + (unit*0.25);
		if(paid > 300)
		{
			charge = (paid*15)/100;
			paid = 100 + (unit*0.5) + charge;
		}
	}
	else
	printf("Invalid Input");

	printf("\n\nTelephone Bill\nCustomer ID NO : %d\nCustomer Name : %s\nUnit Consumed(Mins) : %.2f\nSurchage Amount(15%) : %.2f\nNet Amount Paid : %.2f", cus_id,str,unit,charge,paid);
}
