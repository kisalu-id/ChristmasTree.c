#include <stdio.h>
#include <string.h>

int main () {
    
    int i, x;
    int j = 2;
    char space[] = "XXX";
    char top[] = "         *         \n";
    char line1[] = "  / \\  ";
    char line2[] = " / o \\ ";
    char line3[] = "+++++++";

    printf ("%s", top);
  
  //here big loop
    for (i = 0; i < 3; i++) {
        
        //trying to create a "triangle" of distance that gets smaller every line
        //edit later according to new spacing
/*        for (x = 0; x<j; x++) {
            printf ("%s", space);
        }
        */
        
        //figuring out how to build from blocks and operate with lines
        
        //copy line1 to line1, then as next step adding line1 to that
        printf ("%s", line1);
        strcat (line1, "  / \\  ");
        printf ("\n");
        
        //for checking
        printf ("newline\n\n");
          
        printf ("%s", line2);
        strcat (line2, " / o \\ ");
        printf ("\n");
          
        printf ("%s", line3);
        strcat (line3, "+++++++");
        printf ("\n");
        
        j--;

    }

    return 0;
}
