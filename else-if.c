#include <stdio.h>
int main()
{
 float m1,m2,m3,m4,m5;
 float total,percentage;

 printf("enter the marks of 5 subjects:\n");
 scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
total= m1+m2+m3+m4+m5;
percentage= total/5;

printf("total=%2f\n",total);
printf("percentage=%2f\n",percentage);

if(percentage>=90)
printf("grade=A\n");
else if (percentage>=80)
printf("grade=B\n");
else if (percentage>=70)
printf("grade=C\n");
else if (percentage>=60)
printf("grade=D\n");
else if (percentage>=50)
printf("grade=E\n");

else 
printf("grade=F\n");

return 0 ;
}







