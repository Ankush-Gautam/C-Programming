//47.Creating a file containing customers record
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct customer{
	char name[30];
	int id;
	int age;
	char address[40];
};
int main()
{
	struct customer cus;
	int choice;
	char ch;
	FILE *fp;
	fp = fopen("record.txt","a+");	
			
	printf("1.Add Customers Record\n2.View Record\n3.Exit\n");
	printf("\nEnter a choice: ");
	scanf("%d",&choice);
	printf("\n\n");
	
	switch(choice)
	{
		case 1:
			fflush(stdin);
			printf("Enter Customer Name: ");
			gets(cus.name);
			printf("Enter ID: ");
			scanf("%d",&cus.id);
			printf("Enter Age: ");
			scanf("%d",&cus.age);
			fflush(stdin);
			printf("Enter Address: ");
			gets(cus.address);
			
			fwrite(&cus,sizeof(cus),1,fp);
			break;
		
		case 2:
			printf("ID\tName\t\tAge\tAddress\n");
			while(fread(&cus,sizeof(cus),1,fp))
			{
				printf("%d\t%s\t\t%d\t%s\n",cus.id,cus.name,cus.age,cus.address);
			}
			
			break;
		
		default:
			exit(0);
	}
	
	fclose(fp);
	return 0;
}
