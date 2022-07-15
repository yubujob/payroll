/*
project:payroll
name:job ogola
licence:mit
compiler:c89*/

// calculate income including overtime minus tax
# include <stdio.h>
# include <stdlib.h>

// take input from user
int main(void)
{
 // get input from user(name, employee number, tax pin, hours worked)
    char name[20];
    char employee_number[10];
    char tax_pin[10];
    int hours_worked;
    float hourly_rate;
    float income;
    float tax;
    float overtime;
    float total_income;
    float net_income;

    hourly_rate = 1000.00;
    tax = 0.30;
    overtime = 1.5;


    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your employee number: ");
    scanf("%d", &employee_number);
    printf("Enter your tax pin: ");
    scanf("%s", tax_pin);
    printf("Enter your hours worked: ");
    scanf("%d", &hours_worked);

    // create if statement to check if hours worked is greater than 40
    if (hours_worked > 40)
    {
        // calculate income including overtime
        income = (hours_worked - 40) * hourly_rate * overtime;
        // calculate overtime
        overtime = (hours_worked - 40) * hourly_rate;
        // calculate tax
        tax = income * tax;
        // calculate total income
        total_income = income - tax;
        // calculate net income
        net_income = total_income - (total_income * 0.10);
        // print out results
        printf("\n\n");
        printf("Name: %s\n", name);
        printf("Employee number: %d\n", employee_number);
        printf("Tax pin: %s\n", tax_pin);
        printf("Hours worked: %d\n", hours_worked);
        printf("Hourly rate: %.2f\n", hourly_rate);
        printf("Normal Income: %.2f\n", income);
        printf("Tax paid: %.2f\n", tax);
        printf("Overtime: %.2f\n", overtime);
        printf("Total income: %.2f\n", total_income);
        printf("Net income: %.2f\n", net_income);
    }
    else
    {
        // calculate income
        income = hours_worked * hourly_rate;
        // calculate overtime
        overtime = 0;
        // calculate tax
        tax = income * tax;
        // calculate total income
        total_income = income - tax;
        // calculate net income
        net_income = total_income - (total_income * 0.10);
        // print out results
        printf("\n\n");
        printf("Name: %s\n", name);
        printf("Employee number: %d\n", employee_number);
        printf("Tax pin: %s\n", tax_pin);
        printf("Hours worked: %d\n", hours_worked);
        printf("Hourly rate: %.2f\n", hourly_rate);
        printf("Income: %.2f\n", income);
        printf("Tax: %.2f\n", tax);
        printf("Overtime: %.2f\n", overtime);
        printf("Total income: %.2f\n", total_income);
        printf("Net income: %.2f\n", net_income);
    }
}
