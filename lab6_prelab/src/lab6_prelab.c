#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
	int i=0, j, k;
	int x[10000];

	while(i < 10000){
		x[i] = i;
		++i;
	}

	printf("Enter an integer between 0 to 9999: ");
	scanf("%d",&k);

	tester(x, k);

	return 0;
}

int tester(int* c, int k) {
	printf("x[%d] = %d\n", k, c[k]);
	c[10000]=1309;
}
