/*
 * write a program to calculate the area of a triangle using the formula
 * at=sqrt(s(s-a)(s-b)(s-c))
 * */
#include<stdio.h>
#include<math.h>
void main()
{
  int a,b,c,s;
  float at;
  printf("Enter the value of s = "); scanf("%d",&s);
  printf("Enter the value of a = "); scanf("%d",&a);
  printf("Enter the value of b = "); scanf("%d",&b);
  printf("Enter the value of c = "); scanf("%d",&c);
  at = sqrt(s*(s-a)*(s-b)*(s-c));
  printf("area of the triangle using formula\n");
  printf("at = sqrt(s*(s-a)*(s-b)*(s-c)) = %.2f\n",at);
}
// to run this code in linux, the command is 
// gcc 1.c -lm | gcc 1.c -o output -lm -> to compile
// ./a.out -> to run
