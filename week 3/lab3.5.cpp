#include <stdio.h>
#include <math.h>

int main(){
	int ID, min_consumed;
	float pay_amount, charge = 0;
	char name[100];

	printf("Input Customer ID: ");
	scanf("%d", &ID);
	printf("Input the name of the customer: ");
	scanf("%s", &name);
	printf("Input the unit(mins) consumed by the customer: ");
	scanf("%d", &min_consumed);

	if(min_consumed <= 100 && min_consumed >= 0){
        pay_amount = min_consumed;
	}else if(min_consumed <= 300 && min_consumed >= 0){
	    pay_amount = 100 + (min_consumed - 100) * 0.75;
	}else if(min_consumed <= 600 && min_consumed >= 0){
	    pay_amount = 250 + (min_consumed - 300) * 0.5;
	}else if(min_consumed > 600 && min_consumed >= 0){
	    pay_amount = 400 + (min_consumed - 600) * 0.25;
	}else{
	    printf("\nERROR Please Run The Program Again\n");

	}

	if (pay_amount >= 300){
        charge = pay_amount * 0.15;
	}

	printf("Telephone Bill\n");
	printf("Customer ID NO      : %d\n", ID);
	printf("Customer Name       : %s\n", name);
	printf("Unit consumed (mins): %d\n", min_consumed);
	printf("Surcharge Amount(15): %.2f\n", charge);
	printf("Net Amount Paid     : %.2f\n", pay_amount + charge);
}
