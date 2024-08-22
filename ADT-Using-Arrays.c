#include <stdio.h>
#define MAX 20

int size, arr[MAX], i, element, position;

void create()
{
	printf("Size : ");
	scanf("%d", &size);
	
	if (size <= 0 || size > MAX)
	{
		printf("Invalid Size!\n");
		return;
	}
	
	for (i = 0; i < size; i++)
	{
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	printf("\n");
}

void display()
{
	if (size == 0)
	{
		printf("Underflow!\n");
		return;
	}
	
	for (i = 0; i < size; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
}

void insert()
{
	if (size >= MAX)
	{
		printf("Overflow!\n");
		return;
	}
	
	printf("Position : ");
	scanf("%d", &position);
	
	if (position <= 0 || position > size + 1)
	{
		printf("Invalid Position!\n");
		return;
	}
	
	printf("Element : ");
	scanf("%d", &element);
	
	for (i = size; i >= position; i--)
	{
		arr[i] = arr[i - 1];
	}
	size++;
	arr[position - 1] = element;
}

void delete()
{
	if (size == 0)
	{
		printf("Underflow!\n");
		return;
	}
	
	printf("Position : ");
	scanf("%d", &position);
	
	if (position <= 0 || position > size)
	{
		printf("Invalid Position!\n");
		return;
	}
	
	for (i = position - 1; i < size; i++)
	{
		arr[i] = arr[i + 1];
	}
	size--;
}

void search()
{
	printf("Position : ");
	scanf("%d", &position);
	
	if (position <= 0 || position > size)
	{
		printf("Invalid Position!\n");
		return;
	}
	
	printf("%d\n", arr[position - 1]);
}

void modify()
{
	printf("Position : ");
	scanf("%d", &position);
	
	if (position <= 0 || position > size)
	{
		printf("Invalid Position!\n");
		return;
	}
	
	printf("Element : ");
	scanf("%d", &element);
	
	arr[position - 1] = element;
}

int main()
{
	do
	{
		int opt;
		printf("\nMAIN MENU  -\n1. Create\n2. Display\n3. Insert\n4. Delete\n5. Search\n6. Modify\n7. Exit\n");
		printf("Choice : ");
		scanf("%d", &opt);
		
		switch (opt)
		{
			case 1:
				create();
				break;
				
			case 2:
				display();
				break;
				
			case 3:
				insert();
				break;
				
			case 4:
				delete();
				break;
				
			case 5:
				search();
				break;
				
			case 6:
				modify();
				break;
				
			case 7:
				printf("Thank you!\n");
				return 0;
				
			default:
				printf("Invalid Input!\n");
		}	
	}
	while (1);
}
