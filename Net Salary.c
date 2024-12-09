#include <stdio.h>
int main()
{ float basic_salary, hra, da, gross_salary, deductions, net_salary; 
printf("Enter basic salary: "); scanf("%f", &basic_salary); 
if (basic_salary < 0) { printf("Error: Basic salary cannot be negative.\n");
return 1;
} hra = basic_salary * 0.20; da = basic_salary * 0.10; gross_salary = basic_salary + hra + da; printf("Enter deductions: "); 
scanf("%f", &deductions); if (deductions < 0) { printf("Error: Deductions cannot be negative.\n");
return 1;
} net_salary = gross_salary - deductions;
printf("Net Salary: %.2f\n", net_salary);
return 0; }
