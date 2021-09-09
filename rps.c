#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int singlePlayer();
int multiPlayer();

int main() {
    char choice;

    printf("SinglePlayer | s\n");
    printf("MultiPlayer  | m\n");
    printf("Nevermind... | q\n\n");
    printf("Your Choice: ");
    scanf("%c", &choice);
    if(choice == 's') {
        singlePlayer();
    } else if(choice == 'm') {
        multiPlayer();            
    } else if(choice == 'q') {
        return 0;
    } else {
        printf("Hey!  That's not a valid choice pick s or m!");
    }
}

int singlePlayer() {
    char userChoice, again;
    int compChoice;

    srand(time(NULL));

    compChoice = rand() % 3 + 1;

    for( ; ; ) {
        for( ; ; ) {
            printf("Rock     | r\n");
            printf("Paper    | p\n");
            printf("Scissors | s\n\n");
            printf("Your Choice: ");
            scanf(" %c", &userChoice);
            if(userChoice == 'r') {
                break;
            } else if(userChoice == 'p') {
                break;
            } else if(userChoice == 's') {
                break;
            } else {
                printf("\n\n\nThat's not a valid choice! \n\n\n");
            }
        }    
        if(userChoice == 'r' && compChoice == 3) {
            printf("User Wins! \n\nPlay Again??\n\n");
            printf("SinglePlayer  | s\n");
            printf("MultiPlayer   | m\n");
            printf("No, I'm bored | q\n\n");
            printf("Your Choice: ");
        } else if(userChoice == 'p' && compChoice == 1) {
            printf("User Wins! \n\nPlay Again??\n\n");
            printf("SinglePlayer  | s\n");
            printf("MultiPlayer   | m\n");
            printf("No, I'm bored | q\n\n");
            printf("Your Choice: ");
        } else if(userChoice == 's' && compChoice == 2) {
            printf("User Wins! \n\nPlay Again??\n\n");
            printf("SinglePlayer  | s\n");
            printf("MultiPlayer   | m\n");
            printf("No, I'm bored | q\n\n");
            printf("Your Choice: ");
        } else if(userChoice == 'r' && compChoice == 2) {
            printf("Computer Wins! \n\nPlay Again??\n\n");
            printf("SinglePlayer  | s\n");
            printf("MultiPlayer   | m\n");
            printf("No, I'm bored | q\n\n");
            printf("Your Choice: ");
        } else if(userChoice == 'p' && compChoice == 3) {
            printf("Computer Wins! \n\nPlay Again??\n\n");
            printf("SinglePlayer  | s\n");
            printf("MultiPlayer   | m\n");
            printf("No, I'm bored | q\n\n");
            printf("Your Choice: ");
        } else if(userChoice == 's' && compChoice == 1) {
            printf("Computer Wins! \n\nPlay Again??\n\n");
            printf("SinglePlayer  | s\n");
            printf("MultiPlayer   | m\n");
            printf("No, I'm bored | q\n\n");
            printf("Your Choice: ");
        } else {
            printf("Draw! \n\nPlay Again?? \n\n");
            printf("SinglePlayer  | s\n");
            printf("MultiPlayer   | m\n");
            printf("No, I'm bored | q\n\n");
            printf("Your Choice: ");
        }
        scanf(" %c", &again);
        if(again == 's') {
            singlePlayer();
        } else if(again == 'm') {
            multiPlayer();
        } else {
            system("clear");
            break;
        }
    }
    return 0;
}

int multiPlayer() {
    char p1Choice, p2Choice, again;

    for( ; ; ) {
        for( ; ; ) {
            printf("Player 1:\n");
            printf("Rock     | r\n");
            printf("Paper    | p\n");
            printf("Scissors | s\n\n");
            printf("Your Choice: ");
            scanf(" %c", &p1Choice);
            if(p1Choice == 'r') {
                break;
            } else if(p1Choice == 'p') {
                break;
            } else if(p1Choice == 's') {
                break;
            } else {
                printf("\n\n\nThat's not a valid choice! \n\n\n");
            }
        }

        for( ; ; ) {
            system("clear");

            printf("Player 2:\n");
            printf("Rock     | r\n");
            printf("Paper    | p\n");
            printf("Scissors | s\n\n");
            printf("Your Choice: ");
            scanf(" %c", &p2Choice);
            if(p2Choice == 'r') {
                break;
            } else if(p2Choice == 'p') {
                break;
            } else if(p2Choice == 's') {
                break;
            } else {
                printf("\n\n\nThat's not a valid choice! \n\n\n");
            }
        }    
        if(p1Choice == 'r' && p2Choice == 's') {
            printf("Player 1 Wins! \n\nPlay Again??\n\n");
            printf("SinglePlayer  | s\n");
            printf("MultiPlayer   | m\n");
            printf("No, I'm bored | q\n\n");
            printf("Your Choice: ");
        } else if(p1Choice == 'p' && p2Choice == 'r') {
            printf("Player 1 Wins! \n\nPlay Again??\n\n");
            printf("SinglePlayer  | s\n");
            printf("MultiPlayer   | m\n");
            printf("No, I'm bored | q\n\n");
            printf("Your Choice: ");
        } else if(p1Choice == 's' && p2Choice == 'p') {
            printf("Player 1 Wins! \n\nPlay Again??\n\n");
            printf("SinglePlayer  | s\n");
            printf("MultiPlayer   | m\n");
            printf("No, I'm bored | q\n\n");
            printf("Your Choice: ");
        } else if(p1Choice == 'r' && p2Choice == 'p') {
            printf("Player 2 Wins! \n\nPlay Again??\n\n");
            printf("SinglePlayer  | s\n");
            printf("MultiPlayer   | m\n");
            printf("No, I'm bored | q\n\n");
            printf("Your Choice: ");
        } else if(p1Choice == 'p' && p2Choice == 's') {
            printf("Player 2 Wins! \n\nPlay Again??\n\n");
            printf("SinglePlayer  | s\n");
            printf("MultiPlayer   | m\n");
            printf("No, I'm bored | q\n\n");
            printf("Your Choice: ");
        } else if(p1Choice == 's' && p2Choice == 'r') {
            printf("Player 2 Wins! \n\nPlay Again??\n\n");
            printf("SinglePlayer  | s\n");
            printf("MultiPlayer   | m\n");
            printf("No, I'm bored | q\n\n");
            printf("Your Choice: ");
        } else {
            printf("Draw! \n\nPlay Again?? \n\n");
            printf("SinglePlayer  | s\n");
            printf("MultiPlayer   | m\n");
            printf("No, I'm bored | q\n\n");
            printf("Your Choice: ");
        }
        scanf(" %c", &again);
        if(again == 's') {
            singlePlayer();
        } else if(again == 'm') {
            multiPlayer();
        } else {
            system("clear");
            break;
        }
    }
    return 0;
}