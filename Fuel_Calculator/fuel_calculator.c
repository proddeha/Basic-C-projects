#include <stdio.h>
#include <string.h>

int main()
{
    float x=0.00,xlm=0.00,kat=0.00,timi=0.00,sum1=0.00,sum2=100;
    int vdom,minas;
    char strr[30];
    printf("Υπολογισμος Κοστου Καταναλωσης βενζινης ανα διαδρομη \n");
    printf("\nΔωσε Μου Την τιμη του λιτρου βενζινης : ");
    scanf("%f",&timi);
    printf("\nΔωσε Μου Την καταναλωση ανα 100χλμ : ");
    scanf("%f",&kat);
    printf("\nΔωσε Μου Τα χιλιομετρα τα οποια εκανες εκεινη την διαδρομη: ");
    scanf("%f",&xlm);
    sum1=kat*xlm;
    sum2=sum1/sum2;
    x=sum2*timi;
    printf("\nΤα λιτρα τα οποια εκαψες ειναι %g , οποτε το συνολικο ποσο διαδρομης ειναι : %g ευρω",sum2,x);
    
    printf("\n\nΘα θελατε να υπολογιστει και το εβδομαδιαιο και μηνιαιο κοστος; ΑΠΑΝΤΗΣΗ ΜΕ 'ΝΑΙ' Η 'ΟΧΙ' : ");
    scanf("%s",&strr);
    if (strcmp (strr, "ΝΑΙ") == 0)
    {        
        vdom=x*5;
        minas=vdom*4;
        printf("\nΤο κοστος της βδομαδας ειναι %d ευρω , ενω το κοστος του μηνα ειναι %d ευρω ! ",vdom,minas);
    }
    else{
        printf("\nΚαλη συνεχεια! ");
    }
    return 0;
}





