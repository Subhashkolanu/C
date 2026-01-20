#include <stdio.h>

int main()
{
    int roll_no, Password;
    char *

    printf("WELCOME TO VVIT!\n");

    // No need to write roll_no in printf
    printf("Enter your last 3 digits roll no: ");
    scanf("%d", &roll_no);

    // ? Remove the semicolon after if
    if (roll_no != 480)
    {
        printf("Wrong ID!\n");
    }
    else
    {
        printf("Enter Password: ");
        scanf("%d", &Password);

        if (Password == 2025)
        {
            printf("Welcome *Subhash* :)\n");
        }
        else
        {
            printf("Incorrect password, try again.\n");
        }
    }

    return 0;
}
