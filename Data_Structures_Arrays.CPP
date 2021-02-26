#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,num,pos,arr[10];
	clrscr();

                    //Creating Array
	printf("\n Enter the number of elements in the array: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}

                    //Creating INSERTION Operation
	printf("\n Enter the number to be inserted: ");
	scanf("%d", &num);

	printf("\n Enter the position at which the element has to be inserted: ");
	scanf("%d",&pos);
	for(i=n-1;i>=pos;i--)

		arr[i+1] = arr[i];
		arr[pos]=num;
		n=n+1;

	printf("\n The updated array is: \n");
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d] = %d",i,arr[i]);
	}


                    //Creating DELETION Operation
                    printf("\n Enter the position at which the element has to be deleted: ");
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++)

		arr[i] = arr[i+1];
		n--;

	printf("\n The updated array is: \n");
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d] = %d",i,arr[i]);
	}

	getch();
	return 0;
}