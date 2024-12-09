#include <stdio.h> #include <time.h>
int main() { int birth_day, birth_month, birth_year;
time_t t = time(NULL);
struct tm current_time = *localtime(&t);
int current_day = current_time.tm_mday; int current_month = current_time.tm_mon + 1; 
int current_year = current_time.tm_year + 1900;
printf("Enter your birthdate (day month year): ");
scanf("%d %d %d", &birth_day, &birth_month, &birth_year);
int age = current_year - birth_year;
if (birth_month > current_month || (birth_month == current_month && birth_day > current_day)) {
age--; }
if (age >= 18) {
printf("You are eligible to vote.\n");
} else { printf("You are not eligible to vote.\n");
}
return 0;
}
