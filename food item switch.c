#include <stdio.h>
#include <stdlib.h>

int main()
{
	while(1)
{
	int n;
	printf("\n\nItems available are as follows\n");
	printf("1.Pizza\n");
		printf("2.Burger\n");

			printf("3.Pasta\n");
			printf("4.French Fries\n");
			printf("5.Sandwich\n");
			printf("Enter the corrosponding no input from 1 to 5\n");
			scanf("%d",&n);





	switch(n)
	{
		case 1:printf("Food Item\n");
		       printf("Pizza-Rs 239");
		break;
		printf("Food Item\n");case 2:
		printf("Burger-Rs 129");
		break;
		case 3:printf("Food Item\n");
		printf("Pasta-Rs 179");
		break;
		case 4:printf("Food Item\n");
		printf("French Fries-Rs 99");
		break;
		case 5:printf("Food Item\n");
		printf("Sandwich-Rs 149");
		break;
		default:printf("Invalid Input");



	}

}
}
