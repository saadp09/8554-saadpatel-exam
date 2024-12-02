

#include <stdio.h>

 void main()
{
    int num,count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num == 0) {
        count = 1;
    } else {
        
        while (num != 0) {
            num /= 10;  
            count++;       
        }
    }

    
    printf("The %d digits.\n", count);

    
}
