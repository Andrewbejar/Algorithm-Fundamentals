#include <stdio.h>
#include <string.h>

#define tt 6 //total tries

int main()
{

    char w1[6]= "andrew"; //word 1
    int i,j,counter,letters=0,tries=5,ils=0; //incorrect letters
    char guess;

    printf("The secret word is:\n");

    letters = strlen(w1);
    char vl[letters]; //visible letters

    for(counter=0;counter<letters; counter++)
    {

        vl[counter]= '*';
    }
    vl[letters]='\0';

//print -> ***

    printf("\nWORD: %s\n",vl);

    while(tries>0)
    {

	printf("\nGuess: ");
        scanf(" %c",&guess);

	j=0;
	for(i=0;i<letters;i++)
	{
		if(guess==w1[i])
		{
			vl[i]=w1[i];
			j++;
		}
	}
	if(j==0)
        {
                tries--;
                printf("Your guess is incorrect, dumb. Try again.");
        }

	printf("\nWORD: %s\n",vl);
	if(strcmp(vl,w1)==0)
	{
		printf("YOU WON BRO\n");
		break;
	}

    }

    return 0;
}
