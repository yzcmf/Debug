//============================================================================
// Name        : Hello.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

#define PI 3.1415927

int main() {

	float r=0,circle_length=0;
	float cost_price=0,sell_price=0;
	float profit=0,loss=0;

	float operand_1=0,operand_2=0,result=0;
	char  opera;

	// For problem one

    printf("Please enter a float number:\n");
	scanf("%f",&r);
	circle_length=PI*r*2;
	printf("%f\n",circle_length);

	// For problem two

	printf("Please enter the cost price: \n");
	scanf("%f",&cost_price);
	printf("Please enter the sell price: \n");
	scanf("%f",&sell_price);
	printf("The cost price is:%f\n",cost_price);
	printf("The sell price is:%f\n",sell_price);

	if(sell_price>=cost_price)
	{
		profit=sell_price-cost_price;
		printf("The profit is:%f\n",profit);
	}
	else
	{
    loss=cost_price-sell_price;
	printf("The loss is:%f",loss);
	}

	// For problem three

	while(getchar()!='\n');//clear the buffer

	printf("\nPlease enter your operator:");
		    scanf("%c",&opera);
			if((opera!='+')&&(opera!='-')&&(opera!='*')&&(opera!='/'))
		    printf("error");

			else
			{
			printf("Please enter operand 1:\n");
			scanf("%f",&operand_1);
			printf("Please enter operand 2:\n");
			scanf("%f",&operand_2);

			switch(opera)
			{

			case '+':result=operand_1+operand_2;break;
			case '-':result=operand_1-operand_2;break;
			case '*':result=operand_1*operand_2;break;
			case '/':result=operand_1/operand_2;break;
			default:result=0;break;

			}
			printf("The result is:%f\n",result);

			}

	return 0;
}

