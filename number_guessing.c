#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,guess_count=1;
    srand(time(0));
    number=(rand()%100) +1;
    // printf("%d\n",number);

    do
    {
        printf("enter your guess between 1 to 100: ");
        scanf("%d",&guess);
        if (guess>number)
        {
            printf("Lower your guess\n");
        }
        else if (guess<number)
        {
            printf("Higher your guess\n");
        }
        else 
        {
            printf("you guess the correct number in %d attempts\n",guess_count);
        }      
        guess_count++;
    } while (guess!=number);

    return 0;
}
