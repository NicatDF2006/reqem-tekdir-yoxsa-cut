#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    //burada 2 kod blokumuz var və bu kod blokları istifadəcidən rəqəm almaq ücün ordadılar
    printf("Reqem daxil edin: ");
    scanf("%d",&number);

    if(number <= 0) {
        printf("xais edirik natural eden girin\n");
    }
    else if (number % 2 == 0) {
        printf("reqem cutdur\n");
    }
    else {
        printf("reqem tekdir\n");
    }
    return 0;
}
