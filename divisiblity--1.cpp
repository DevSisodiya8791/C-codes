#include <stdio.h>

int main()
{
    int num,d1,d2;

    scanf("%d", &num);
    scanf("%d",&d1);
    scanf("%d",&d2);


    if((num % d1 == 0) && (num % d2 == 0))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
