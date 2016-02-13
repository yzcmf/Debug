//============================================================================
// Name        : lab2.cpp
// Author      : zyx
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

double factor(int number)
{
	int result=1;
	double final_result;
	while(number!=1)
	{
	result*=number;
	number--;
	}
	final_result=(float)result;
printf("The factorial is:%lf.\n",final_result);

return 1;
}

int infer(int number)
{
if(number%2==1)
	{
	printf("This is a odd number.\n");
	return 2;
	}
else if(number%2==0)
{
	printf("This is a even number.\n");
	return 2;
	}
else
{
	printf("error.\n");
	return 2;
	}
}
int print(void)
{
	printf("exit.\n");
	return 3;
}

int main() {

	//For problem one

	printf("\nProblem one:\n");

	int choice,number;
	int result=0;
	printf("Please enter a number:\n");
	scanf("%d",&number);
    printf("Please enter a choice(1~3):\n");
	while(result!=3)
	{
	scanf("%d",&choice);
	switch(choice)
				{
				case 1:result=factor(number);break;
				case 2:result=infer(number);break;
				case 3:result=print();break;
				default:result=0;break;
				}
	}

	//For problem two

	printf("\nProblem two:\n");

	int input_1,input_2;
	float float_input1,float_input2;
	printf("Please enter two inputs:\n");
	scanf("%d %d",&input_1,&input_2);
	float_input1=(float)input_1;
	float_input2=(float)input_2;
	printf("The division result is: %f.\n",float_input1/float_input2);

	//For problem three

	printf("\nProblem three:\n");

	int x=3;
	//int =3.0;
	float y=3.0;
	if(x==y)
	{
	printf("X and Y are equal.\n");
	}
	else
	{
	printf("X and Y are not equal.\n");
	}


	return 0;
}
