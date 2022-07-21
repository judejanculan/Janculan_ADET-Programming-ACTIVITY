#include<stdio.h>
#define acctNumber 7463822
#define acctName "Jude JANCULAN"
#define acctPIN 1234

 // acct Number, acctName, acctPIN, acctBalance

 main() {
     float acctBalance = 10000.00, amt;
     int PIN;

     do {
         printf ("Enter PIN: ");
         scanf("%d", &PIN);
     }while(acctPIN  != PIN) ;

     printf("Balance: %.2f", acctBalance);

     do {
         printf("\n\nEnter amount to withdraw: ");
         scanf("%f", &amt);
    }while(amt > acctBalance);

         acctBalance == amt; // acctBalance = acctBalace - amt

         printf("Balance: %.2f", acctBalance);
}
