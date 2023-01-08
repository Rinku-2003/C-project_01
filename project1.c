/*PROJECT NO 1*/
/*Write a program that generate a random number between a given range and asks the user to guess it
. If teh user's guess is higher than the actual number , the program display 'Lower number please'.
Similarly if the user's guess is too low , the program print 'Higher number please'.
When the user guess the correct number , the program displays the number of gusses the user used to 
at the number (Here we are using the concept of looping and random number generator)*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num , guess , nguesses=1;
    srand(time(0));
    num = rand()%100 + 1;
    //printf("The number is %d \n",num);

    do
    {
        printf("Guess the number between 1 to 100 : \n");
        scanf("%d",&guess);
        if(guess > num)
        {
            printf("Lower number please \n");
        }
        else if(guess < num)
        {
            printf("Higher number please \n");
        }
        else
        {
            printf("You gussed the number in %d attempts",nguesses);
        }
        nguesses++;
    } while (guess != num);

    return 0;
    
}