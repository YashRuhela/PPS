/*
 * basic salary of an employee is input through the keyboard.
 * The DA is 25% of the basic salary while HRA is 15% of the salary.
 * provident fund is deducted at the rate of 10% of the gross salary
 * (BS+DA+HRA).
 * Program to calculate net salary.)*/
#include<stdio.h>
void main()
{
  float bs,da,hra,gross,pf,net;
  printf("Enter basic salary of the Employee : "); scanf("%f",&bs);
  da = 0.25f * bs;
  hra = 0.15f * bs;
  gross = bs+hra+da;
  pf = 0.10 * gross;
  net = bs - pf;
  printf("DA = %.2f\nHRA = %.2f\nGROSS = %.2f\nPF = %.2f\n",da,hra,gross,pf);
  printf("Net salary = %.2f",net);
}
