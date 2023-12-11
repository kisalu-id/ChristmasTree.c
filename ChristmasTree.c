#include <stdio.h>
#include <string.h>

int main () {
    
    int i, x;
    int j = 2;
    char space[] = "   ";
    char top[] = "*\n";
    char line1[50] = "  / \\  ";
    char line2[50] = " / o \\ ";
    char line3[50] = "+++++++";

    //spacing for top
    for (x = 0; x<3; x++) {
        printf ("%s", space);
    }
    
    printf ("%s", top);
  
  //here big loop
    for (i = 0; i < 3; i++) {
        
        //trying to create a distance that gets smaller every 3 lines
///*
        for (x = 0; x<j; x++) {
            printf ("%s", space);
        }
//*/ 

        //figuring out how to build from blocks and operate with lines
        
        //copy line1 to line1, then as next step adding line1 to that
        printf ("%s", line1);
        strcat (line1, "  / \\  ");
        printf ("\n");
        
        for (x = 0; x<j; x++) {
            printf ("%s", space);
        }

        printf ("%s", line2);
        strcat (line2, " / o \\");
        printf ("\n");
        
        for (x = 0; x<j; x++) {
            printf ("%s", space);
        }
        
        printf ("%s", line3);
        strcat (line3, "+++++++");
        printf ("\n");
        
        j--;

    }
    
    return 0;
}
