#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1001

//Function for printing out spaces
void printSpaces(int spaces) {
    for (int i = 0; i < spaces; i++) {
        printf("   ");
    }
}

int main() {
    int i;
    int floors = 0;
    printf("How many \"floors\" do you want for the Tree to have? ");
    scanf("%d", &floors);
    
    if (floors < 0) {
        printf("Please enter a non-negative number of floors.\n");
        return 1;
    }

    int spaces = floors - 1;
    char top[] = "*\n";
    char lines[3][MAX_LENGTH] = {
        "  / \\  ",
        " / o \\ ",
        "+++++++"
    };

    //Top
    printSpaces(spaces + 1);
    printf("%s", top);

    //Main loop
    for (i = 0; i < floors; i++) {
        for (int j = 0; j < 3; j++) {
            printSpaces(spaces);
            printf("%s\n", lines[j]);
            strcat(lines[j], (j == 2) ? "++++++" : (j == 1) ? "/ o \\ " : " / \\  "); //ternary operator
        }
        spaces--;
    }

    return 0;
}
