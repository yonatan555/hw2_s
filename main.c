#include <stdio.h>
#include "myBank.h"

void main()
{ 
      static double amount;
      static int account_number;
      char choice;
      int flag=1;
      static int inputCheck;

        do
        {
        printf("please enter a requsted opration:\n"
        "CLIENT OPERATIONS\n"
        "O-for opening a new bank account and deposit a inital value\n"
        "B-for viwoeing bank balance\n"
        "D-for deposit\n"
        "W-for withdrawal\n"
        "BANKER OPERATIONS\n"
        "C-for closing a bank account\n"
        "I-for adding an interface to all the account\n"
        "P-for printing all the accounts and their balance\n"
        "E-for closing all the account and exiting the program\n");
        scanf(" %c",&choice);
        switch (choice)
        { 
          case 'O':
          while(getchar()!='\n');
          printf("please enter a initial value for you bank account\n");
          inputCheck=scanf("%lf",&amount);
          if(inputCheck!=1)
          {
            printf("please do not enter any unnecessry data\n");
          }
          else
          {
            O(amount);
          }
          break;

          case 'B':
          while(getchar()!='\n');
          printf("please enter your bank account number\n");
          inputCheck=scanf("%d",&account_number);
          if(inputCheck!=1)
          {
            printf("please do not enter any unnecessry data\n");
          }
          else
          {
            B(account_number);
          }
          break;

          case 'D':
          while(getchar()!='\n');
          printf("please enter your bank account number and the requested value for deposit\n");
          inputCheck=scanf("%d%lf",&account_number,&amount);
          if(inputCheck !=2 )
          {
            printf("please do not enter any unnecessry data\n");
          }
          else
          {
            D(account_number,amount);
          }
          break;

          case 'W':
          while(getchar()!='\n');
          printf("please enter your bank account number and the requested value for withdrawal\n");
          inputCheck=scanf("%d%lf",&account_number,&amount);
          if(inputCheck!=2)
          {
            printf("please do not enter any unnecessry data\n");
          }
          else
          {
            W(account_number,amount);
          }
          break;

          case 'C':
          while(getchar()!='\n');
          printf("please enter the bank account number you want to close\n");
          inputCheck=scanf("%d",&account_number);
          if(inputCheck!=1)        
          {
            printf("please do not enter any unnecessry data\n");
          }
          else
          {
            C(account_number);
          }
          break;

          case 'I':
          while(getchar()!='\n');
          printf("please enter the requsted interest rate \n");
          double interestRate=0;
          inputCheck=scanf("%lf",&interestRate);
          if(inputCheck!=1)
          {
            printf("please do not enter any unnecessry data");
          }
          else
          {
            I(interestRate);
          }
          break;

          case 'P':
          P();
          break;

          case 'E':
          E();
          flag=0;
          break;

          default: printf("invalid opration\n");
          }
          while(getchar()!='\n');
        }
        while (flag);   
}