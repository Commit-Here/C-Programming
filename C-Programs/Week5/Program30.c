#include<stdio.h>

    /* TEST IF THE NUMBER IS PRIME OR NOT */

int main()
{  
	int n, i=2;
	scanf("%d", &n);

	while (i < n)
	{ 
		if (n % i == 0){
			printf("%d is not a prime \n", n);
			break;
		}
		i++;
	
	        printf("%d is a prime \n", n);
	}
		return 0;
}
	
