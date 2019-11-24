#include <stdio.h>

double accounts[50][2];

void O(double iv)
{
	for (int i = 0; (i < 50) ; i++){
		if( accounts[i][0] == 0){
			accounts[i][0] = 1;
			accounts[i][1] = iv;
			printf("The new bank number is: %i\n",i+901);			  
			break;
		}		
	}
	if(accounts[49][0] == 1 ){
		printf("there is no place for another accont\n");
	}				  	
}

void B(int accountNumber){ //Return the balance
if((accountNumber < 901) || (accountNumber > 950)){
	 printf("There is no account like typed\n");
	 return;
}
if(accounts[accountNumber-901][0] == 1){     
	printf("The balance is: %0.2lf\n", accounts[accountNumber-901][1]); 
	}
else{
	printf("This account is closed\n");
	}		
}

void D(int accountNumber ,double sum){ //return the new balance //added input test //english repair
	if((accountNumber < 901) || (accountNumber > 950)){
	 printf("there is no num account like typed\n ");
	return;
	}
    if (sum < 0)
    {
       printf("can't be enterd negtive sum\n");
       return;
    }    
	if(accounts[accountNumber-901][0] == 1){	    
	 printf("The new balance after the deposit is:	%0.2lf\n",(accounts[accountNumber-901][1] + sum)); 
	 accounts[accountNumber-901][1] = accounts[accountNumber-901][1] + sum ;
	}
	else
	 printf("The bank account is closed\n");	
}

void W(int accountNumber ,double sum){ 	//return the new balance //added 2 input test
	if((accountNumber < 901) || (accountNumber > 950)){
	printf("there is no num account like typed\n");
	return;
	}
	if (sum < 0)
    {
       printf("can't be enterd negtive sum\n");
       return;
    }

	if((accounts[accountNumber-901][0] == 1) ){
		if (((accounts[accountNumber-901][1] - sum) >= 0))
		{
			printf("The new balance after the pull is:%0.2lf\n",(accounts[accountNumber-901][1] - sum)); 
	 		accounts[accountNumber-901][1] = accounts[accountNumber-901][1] - sum ;
		}
		else
			printf("not enough money in the account");
	}
		else
	 	printf("The bank account is closed\n there is no money to pull\n");
}

void C(int accountNumber){	// close an open account //deleted spare line	
	if((accountNumber < 901) || (accountNumber > 950))
	{
		 printf("there is no num account like typed\n");
		 return;
	}
	if (accounts[accountNumber-901][0] == 1 )
	{
		accounts[accountNumber-901][0] == 0 ;
		accounts[accountNumber-901][1] == 0 ;
	}
	else
	printf("This account is alreay closed.\n");
}


void I(double percent){ //add money by percent 
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


void P(){  // print the whole open accounts //english repaired
	for (int i = 0; i < 50; i++){	
		if (accounts[i][0] == 1)
		{
			printf("%i) account num: %i,The Balance is:%0.2lf\n" ,i+1,901+i ,accounts[i][1]);
		}
	}
}


void E(){	// close all the opened account
for (int i = 0; i < 50; i++){	
		if (accounts[i][0] == 1)
		{
			accounts[i][0] = 0 ;
			accounts[i][1] = 0 ;
		}
	}
	printf("All acounts have closed\n");
}

