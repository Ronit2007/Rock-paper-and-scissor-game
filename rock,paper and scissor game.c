//password is harry
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int main()
{
    char password[6];
    printf("Enter 5 digid pasword to play this game\n"); 
    scanf("%s", &password);
    if (strcmp(password, "harry") == 0)  //password is harry
    {
        int random, time, p1 = 0, p2 = 0;
        char n1[10], n2[10], n3[10];
        
        printf("Enter your name\n");
        scanf("%s", &n1);
        printf("How many time do you want to play this game\n");
        scanf("%d", &time);
        printf("\n");
        printf("\t\t\t\t\t\t\tWelcome to Rock , parer and scissor game\n");
        printf("\n");
        printf("Player 1 : %s\n", n1);
        printf("Player 2 : Computer\n");
        printf("\n");
        printf("%s point = %d\n", n1, p1);
        printf("Computer point = %d\n", p2);
        for (int i = 0; i < time; i++)
        {
            random = generateRandomNumber(3);
            printf("\n");
            printf("Enter any one of them \"Rock paper or scissor\" :");
            scanf("%s", &n2);
            printf("\n");
            printf("%s : %s\n", n1, n2);
            if (random == 0 && strcmp(n2, "scissor") == 0)
            {
                printf("Computer : rock\n");
                p2++;
            }
            else if (random == 0 && strcmp(n2, "paper") == 0)
            {
                printf("Computer : rock\n");
                p1++;
            }
            else if (random == 0 && strcmp(n2, "rock") == 0)
            {
                printf("Computer : rock\n");
                p1++;
                p2++;
            }
            else if (random == 1 && strcmp(n2, "paper") == 0)
            {
                printf("Computer : scissor\n");
                p2++;
            }
            else if (random == 1 && strcmp(n2, "rock") == 0)
            {
                printf("Computer : scissor\n");
                p1++;
            }
            else if (random == 1 && strcmp(n2, "scissor") == 0)
            {
                printf("Computer : scissor\n");
                p1++;
                p2++;
            }
            else if (random == 2 && strcmp(n2, "rock") == 0)
            {
                printf("Computer : paper\n");
                p2++;
            }
            else if (random == 2 && strcmp(n2, "scissor") == 0)
            {
                printf("Computer : paper\n");
                p1++;
            }
            else if (random == 2 && strcmp(n2, "paper") == 0)
            {
                printf("Computer : paper\n");
                p1++;
                p2++;
            }
            else
            {
                printf("You have entered wrong option\n");
                printf("So your point will decrease\n");
                p1--;
            }
            printf("\n");
            printf("%s point = %d\n", n1, p1);
            printf("Computer point = %d\n", p2);
        }
        printf("\nFinal score\n");
        printf("%s :%d\n", n1, p1);
        printf("Computer :%d\n", p2);
        printf("\n");
        if (p1 > p2)
        {
            printf("\t\t\t\t\t\t\tYou won the game :)  :)\n");
        }
        else if (p1 < p2)
        {
            printf("\t\t\t\t\t\t\tYou lost the game :(  :(\n");
        }
        else
        {
            printf("\t\t\t\t\t\t\tMatch draw  :|  :|\n");
        }
        printf("\n");
        printf("\t\t\t\t\t\t\tGAME END................... \n");
        printf("\n");
    }
    else
    {
        printf("\n");
        printf("Sorry you have entered wrong password  :(  :(");
        printf("Security is very tite\n");
    }
    return 0;
}
