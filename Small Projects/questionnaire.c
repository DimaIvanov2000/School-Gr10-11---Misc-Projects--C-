#include <stdio.h>

main()
{
	int age;
	int grade;
	int dataarray[100];
	int a;
	for(a=1;a<=100;a++)
	{
		dataarray[a] = 0;
	}
	//for loop variables
	int i;
	int j;
	//table organizer arrays
	
	
	while(1)
	{
		//question phase
		printf("Please enter your age:\n");
		scanf("%i",&age);
		printf("Please rate your meme spiciness on a scale of 1 to 10:\n");
		scanf("%i",&grade);
		//display phase
		dataarray[(age-10)+10*(grade-1)]+=1;
		printf("Thank you for your time!\n\n  Current Data:\n\n");
		
		for(i=1;i<=10;i++)
		{
			if(i!=1)
			{
				printf("%i   ",11-i);
			} else {
				printf("%i  ",11-i);
			}
			for(j=1;j<=10;j++)
			{
					printf("%i  ",dataarray[(j)+10*(11-i-1)]);
			}
			printf("\n");
		}
		printf("\n    11 12 13 14 15 16 17 18 19 20\n\nReady for next participant!\n\n");
		
		
	}
}
