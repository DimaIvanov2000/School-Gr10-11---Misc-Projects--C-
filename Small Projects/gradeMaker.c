#include <stdio.h>

main()
{
	char courses[4][30];
	int grades[4];
	char letterGrade;
	int i;
	for(i=1;i<=4;i++)
	{
		printf("Please enter a course name followed by its corresponding grade in %%:\n");
		scanf("%s",&courses[i-1]);
		scanf("%i",&grades[i-1]);
	}
	for(i=1;i<=4;i++)
	{
		if(grades[i-1]>=90)
		{
			letterGrade='A+';
		}
		else if(grades[i-1]>=80)
		{
			letterGrade='A';
		} 
		else if(grades[i-1]>= 70)
		{
			letterGrade='B';
		}
		else if(grades[i-1]>=60)
		{
			letterGrade='C';
		}
		else if(grades[i-1]>=50)
		{
			letterGrade='D';
		}
		else
		{
			letterGrade='R';
		}
		printf("%s:\n%i%% (%c)\n",courses[i-1],grades[i-1],letterGrade);
	}
}
