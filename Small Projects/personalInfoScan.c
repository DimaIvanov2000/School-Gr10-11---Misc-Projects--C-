#include <stdio.h>

main()
{
	char name[10];
	int age;
	int heightCm;
	printf("Enter your name (<11 letters) :\n");
	scanf("%s",&name);
	printf("Enter your age in whole years:\n");
	scanf("%i",&age);
	printf("Enter your height in cm (integer):\n");
	scanf("%i",&heightCm);
	printf("Your name is %s. You are %i years old and are %icm in height.",name,age,heightCm);
}
