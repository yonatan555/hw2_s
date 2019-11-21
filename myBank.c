#include "myBank.h"
#include <stdio.h>

double accounts[50][2];

void openAccount(double intialDeposit){	 //opening new account

	for (int i = 0; (i < 50) ; i++){
		if( accounts[i][0] == 0){
			accounts[i][0] = 1;
			accounts[i][1] = intialDeposit;
			printf("The new bank number is: %i\n",i+901);			  
			break;
		}		
	}
	if(accounts[49][0] == 1 ){
		printf("there is no place for another accont\n");
	}				  	
}

void balance(int accountNumber){ //Return the balance
if((accountNumber < 901) && (accountNumber > 950)){
	 printf("There is no account like typed\n");
	 return;
}
if(accounts[accountNumber-901][0] == 1){     
	printf("The new balance is: %0.2lf\n", accounts[accountNumber-901][1]); 
	}
else{
	printf("This account is closed\n");
	}		
}


void transfer(int accountNumber ,double sum){ //return the new balance
	if(((accountNumber < 901) && (accountNumber > 950)) || (sum <= 0)){
	 printf("there is no num account like typed\n /can't be enterd negtive sum\n");
	return;
}	
if(accounts[accountNumber-901][0] == 1){	    
	 printf("The new balance after the transfer is:	%0.2lf\n",(accounts[accountNumber-901][1] + sum)); 
	 accounts[accountNumber-901][1] = accounts[accountNumber-901][1] + sum ;
	}
	else{
	 printf("The bank account is closed\n");
	}
}

void pull(int accountNumber ,double sum){ 	//return the new balance
	if(((accountNumber < 901) && (accountNumber > 950)) || (sum <= 0)){
	 printf("there is no num account like typed\n /can't be enterd negtive sum\n");
	return;
}
if((accounts[accountNumber-901][0] == 1) && ((accounts[accountNumber-901][1] - sum) >= 0)){	    
	 printf("The new balance after the pull is:%0.2lf\n",(accounts[accountNumber-901][1] - sum)); 
	 accounts[accountNumber-901][1] = accounts[accountNumber-901][1] - sum ;
	}
	else{
	 printf("The bank account is closed\n there is no money to pull\n");
	}
}


void closeAccount(int accountNumber){	// close an open account	
	if(((accountNumber < 901) && (accountNumber > 950))){
		 printf("there is no num account like typed\n");
		 	return;
	}
if (accounts[accountNumber-901][0] == 1 ){
	accounts[accountNumber-901][0] == 0 ;
	accounts[accountNumber-901][1] == 0 ;
}
else{
	printf("This account is alreay closed.\n");
	}
}


void addDependPercent(double percent){ //add money by percent 
	if(percent < 0){
		printf("Cant enterd negtive percent\n");
	}
	for (int i = 0; i < 50; i++){
		if (accounts[i][0] == 1)
		{
			accounts[i][1] = (accounts[i][1]) + ((percent/100)*(accounts[i][1]));
		}
	}
}


void printall(){  // print the whole open accounts
	for (int i = 0; i < 50; i++){	
		if (accounts[i][0] == 1)
		{
			printf("%i) num account: %i,The Deposit is:%0.2lf\n" ,i+1,901+i ,accounts[i][1]);
		}
	}
}

void closeAllAccounts(){	// close an open account
for (int i = 0; i < 50; i++){
	
		if (accounts[i][0] == 1)
		{
			accounts[i][0] = 0 ;
			accounts[i][1] = 0 ;
		}
	}
	printf("All acounts have closed\n");
}


