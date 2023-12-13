#include <stdio.h>
#include <string.h>

//function for printing out spaces
void printSpaces(int spaces) {
    for (int i = 0; i < spaces; i++) {
        printf("   ");
    }
}

int main() {
    int i;
    int floors = 0;
    printf("How much \"floors\" do you want for the Tree to have? ");
    scanf("%d", &floors);
    int spaces = floors-1;
    char top[] = "*\n";
    char line1[1001] = "  / \\  ";
    char line2[1001] = " / o \\ ";
    char line3[1001] = "+++++++";
    
    //top
    printSpaces(spaces+1);
    printf("%s", top);

    //main loop
    for (i = 0; i < floors; i++) {
        
        printSpaces(spaces);
        printf("%s\n", line1);
        strcat(line1, " / \\  ");

        printSpaces(spaces);
        printf("%s\n", line2);
        strcat(line2, "/ o \\ ");

        printSpaces(spaces);
        printf("%s\n", line3);
        strcat(line3, "++++++");

        spaces--;
    }
    return 0;
}
