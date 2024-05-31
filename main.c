#include <stdio.h>                                                 // Aryan     63603     9999     90000     900009     
#include <conio.h>                                                 // Puneet    64908     8888     80000     800008
#include <stdlib.h>                                                // Sidh      64376     7777     70000     700007

void printMainMenu();

int main(){
    long cID, amount_s, amount_c, deposit, withdraw, transfer;     // Savings   W20000   D30000   T50000  
    char acctype;                                                  // Current   W40000   D50000   T100000
    int choice, pin, repeat = 1;

    int choice5, b_acc4, npin7, opin7;

    char transaction;

    CID: printf("\nENTER THE CUSTOMER ID : ");
    scanf("%d", &cID);

    printf("\n");

    if(cID == 63603){
        printf("----------HELLO ARYAN AGGARWAL!----------\n\n");
        amount_s = 90000;
        amount_c = 900009;
        while (pin != 9999){
		    printf("ENTER YOUR SECRET PIN NUMBER : ");
		    scanf("%d", &pin);
            printf("\n");
		    if (pin != 9999){
		        printf("WRONG!! PLEASE ENTER CORRECT PIN NUMBER\n");
            }
        }
    }
    else if(cID == 64908){
        printf("----------HELLO PUNEET SINGH JADAUN!----------\n\n");
        amount_s = 80000;
        amount_c = 800008;
        while (pin != 8888){
            printf("ENTER YOUR SECRET PIN NUMBER : ");
            scanf("%d", &pin);
            printf("\n");
            if (pin != 8888){
                printf("WRONG!! PLEASE ENTER CORRECT PIN NUMBER\n");
            }
	    }
    }
    else if(cID == 64376){
        printf("----------HELLO SIDH DHIMAN!----------\n\n");
        amount_s = 70000;
        amount_c = 700007;
        while (pin != 7777){
            printf("ENTER YOUR SECRET PIN NUMBER : ");
            scanf("%d", &pin);
            printf("\n");
            if (pin != 7777){
                printf("WRONG!! PLEASE ENTER CORRECT PIN NUMBER\n");
            }
	    }
    }
    else{
        printf("INVALID!! PLEASE ENTER VALID CUSTOMER ID\n\n");
        goto CID;
    }

    AccType: 
    printf("SELECT 's' FOR SAVINGS ACCOUNT \n");
    printf("SELECT 'c' FOR CURRENT ACCOUNT \n\n");

    printf("SELECT THE ACCOUNT TYPE(s/c) : ");
    fflush(stdin);
    scanf("%c", &acctype);

    printf("\n");

    system("cls");

    if(acctype == 's'){
        do{
            Mainmenu_s: printMainMenu();

            printf("Enter your Choice for Savings Account : ");
            scanf("%d", &choice);

            system("cls");

            switch (choice){
                case 1:
                    printf("\n");
                    printf("YOUR BALANCE IN Rs : %lu ", amount_s);
                    break;
                Withdraw_s: case 2:
                    printf("\n");
                    
                    printf("Enter the amount to withdraw : ");
                    scanf("%lu", &withdraw);
                    if (withdraw%100 != 0){
                        printf("\nPLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
                        goto Withdraw_s;
                    }
                    else if(withdraw > 20000){
                        printf("\nWITHDRAW LIMIT(20000) REACHED");
                        goto Withdraw_s;
                    }
                    else{
                        amount_s = amount_s - withdraw;
                        printf("\n\nPLEASE COLLECT CASH");
                        printf("\nYOUR REMAINING BALANCE IS %lu", amount_s);
                    }
                    break;
                Deposit_s: case 3:
                    printf("\n");
                    printf("Enter the amount to deposit : ");
                    scanf("%lu", &deposit);
                    if(deposit%100 != 0){
                        printf("\nPLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
                        goto Deposit_s;
                    }
                    else if(deposit > 30000){
                        printf("\nDEPOSIT LIMIT(30000) REACHED!");
                        goto Deposit_s;
                    }
                    else{
                        amount_s = amount_s + deposit;
                        printf("\n\nCASH DEPOSITED SUCCESSFULLY!!\n");
                        printf("YOUR UPDATED BALANCE IS %lu", amount_s);
                    }
                    break;
                    case 4:
                    printf("\n");
                    printf("Enter the beneficiary's account number : ");
                    scanf("%d", &b_acc4);
                    Transfer_s:
                    printf("\nEnter the amount to be transferred : ");
                    scanf("%lu", &transfer);                   
                    if(transfer > 50000){
                        printf("\nTRANSFER LIMIT(50000) REACHED!");
                        goto Transfer_s;
                    }
                    else{
                        amount_s = amount_s - transfer;
                        printf("\n\nFUND TRANSFERRED SUCCESSFULLY!!\n");
                        printf("YOUR REMAINING BALANCE IS %lu", amount_s);
                    }
                    break;
                case 5:
                    printf("\n");
                    printf("PLEASE COLLECT YOUR MINI STATEMENT");
                    break;
                Quickwithdrawl_s: case 6:
                    printf("\n");
                    printf("1. 5000\n");
                    printf("2. 10000\n");
                    printf("3. 15000\n");
                    printf("4. 20000\n");
                    printf("5. Go back to MainMenu\n\n");
                    printf("Enter your Choice : ");
                    scanf("%d", &choice5);
                    switch(choice5){
                        case 1:
                            if(5000 > amount_s){
                                printf("\nINSUFFICENT BALANCE!\n\n");
                                goto Quickwithdrawl_s;
                            }
                            else{
                                amount_s = amount_s - 5000;
                                printf("\n\nPLEASE COLLECT CASH");
                                printf("\nYOUR REMAINING BALANCE IS %lu ", amount_s);
                                break;
                            }
                        case 2:
                            if(10000 > amount_s){
                                printf("\nINSUFFICENT BALANCE!\n\n");
                                goto Quickwithdrawl_s;
                            }
                            else{
                                amount_s = amount_s - 10000;
                                printf("\n\nPLEASE COLLECT CASH");
                                printf("\nYOUR REMAINING BALANCE IS %lu ", amount_s);
                                break;
                            }
                        case 3:
                            if(15000 > amount_s){
                                printf("\nINSUFFICENT BALANCE!\n\n");
                                goto Quickwithdrawl_s;
                            }
                            else{
                                amount_s = amount_s - 15000;
                                printf("\n\nPLEASE COLLECT CASH");
                                printf("\nYOUR REMAINING BALANCE IS %lu ", amount_s);
                                break;
                            }
                        case 4:
                            if(20000 > amount_s){
                                printf("\nINSUFFICENT BALANCE!\n\n");
                                goto Quickwithdrawl_s;
                            }
                            else{
                                amount_s = amount_s - 20000;
                                printf("\n\nPLEASE COLLECT CASH");
                                printf("\nYOUR REMAINING BALANCE IS %lu ", amount_s);
                                break;
                            }
                        case 5:
                            system("cls");
                            goto Mainmenu_s;
                            break;
                        default:
                            printf("\n");
                            printf("NOT A VALID CHOICE!!");
                            goto Quickwithdrawl_s;
                            break;
                    }
                    break;
                Pinchange_s: case 7:
                    printf("\n");
                    printf("Enter your old pin : ");
                    scanf("%d",&opin7);
                    if(opin7==pin){
                        printf("Enter the new pin : ");
                        scanf("%d",&npin7);
                        printf("\n");
                        printf("PIN CHANGED SUCCESFULLY!!\n");
                    }
                    else{
                        printf("\nWRONG!! PLEASE ENTER CORRECT PIN NUMBER\n");
                        goto Pinchange_s;
                    }
                    break;
                case 8:
                    printf("\n");
                    goto AccType;
                    break;
                case 9:
                    printf("\n");
                    goto End;
                    break;
                default:
                    printf("\n");
                    printf("NOT A VALID CHOICE!!\n\n");
                    goto Mainmenu_s;
                    break;
            }
            printf("\n\n");

            Transaction_s: printf("DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): ");
            fflush(stdin);
            scanf("%c", &transaction);
            if(transaction == 'y'){
                repeat = 1;
            }
            else if(transaction == 'n'){
                repeat = 0;
            }
            else{
                printf("\nNOT A VALID CHOICE!!\n");
                goto Transaction_s;
            }

            system("cls");

            printf("\n");
        }
        while(repeat == 1);

    }
    else if(acctype == 'c'){
        do{
            Mainmenu_c: printMainMenu();

            printf("Enter your Choice for Current Account: ");
            scanf("%d", &choice);

            system("cls");

            switch (choice){
                case 1:
                    printf("\n");
                    printf("YOUR BALANCE IN Rs : %lu ", amount_c);
                    break;
                Withdraw_c: case 2:
                    printf("\n");
                    
                    printf("Enter the amount to withdraw : ");
                    scanf("%lu", &withdraw);
                    if (withdraw%100 != 0){
                        printf("\nPLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
                        goto Withdraw_c;
                    }
                    else if(withdraw > 40000){
                        printf("\nWITHDRAW LIMIT(40000) REACHED");
                        goto Withdraw_c;
                    }
                    else{
                        amount_c = amount_c - withdraw;
                        printf("\n\nPLEASE COLLECT CASH");
                        printf("\nYOUR REMAINING BALANCE IS %lu", amount_c);
                    }
                    break;
                Deposit_c: case 3:
                    printf("\n");
                    printf("Enter the amount to deposit : ");
                    scanf("%lu", &deposit);
                    if(deposit%100 != 0){
                        printf("\nPLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
                        goto Deposit_s;
                    }
                    else if(deposit > 50000){
                        printf("\nDEPOSIT LIMIT(50000) REACHED!");
                        goto Deposit_c;
                    }
                    else{
                        amount_c = amount_c + deposit;
                        printf("\n\nCASH DEPOSITED SUCCESSFULLY!!\n");
                        printf("YOUR UPDATED BALANCE IS %lu", amount_c);
                    }
                    break;
                case 4:
                    printf("\n");
                    printf("Enter the beneficiary's account number : ");
                    scanf("%d", &b_acc4);
                    Transfer_c:
                    printf("\nEnter the amount to be transferred : ");
                    scanf("%lu", &transfer);
                    if(transfer > 100000){
                        printf("\nTRANSFER LIMIT(100000) REACHED!");
                        goto Transfer_c;
                    }
                    else{
                        amount_s = amount_c - transfer;
                        printf("\n\nFUND TRANSFERRED SUCCESSFULLY!!\n");
                        printf("YOUR REMAINING BALANCE IS %lu", amount_c);
                    }
                    break;
                case 5:
                    printf("\n");
                    printf("PLEASE COLLECT YOUR MINI STATEMENT");
                    break;
                Quickwithdrawl_c: case 6:
                    printf("\n");
                    printf("1. 10000\n");
                    printf("2. 20000\n");
                    printf("3. 30000\n");
                    printf("4. 40000\n");
                    printf("5. Go back to MainMenu\n\n");
                    printf("Enter your Choice : ");
                    scanf("%d", &choice5);
                    switch(choice5){
                        case 1:
                            if(10000 > amount_s){
                                printf("\nINSUFFICENT BALANCE!\n\n");
                                goto Quickwithdrawl_s;
                            }
                            else{
                                amount_c = amount_c - 10000;
                                printf("\n\nPLEASE COLLECT CASH");
                                printf("\nYOUR REMAINING BALANCE IS %lu ", amount_c);
                                break;
                            }
                        case 2:
                            if(20000 > amount_s){
                                printf("\nINSUFFICENT BALANCE!\n\n");
                                goto Quickwithdrawl_s;
                            }
                            else{
                                amount_c = amount_c - 20000;
                                printf("\n\nPLEASE COLLECT CASH");
                                printf("\nYOUR REMAINING BALANCE IS %lu ", amount_c);
                                break;
                            }
                        case 3:
                            if(30000 > amount_s){
                                printf("\nINSUFFICENT BALANCE!\n\n");
                                goto Quickwithdrawl_s;
                            }
                            else{
                                amount_c = amount_c - 30000;
                                printf("\n\nPLEASE COLLECT CASH");
                                printf("\nYOUR REMAINING BALANCE IS %lu ", amount_c);
                                break;
                            }
                        case 4:
                            if(40000 > amount_s){
                                printf("\nINSUFFICENT BALANCE!\n\n");
                                goto Quickwithdrawl_s;
                            }
                            else{
                                amount_c = amount_c - 40000;
                                printf("\n\nPLEASE COLLECT CASH");
                                printf("\nYOUR REMAINING BALANCE IS %lu ", amount_c);
                                break;
                            }
                        case 5:
                            system("cls");
                            goto Mainmenu_c;
                            break;
                        default:
                            printf("\n");
                            printf("NOT A VALID CHOICE!!");
                            goto Quickwithdrawl_c;
                            break;
                    }
                    break;
                Pinchange_c: case 7:
                    printf("\n");
                    printf("Enter your old pin : ");
                    scanf("%d",&pin);
                    if(pin==9999){
                        printf("Enter the new pin : ");
                        scanf("%d",&npin7);
                        printf("\n");
                        printf("PIN CHANGED SUCCESFULLY!!\n");
                    }
                    else{
                        printf("\nWRONG!! PLEASE ENTER CORRECT PIN NUMBER\n");
                        goto Pinchange_c;
                    }
                    break;
                case 8:
                    printf("\n");
                    goto AccType;
                    break;
                case 9:
                    printf("\n");
                    goto End;
                    break;
                default:
                    printf("\n");
                    printf("NOT A VALID CHOICE!!\n\n");
                    goto Mainmenu_c;
                    break;
            }
            printf("\n\n");

            Transaction_c: printf("DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): ");
            fflush(stdin);
            scanf("%c", &transaction);
            if(transaction == 'y'){
                repeat = 1;
            }
            else if(transaction == 'n'){
                repeat = 0;
            }
            else{
                printf("\nNOT A VALID CHOICE!!\n");
                goto Transaction_c;
            }

            system("cls");

            printf("\n");
        }
        while(repeat == 1);
    
    }
    else{
        printf("NOT A VALID CHOICE!!\n\n");
        goto AccType;
    }
    
    End: printf("THANKS FOR USING OUT ATM SERVICE\n\n");
    return 0;
}

void printMainMenu(){
    printf("**************Welcome to ATM Service**************\n");
	printf("1. Check Balance\n");
	printf("2. Withdraw Cash\n");
	printf("3. Deposit Cash\n");
    printf("4. Fund Tranfer\n");
    printf("5. Mini Statement\n");
    printf("6. Quick Withdrawl\n");
    printf("7. Pin Change\n");
	printf("8. Change Account Type\n");
    printf("9. Exit\n");
	printf("**************************************************\n\n");
}
