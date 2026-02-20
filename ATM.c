#include<stdio.h>
int main(){
int opt , pin , bal=10000000;
printf("--------WELCOME TO ATM-------- \n");
printf("***CHOOSE A SERVICE*** \n \n");
printf("account no:-xxxxxxxx4356 \n");//Pin - 1234
printf("[Press 1 for BALANCE ENQUIRE] \t [Press 2 for CASH WITHDRAWAL]\n[ Press 3 for CASH DEPOSITE ]\t[Press 4 for FUND TRANSFER] \n");
printf("[Press 5 to Exit]");
printf("Enter no. - ");
scanf("%d", &opt);
int i = 1;
do{
switch(opt){

    case 1 :
    printf("Enter pin : ");
    scanf("%d", &pin);
    if(pin == 1234){
        printf("Your Account Balance : 10000000");
    }
    else{
        printf("***WRONG PIN , ENTER CORRECT PIN AND RETRY***");
    }
    break;

    case 2 :
    printf("Enter pin : ");
    scanf("%d", &pin);
    if(pin == 1234){
    printf("Enter Amount to be Withdrawal : ");
    int amt;
    scanf("%d", &amt);
    if(amt > bal){
        printf("~INVALID NO. OF AMOUNT ENTERED~");
    }
    else{
    bal = bal-amt;
    printf("AMOUNT LEFTOUT : %d", bal);
    }
    }
    else{
        ("***WRONG PIN , ENTER CORRECT PIN AND RETRY***");
    }
    break;

    case 3 :
    printf("Enter pin : ");
    scanf("%d", &pin);
    if(pin == 1234){
        printf("Enter amount to be Deposited : ");
        int dep;
        scanf("%d", &dep);
        bal = bal + dep;
        printf("TOTAL BALANCE : %d", bal);
    }
    else{
        printf("***WRONG PIN , ENTER CORRECT PIN AND RETRY***");
    }
    break;
    
    case 4 :
    printf("Enter pin : ");
    scanf("%d", &pin);
    if(pin == 1234){
        printf("Enter amount to be Transferred : ");
         int tra;
         scanf("%d", &tra);
        printf("Enter Account No. : ");
        int acc;
        scanf("%d", &acc);
    
       if(tra>bal){
        printf("~INVALID NO. OF AMOUNT ENTERED~");
    }
    else{
    bal = bal-tra;
    printf("AMOUNT TRANSFERRED SUCCESFULLY!!! TO ACCOUNT NO.: %d \n", acc);
    printf("AMOUNT LEFTOUT : %d", bal);
    }
    }
    else{
        printf("***WRONG PIN , ENTER CORRECT PIN AND RETRY***");
    }
    break;

    default :
    printf("INVALID SERVICE");
    break;
}
if(opt==5){
    break;
}
} while(i<0);

return 0;
}