#include "myBank.h"
#include <stdio.h>
int main()
{
	char option;
    int num = 0 ;
    int money;
    double percent;
    int num_account;
   	do
   	{
   	printf("Enter an option\nO-to open an account\n");
    printf("B-shows the current balnce for a current balance\nD-to transfer money for currnent account\n");
    printf("W-choose count of moeny u want to pull\nC-close a currnet Account\nI-add moeny depend on current depend \n");	
   	printf("P-To print the all acconts\nE-To close the all accounts:\n");	
    scanf(" %c", &option);	
   	switch(option)
    {
        case 'O':
        printf("enter an intialDeposit,for the new account \n");
        scanf("%d",&money);
        openAccount(money);   
        break;
       
        case 'B':
        printf("enter an num_account \n");
        scanf("%i", &num_account);
        balance(num_account);
        break;
       
        case 'D':
        printf("enter an num_account and sum of moeny u want to transfer \n");
        scanf("%i %d",&num_account,&money);
        transfer(num_account,money);
            break;
        
        case 'W':
        printf("enter an num_account and sum of moeny u want to pull \n");
        scanf("%i%d",&num_account,&money);
        pull(num_account,money);
            break;
       
        case 'C':
 		printf("enter an num_account u want to close \n");
        scanf("%i",&num_account);
        closeAccount(num_account);
        break;
       
        case 'I':
        printf("enter a percent u want to add to whole accounts \n");
        scanf("%le",&percent);
        addDependPercent(percent);   
        break;
       
        case 'P':
        printf("These are the whole accounts\n");
        printall();   
        break;

        case 'E':
        closeAllAccounts();
        num = 1 ;
        break;
       
        default:
        printf("Error! action is not correct");
   		break;
   		 }	
   }  while (num == 0);
    
return 0;
}