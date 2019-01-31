#include<stdio.h>

//Global Variables
int numArtists;

//Functions
int loadInfo(void);

//Main
int main(void)
{
    printf("%i",loadInfo());
    printf("\n%i",numArtists);
}

//Functions
int loadInfo(void)
{
    int i;
    char curLine[50];

    FILE*fp=fopen("myMusic.txt","r");
    if(fp==NULL)
    {
        return 0;
    }

    fscanf(fp,"%s",curLine);
    if(curLine[1]==0)
    {
        numArtists=curLine[0]-48;
    }
    else
    {
        numArtists=(curLine[0]-48)*10+curLine[1]-48;
    }

    fflush(fp);
    fclose(fp);
    return 1;
}
