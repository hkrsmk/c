#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char peg1,peg2,peg3,peg4,generate_codepeg(void),Bpegs,Gpegs,Opegs,Ppegs,Rpegs,Ypegs;

int main(void)
{
    char peg1,peg2,peg3,peg4; //for player guesses
    printf("Welcome to the Mastermind game!\n\n");
    printf("You are allowed a total of 12 attempts to break the four-peg code. Each peg is made up of one of the six colours:");
    printf("Blue, Green, Orange, Purple, Red and Yellow. Hints will be provided for an incorrect guess.");
    printf("A black peg (‘B’) means one of the colour pegs is correct and it is also placed at the correct position.");
    printf("A white peg (‘W’) means that one of the colour pegs is correct but it is placed at the wrong position. Good luck! \n\nPress \"Enter\" to begin.\n");
    fflush(stdin);
    while(getchar()!='\n') //this line will get a new character each time the while loop runs.
    {
        printf("Please press enter.");
        fflush(stdin);
    }

    printf("Generating code...");
    generate_codepeg();

    printf("Now guess! Place all four guesses together, like BYGY for example. No spaces please.");
    scanf("%c%c%c%c",&peg1,&peg2,&peg3,&peg4);


    return 0;
}

char generate_codepeg()
{
    srand((unsigned) time(NULL));
    switch(rand()%6)
    {
    case 0:
        peg1 = 'B';
        Bpegs++;
        break;
    case 1:
        peg1 = 'G';
        Gpegs++;
        break;
    case 2:
        peg1 = 'O';
        Opegs++;
        break;
    case 3:
        peg1 = 'P';
        Ppegs++;
        break;
    case 4:
        peg1 = 'R';
        Rpegs++;
        break;
    case 5:
        peg1 = 'Y';
        Ypegs++;
        break;
    }
}
