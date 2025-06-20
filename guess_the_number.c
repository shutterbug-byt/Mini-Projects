#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

    int random, guess;
    int no_of_guesses = 0;
    srand(time(NULL));

    printf("Welcome Player! \n");
    random = rand() % 100 + 1;

    do
    {
        printf("What is your guess? (1 - 100) \n");
        scanf("%d", &guess);
        no_of_guesses++;

        
        if (guess > random){
            printf("You may go bit lower!\n");
        }
        else if (guess < random){
            printf("You may go bit higher!\n");
        }
        else{
            printf("You were right this time! congratulations!\n");
            printf("It took you %d attempts\n", no_of_guesses);
        }
    } while (random != guess);
    
    printf("You are free to go! \n");
    printf("Thank you for playing. Developed by Anant Shukla.");

    return 0;

}

