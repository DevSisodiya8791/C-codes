#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    int feet,inches;
        
        scanf("%d",&feet);
        
        //converting into inches
        inches=feet*12;
        
        printf("%d\n",inches);
        
    return 0;
}

