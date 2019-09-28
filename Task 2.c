#include<stdio.h>

void main()
{
 float celsius, fahrenheit,ch;
 printf("Enter 1 to convert Celsius to Farenheit and 2 for vice-versa: ");
 scanf("%d",&ch);
 if(ch==1)
 	{
	 printf("\n Enter Temp in Fahrenheit : ");
 	 scanf("%f", &fahrenheit);
 	 celsius = (fahrenheit-32) / 1.8;
 	 printf("\n Temperature in Celsius : %.2f ", celsius);
	}
 else
	{
	 printf("\n Enter Temp in Celsius : ");
	 scanf("%f", &celsius);
 	 fahrenheit = (1.8 * celsius) + 32;
	 printf("\n Temperature in Fahrenheit : %.2f ", fahrenheit);
	}
}

