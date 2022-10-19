#include <stdio.h> 
//111360235


int main()
{
	int Mode;

	double sum_counter;
	double pay;
	double totalPay = 0;

	int countManagers = 0;
	int countHourlyWorkers = 0;
	int countCommissionWorkers = 0;
	int countPieceworkers = 0;

	double salary;
	double hourlyRate;
	double hoursWorked;
	double overtimeHours;
	double grossWeeklySales;
	double numberPieces;
	double wagePerPiece;



	do
	{
		printf("%s\n", "-----------------------------");
		puts("Select type of Employee from menu");
		puts("1. Manager/Salary");
		puts("2. Hourly Worker");
		puts("3. Commission Worker");
		puts("4. Pieceworker");
		printf("%s", "Enter paycode (-1 to end): ");
		scanf_s("%d", &Mode);
		printf("%s", "-----------------------------");
		switch (Mode)
		{
			
		case 1:
			
			pay = salary = 0;
		
			puts("");
			puts("Manager selected.");
			printf("%s", "Enter the yearly salary: $");

			scanf_s("%lf", &salary);
			pay = salary / 52;
			printf("Manager's weekly pay is $%.2lf", pay);
			printf("\n%s", "-----------------------------");

			countManagers++;
			totalPay += pay;
			break;

			
		case 2:
			
			pay = hourlyRate = hoursWorked = overtimeHours = 0;
			
			puts("");
			puts("Hourly worker selected.");
			printf("%s", "Enter the hourly rate: $");
			scanf_s("%lf", &hourlyRate);
			printf("%s", "Enter the total hours worked: ");
			scanf_s("%lf", &hoursWorked);

			
			if (hoursWorked > 40)
			{
				overtimeHours = hoursWorked - 40;
				hoursWorked = 40;

			}
			pay = (hourlyRate * hoursWorked) + (hourlyRate * overtimeHours * 1.5);
			

			printf("Worker's pay this week is $%.2lf", pay);
			printf("\n%s", "-----------------------------");

			
			countHourlyWorkers++; 
			totalPay += pay; 

			
		case 3:
			
			pay = grossWeeklySales = 0;

			
			puts("");
			puts("Commission worker selected.");
			printf("%s", "Enter the gross weekly sales: $");
			scanf_s("%lf", &grossWeeklySales);

			
			pay = 250 + (grossWeeklySales *0.057);
			printf("Worker's pay this week is $%.2lf", pay);
			printf("\n%s", "------------------------------");

			
			countCommissionWorkers++;
			totalPay += pay;
			break;

			
		case 4:
			
			pay = numberPieces = wagePerPiece = 0;

			
			puts("");
			puts("Pieceworker selected.");
			printf("%s", "Enter the number of pieces: ");
			scanf_s("%lf", &numberPieces);
			printf("%s", "Enter the wage per piece: $");
			scanf_s("%lf", &wagePerPiece);

			
			pay = numberPieces * wagePerPiece;
			printf("Worker's pay this week is $%.2lf", pay);
			printf("\n");

			
			countPieceworkers++;
			totalPay += pay;
			break;

		case -1:
			break;

		default:
			puts("Invalid Mode.");
			puts("please enter new Mode Code");
			break;
		}
	} while (Mode != -1);

	
	sum_counter = countManagers + countHourlyWorkers + countCommissionWorkers + countPieceworkers;

	puts("");
	printf("Number of Employees:%22d\n", sum_counter);
	printf("Total number of managers paid:%12d\n", countManagers);
	printf("Total number of hourly workers paid:%6d\n", countHourlyWorkers);
	printf("Total number of commission workers paid:%2d\n", countCommissionWorkers);
	printf("Total number of pieceworkers paid:%8d\n", countPieceworkers);
	printf("Total value paid:\t\t\t$%.2lf\n", totalPay);
	return 0;
}