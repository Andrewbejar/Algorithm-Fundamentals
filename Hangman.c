#include <stdio.h>
#include <string.h>

#define tt 6

int main()
{

    char w1[3]= "bis";
    int i,counter,letters=0,tries=0,ils=0;
    char guess;

printf("The secret word is:\n");

    letters = strlen(w1);
    char vl[letters];


    for(counter=0;counter<letters; counter++)
    {

        vl[counter]= '*';
	vl[letters]='\0';
    }

    while(tries<tt)
    {
	tries=tries+1;

        printf("\nWORD: %s\n",vl);
        printf( "Incorrect Guesses: %d\n",ils);
	printf("\nGuess: ");

        scanf("%c",&guess);

             if(guess!=w1[1]||guess!=w1[2]||guess!=w1[3])
             {
                 ils=ils+1;
             }

	    if(guess==w1[1])
	    {
		vl[1]=w1[1];
	    }

	    if(guess==w1[2])
	    {
		vl[2]=w1[2];
	    }

	    if(guess==w1[3])
	    {
		vl[3]=w1[3];
	    }

	    if(vl==w1)
	    {
	    printf("\nHooray you did it!\n");
	    break;
            }
    }

    return 0;
}
