#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int RockPaperScissor(char you,char comp){
    if (you == comp)
    {
        return 0;
    }
    if (you == 'r' && comp == 'p')
    {
        return -1;
    }
    else if (you == 'r' && comp == 's')
    {
        return 1;
    }
    if (you == 'p' && comp == 'r')
    {
        return 1;
    }
    else if (you == 'p' && comp == 's')
    {
        return -1;
    }
    if (you == 's' && comp == 'p')
    {
        return 1;
    }
    else if (you == 's' && comp == 'r')
    {
        return -1;
    }
    
}
int main(){
    int number;
    srand(time(0));
    number = rand()%100 + 1;   //Generates random number between 1 and 100
    //printf("The Number is %d\n", number);
    char you, comp;
    if (number < 33)
    {
        comp = 'r';
    }
    if (number > 33 && number < 66)
    {
        comp = 'p';
    }
    if (number > 66 && number < 101)
    {
        comp = 's';
    }
    
    printf("Enter 'r' for Rock, 'p' for Paper, 's' for Scissor\n");
    scanf("%c",&you);
    int result = RockPaperScissor(you, comp);    
    if (result == 0)
    {
        printf("Draw!! You choosed %c and comp choosed %c\n",you,comp);
    }
    else if (result == 1)
    {
        printf("Hooray You Won!! You choosed %c and comp choosed %c\n",you,comp);
    }
    else
    {
        printf("Oops You lose! You choosed %c and comp choosed %c\n",you,comp);
    }
    return 0;
}
