#include <stdio.h>

//int factorial ( int num )
//{
//	if (num>1)
//
//    return num * factorial( num - 1 );
//}

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

int main(void)
{
    int no,ans;
    printf("Enter the number \n");
    scanf( "%d", &no );
    //ans = factorial( no );
    ans=factor(no);
    printf("The factorial is %d ", ans );
    return 0;
}
