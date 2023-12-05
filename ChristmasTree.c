 #include <stdio.h>
 #include <string.h>

int main () {

    int i, x;

    char block1[50];
    char block2[50];
    char space[] = "X"; //starts from 8 at line1
    char top[] = "         *         \n";
    char line1[] = "  / \\  ";
    char line2[] = " / o \\ ";
    char line3[] = "+++++++";
    char lineTwo1[] = "  / \\  \n";
    char lineTwo2[] = " / o \\ \n"; //do i even need same thing but with \n? prolly not... 
    char lineTwo3[] = "+++++++\n";
//  strcpy(block1,line1); 
//  strcat(block1, line1);
//  strcat(block1, line3);
    printf("%s", top);
    //trying to create a "triangle" of distance that gets smaller every line
        int j=8; 
    for (x=0; x<j; x++) {
        printf("%s", space);
        j--;
    }
        
    //figuring out how to build from blocks and operate with lines
    while (i<3) {
        printf("%s", space); //j times, j--
        printf("%s", line1);
        strcpy(block1,line1); 
        strcat(block1, line1);
//        strcpy(line1, line1); try adding line1 to line1 in a loop? while/for?
//        strcat(line1, line2);
        i++;
    }

        return 0;
}
