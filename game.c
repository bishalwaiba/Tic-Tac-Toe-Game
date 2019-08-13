#include<stdio.h>
char place[10]={'1','2','3','4','5','6','7','8','9'};
char player1[100],player2[100],choice,mark1,mark2;
int num1,num2;
int main(){
	printf("\n");
	printf("=*=*=*=*=*=*=* WELCOME TO TIC TAC TOE =*=*=*=*=*=*=*\n\n");
	printf("!!!!!!!!!! ARE YOU READY TO START THE GAME !!!!!!!!!\n\n");
	printf("PLEASE PRESS y or n : ");
	scanf("%c",&choice);
	printf("\n");
	printf("ENTER Your Name Player 1: ");
	scanf("%s",player1);
	printf("\n");
	printf("ENTER Your Name Player 2: ");
	scanf("%s",player2);
	printf("\n");
	printf("Which mark do you want %s X or O: ",player1);
	getchar();
	scanf("%c",&mark1);
	printf("\n");
	printf("Which mark do you want %s X or O: ",player2);
	getchar();
	scanf("%c",&mark2);
	printf("\n");
	printf("********** PICK ANY NUMBER IN THE TABLE ***********\n\n");
	printf("\t\t    |     |  \n");
	printf("\t\t %c  |  %c  |  %c\n",place[0],place[1],place[2]);
	printf("\t\t____|_____|____\n");
	printf("\t\t    |     |  \n");
	printf("\t\t %c  |  %c  |  %c\n",place[3],place[4],place[5]);
	printf("\t\t____|_____|____\n");
	printf("\t\t    |     |\n");
	printf("\t\t %c  |  %c  |  %c\n",place[6],place[7],place[8]);
	printf("\t\t    |     |  \n");
	
	while(choice=='y')
	{
		printf("PICK a NUMBER %s: ",player1);
		scanf("%d",&num1);
		printf("PICK a NUMBER %s: ",player2);
		scanf("%d",&num2);
		
   		if(num1==1)
		{
			place[0]=mark1;
		}
		if(num1==2)
		{
			place[1]=mark1;
		}
		if(num1==3)
		{
			place[2]=mark1;
		}
		if(num1==4)
		{
			place[3]=mark1;
		}
		if(num1==5)
		{
			place[4]=mark1;
		}
		if(num1==6)
		{
			place[5]=mark1;
		}
		if(num1==7)
		{
			place[6]=mark1;
		}
		if(num1==8)
		{
			place[7]=mark1;
		}
		if(num1==9)
		{
			place[8]=mark1;
		}
		
		//for player 2
		if(num2==1)
		{
			place[0]=mark2;
		}
		if(num2==2)
		{
			place[1]=mark2;
		}
		if(num2==3)
		{
			place[2]=mark2;
		}
		if(num2==4)
		{
			place[3]=mark2;
		}
		if(num2==5)
		{
			place[4]=mark2;
		}
		if(num2==6)
		{
			place[5]=mark2;
		}
		if(num2==7)
		{
			place[6]=mark2;
		}
		if(num2==8)
		{
			place[7]=mark2;
		}
		if(num2==9)
		{
			place[8]=mark2;
		}
		
		//This is for showing the table	
		printf("\t\t    |     |  \n");
		printf("\t\t %c  |  %c  |  %c\n",place[0],place[1],place[2]);
		printf("\t\t____|_____|____\n");
		printf("\t\t    |     |  \n");
		printf("\t\t %c  |  %c  |  %c\n",place[3],place[4],place[5]);
		printf("\t\t____|_____|____\n");
		printf("\t\t    |     |\n");
		printf("\t\t %c  |  %c  |  %c\n",place[6],place[7],place[8]);
		printf("\t\t    |     |  \n");
		
		//checking the winner
		
		if(place[0]==place[1] && place[1]==place[2])
		{
			printf("\n\nWINNER WINNER CHICKEN DINNER!!!");
			break;
		}
		if(place[3]==place[4] && place[4]==place[5])
		{
			printf("\n\nWINNER WINNER CHICKEN DINNER!!!");
			break;
		}
		if(place[6]==place[7] && place[7]==place[8])
		{
			printf("\n\nWINNER WINNER CHICKEN DINNER!!!");
			break;
		}
		if(place[0]==place[4] && place[4]==place[8])
		{
			printf("\n\nWINNER WINNER CHICKEN DINNER!!!");
			break;
		}
		if(place[2]==place[4] && place[4]==place[6])
		{
			printf("\n\nWINNER WINNER CHICKEN DINNER!!!");
			break;
		}
		
	

	}

	
}
int board()
{
	printf("\t\t    |     |  \n");
	printf("\t\t %c  |  %c  |  %c\n",place[0],place[1],place[2]);
	printf("\t\t____|_____|____\n");
	printf("\t\t    |     |  \n");
	printf("\t\t %c  |  %c  |  %c\n",place[3],place[4],place[5]);
	printf("\t\t____|_____|____\n");
	printf("\t\t    |     |\n");
	printf("\t\t %c  |  %c  |  %c\n",place[6],place[7],place[8]);
	printf("\t\t    |     |  \n");
}

