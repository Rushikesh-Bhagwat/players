#include <stdio.h>
#include"players.h"
int n;
void main()
{
	players p[11];
	//int n;
	printf("How many players you want enter::");
	scanf("%d",&n);
	storevalue(p);
	int ch,exit,jNo;

	
	do
	{
		printf("\n\n1].display players:\n2].serach:\n3].update:\n4].Delete\n5].Maximum:\n6].Top Three Players(runs&wickets):\n");
		printf("\n\nEnter the choice::");
		scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		    display(p);
			break;
		
		case 2:
			printf("\n1].search player jersey number..\n2].search player Name..\n");
			int ch1;
			printf("Enter the choice:");
			scanf("%d",&ch1);
			if(ch1==1)
			{
			printf("\nEnter the players jersey number  you want to search  that player:\n");
			
			scanf("%d",&jNo);
			search(p,jNo);
		    }
			if(ch1==2)
			{
			printf("\nEnter the players name you want to search:\n");
			char pname[20];
			fflush(stdin);
			gets(pname);
			fflush(stdin);
			searchName(p,pname);
		    }
			break;
			
		case 3:
			printf("\nEnter the jersey number you want update the player:");
			
			scanf("%d",&jNo);
			update(p,jNo);
			
		
			break;
		
		case 4:
		printf("\nEnter the jersey number you want to delete the player:");
			scanf("%d",&jNo);
			delet(p,jNo);
		break;	
		case 5:
		
			printf("\n1.maximum runs players\n2.maximum wickets players\n");
				int ch;
			printf("Enter the choice::");
			scanf("%d",&ch);
			if(ch==1)
			{
			    printf(" find maximum runs of players::");
				MaximumRuns(p);
		    }
			if(ch==2){
		        printf("maximum wickets of players::");
		    	MaximumWickets(p);
		    }
		break;	
		case 6:
			
			printf("________________________Top three players Runs_______________________\n\n");
			TopThreePlayersRuns(p);
			printf("________________________Top three players Wickets______________________\n\n");
			TopThreePlayersWickets(p);
			break;	
		default:
			printf("Invalid choice.....");
				
	}
	printf("\nDo you want to continue (0/1)\n");
		scanf("%d",&exit);
	}
   while(exit);	
}
