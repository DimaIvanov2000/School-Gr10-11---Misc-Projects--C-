#include<stdio.h>

//This version of part 3 uses getch() as opposed to scanf and checks DURING the input process as opposed to AFTER
//This mainly an experiment
//the advantage of using getch() is that spaces are allowed, that's about it

main()
{
	int i;//counter for for loops
	int k;//used as counter for how many letters the user has entered (could technically do without but this seems much simpler)
	int l=0;//used to track how many chracters are different among strings
	char input;//tracks immediate input
	char strings[2][31]={0};//stores strings
	for(i=0;i<=1;i++)
	{
		k=0;
		do
		{
			system("cls");
			printf("Please enter 2 string (spaces may be uncluded along with any ascii character \nwhich is not enter, don't know how that will go):\n%s%c",strings[i],220);
			if(k==30)
			{
				printf("\ncharacter limit reached!");
			}
			input=getch();
			if(input==8&&k>0)
			{
				k--;
				if(i==1&&strings[0][k]!=strings[1][k])
				{
					l--;
				}
				strings[i][k]=0;
			}
			else if(input!=13&&k<30)
			{
				strings[i][k]=input;
				if(i==1&&strings[0][k]!=strings[1][k])
				{
					l++;
				}
				k++;
			}
		}
		while(input!=13);
		strings[i][k]='\0';
	}
	system("cls");
	printf("Strings are:\n%s\n%s\n\nNumber of characters that differ: %i\n\n",strings[0],strings[1],l);
	if(l==0)
	{
		printf("The two strings are THE SAME");
	}
	else
	{
		printf("The two strings are DIFFERENT");
	}
}
