#include<stdio.h>
#include <stdbool.h>
//111360235



int days;
float principal, rate, interest, rates;

int main()
{
	while (true)
	{
		printf("Enter the loan principal (-1 to end): ");
		scanf("%f", &principal);

		if (principal == -1)
		{
			break;
		}
		printf("Enter interest rate: ");
		scanf("%f", &rate);
		rates = rate / 100;
		printf("Enter term of the loan in days: ");
		scanf("%d", &days);

		interest = (principal * rates * days) / 365;

		printf("The interest charge is $%.2f\n", interest);
		printf("\n");
	}
	return 0;
}