#include <stdio.h>
#include <math.h>

int power();

main()
{
	int i,j,k;
	int type;
	int iar;
	int pos;
	int array[10]={0};
	for(i=0;i<10;i++)
	{
		pos=0;
		for(j=0;j<power(2,i);j++)
		{
			array[0]++;
			for(k=0;k<=i;k++)
			{
				if(array[k]==2)
				{
					array[k]=0;
					array[k+1]=1;
				}
			}
			type=2;
			for(k=0;k<=i;k++)
			{
				if(array[k]==type)
				{
					iar++;
					if(iar>=i+1)
					{
						pos++;
						break;
					}
				}
				else
				{
					type=array[k];
					iar=1;
					if(iar>=i+1)
					{
						pos++;
						break;
					}
				}
			}
		}
		printf("%i/%i     ",pos,power(2,i+1));
	}
}

int power(int n,int e)
{
	int i;
	int res=n;
	for(i=1;i<e;i++)
	{
		res*=n;
	}
	return res;
}
