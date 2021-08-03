#include <stdio.h>
#include <stdlib.h>

void print_menu();

int main()
{
	int switcher;


	do
	{
		print_menu();
		printf("Enter number of operation: ");
		scanf("%d", &switcher);
		system("cls");
		switch(switcher)
		{
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case -1:
				break;
			default:
				printf("Incorrect number of operation\n");
		}

	} while (switcher != -1);

	return 0;
}


void print_menu()
{
	printf("-------------------------------------------------\n");
	printf("1-Create list of cars\n");
	printf("2-Outpur list of cars\n");
	printf("3-Output all second-hand cars define brand without ");
	printf("repairs define price\n");
	printf("4-Outpur all Russian cars\n");
	printf("5-Sorting of id\n");
	printf("6-Sorting of price\n");
	printf("7-Soring of condition\n");
	printf("-1-Exit\n");
	printf("-------------------------------------------------\n");
}