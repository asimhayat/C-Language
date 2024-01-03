#include<stdio.h>                                                                       
int main()                                                                     
{                                                                               
 int balance=0, deposit, withdraw;                                              
 float ci;                                                                      
 char op;                                                                   
 while(1)                                                                       
 {                                                                     
  printf("\nD =Deposit");                                                     
  printf("\nW =Withdraw");                                                    
  printf("\nB =Balance");
  printf("\nEnter operation: ");                                                
  scanf(" %c", &op);                                                            
  switch(op)                                                                    
  {                                                                             
   case 'D':                                                                    
     printf("\nEnter deposit amount: ");                                        
     scanf("%d", &deposit);                                                     
     balance += deposit;  
   case 'd':                                                                    
     printf("\nEnter deposit amount: ");                                        
     scanf("%d", &deposit);                                                     
     balance += deposit;                                                        
     break;                                                                     
   case 'W':                                                                    
     printf("\nEnter withdraw amount: ");                                       
     scanf("%d", &withdraw);                                                    
     balance -= withdraw;                                                       
     break; 
	 case 'w':                                                                    
     printf("\nEnter withdraw amount: ");                                       
     scanf("%d", &withdraw);                                                    
     balance -= withdraw;                                                       
     break;                                                                      
   case 'B':                                                                    
     printf("Balance: %d", balance);                                            
     break;       
	case 'b':                                                                    
     printf("Balance: %d", balance);                                            
     break;                                                                                          
   default:                                                                     
     printf("Invalid Operation!");                                              
  }                                                                             
 }         
 return 0;                                                                     
}
