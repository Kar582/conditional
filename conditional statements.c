#include<stdio.h>
int main()
{
 int rollno,marks;
 char name[50];
 printf("Enter name and rollno :\n");
 scanf("%s%d",&name,&rollno);
 printf("Enter marks of student:\n");
 scanf("%d",&marks);
 if(marks>85 && marks<100)
 {
  printf("A Grade");
 }
 else if(marks>=70 && marks<=84)
 {
  printf("B Grade");
 }
 else if(marks>=55 && marks<70)
 {
  printf("C Grade");
 }
 else if(marks>=40 && marks<55)
 {
  printf("D Grade");
 }
 else
 {
  printf("Fail");
 }
 return 0;
} 
