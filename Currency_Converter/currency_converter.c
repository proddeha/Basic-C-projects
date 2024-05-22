#include <stdio.h>
#include <string.h>
int main()
{
    char str1[30],epilogi[4];
    float dollar=1.01,rouble=61.42,gbp=0.87,yuan=7.30;
    printf("    {MΕΤΑΤΡΟΠΕΑΣ ΝΟΜΙΣΜΑΤΟΣ}\n\n");
    printf("Oι Επιλογες σας ειναι :\nΑπο ευρω σε δολαριο\nΑπο ευρω σε ρουβλι\nΑπο ευρω σε λιρα\nΑπο ευρω σε γουαν\n");
    pali :
    printf("\nΜΕΤΑΤΡΩΠΗ ΑΠΟ ΕΥΡΩ ΣΕ : ");
    scanf("%s",str1);

    if (strcmp(str1, "δολαριο") == 0)
    {
        float x,eu;
        printf("Γραψε το ποσο μετατρωπης σε ευρω :");
        scanf("%f",&eu);
        x=eu*dollar;
        printf("Τα %g ευρω μεταφραζονται σε %g %s/α",eu,x,str1);
    }
    else if (strcmp(str1, "ρουβλι") == 0)
    {
        float x,eu;
        printf("Γραψε το ποσο μετατρωπης σε ευρω :");
        scanf("%f",&eu);
        x=eu*rouble;
        printf("Τα %g ευρω μεταφραζονται σε %g %s/α",eu,x,str1);
    }
    else if (strcmp(str1, "λιρα") == 0)
    {
        float x,eu;
        printf("Γραψε το ποσο μετατρωπης σε ευρω :");
        scanf("%f",&eu);
        x=eu*gbp;
        printf("Τα %g ευρω μεταφραζονται σε %g %s/ες",eu,x,str1);
    }
    else if (strcmp(str1, "γουαν") == 0)
    {
        float x,eu;
        printf("Γραψε το ποσο μετατρωπης σε ευρω :");
        scanf("%f",&eu);
        x=eu*yuan;
        printf("Τα %g ευρω μεταφραζονται σε %g %s",eu,x,str1);
    }
    else
    {
     printf("\nλαθος,Προσπαθηστε ξανα!\n\n");
     goto pali;
    }
    printf("\n\nθα θελατε να κανετε και αλλη μετατρωπη; : ");
    pali2 :
    scanf("%s",epilogi);
    if (strcmp(epilogi, "ναι") == 0)
    {
        goto pali;
    }
    else if(strcmp(epilogi, "οχι") == 0)
        {
            printf("καλη συνεχεια!");
        }
    else {
        printf("λαθος επιλογη, παρακαλω διαλεξτε ναι η οχι !");
        goto pali2;
    }
    return 0;
}

