#include <stdio.h>
#include <string.h>
 int main() {

    printf("//AIRTEL USSD CODE *117#\n");

    char ussd[117];

    //The system asks the user to enter the ussd code
    printf("Enter Ussd Code: ");
    scanf("%s", ussd);

    if (strcmp(ussd, "*117#") == 0) {
            printf("\n1. Ikali Data and Voice\n");
            printf("2. Airtel Soche Pack\n");      //If the ussd code which is '*117#' is correct
            printf("3. All Networks Soche\n");      //this block of messages is
            printf("4. Data Packs\n");              //printed out.
            printf("5. Buy for Other\n");
            printf("6. Balance Check\n");           //Main '*117#'
            printf("7. Night Data\n");
            printf("8. Siliza Airtime Loan\n");
            printf("n Next\n");

    }
    else if (strcmp(ussd, "*117#") != 0) {
            printf("\nInvalid Ussd Code\n"); //If the ussd code which is '*117#' is incorrect
                                            //the Invalid message is printed out.
    }

    int num1;
    printf("\nSelect: ");       //Asking the user to select
    scanf("%d", &num1);         //or choose from the above options e.g 2. Airtel Soche Pack

    switch(num1) {
    case 1:
        printf("\n1. K5=45 Airtel Min,24Hrs\n");
        printf("2. K10=75 Airtel Min,7Days\n");     //Option 1
        printf("3. K10=100 Airtel Min,24Hrs\n");    //Option 1
        printf("4. K10=1.2GB,24Hrs\n");             //Option 1
        printf("5. K50=6GB,7Day\n");
        printf("6. K100=10GB,30Day\n");
        printf("7. K5=400MB,7Day\n\n");


        int opt1;
        printf("\nSelect: ");       //Asking the user to select
        scanf("%d", &opt1);         //or choose from option 1

        if(opt1==1) {       //If the user selects 1 from option 1
            printf("\n1. Main Account\n2. Airtel Money\n");  //These messages are printed out if the user selects 1

            int opt2;
            printf("\nSelect: ");       //Asking the user to select from the messages printed out e.g Airtel Money
            scanf("%d", &opt2);

            switch(opt2) {
            case 1:                 //If the user selects Main Account this block of code is printed out.
                printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                break;
            case 2:     //If the use selects Airtel Money this block of code below is printed out
                printf("\nEnter PIN: ");
                int pin;            //Asking the user to enter their pin
                scanf("%d", &pin);

                printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                break;

            }
        }
        else if (opt1==2) {       //If the user selects 2 from option 1
            printf("\n1. Main Account\n2. Airtel Money\n");

            int opt3;
            printf("\nSelect: ");
            scanf("%d", &opt3);

            switch(opt3) {
            case 1:
                printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                break;
            case 2:
                printf("\nEnter PIN: ");
                int pin2;
                scanf("%d", &pin2);

                printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                break;

            }
        }
        else if (opt1==3) {     //If the user selects 3 from option 1
            printf("\n1. Main Account\n2. Airtel Money\n");

            int opt4;
            printf("\nSelect: ");
            scanf("%d", &opt4);

            switch(opt4) {
            case 1:
                printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                break;
            case 2:
                printf("\nEnter PIN: ");
                int pin3;
                scanf("%d", &pin3);

                printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                break;

            }
        }
        else if (opt1==4) {     //If the user selects 4 from option 1
            printf("\n1. Main Account\n2. Airtel Money\n");

            int opt5;
            printf("\nSelect: ");
            scanf("%d", &opt5);

            switch(opt5) {
            case 1:
                printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                break;
            case 2:
                printf("\nEnter PIN: ");
                int pin4;
                scanf("%d", &pin4);

                printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                break;

            }
        }
        else if (opt1==5) {     //If the user selects 5 from option 1
            printf("\n1. Main Account\n2. Airtel Money\n");

            int opt6;
            printf("\nSelect: ");
            scanf("%d", &opt6);

            switch(opt6) {
            case 1:
                printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                break;
            case 2:
                printf("\nEnter PIN: ");
                int pin5;
                scanf("%d", &pin5);

                printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                break;

            }
        }
        else if (opt1==6) {     //If the user selects 6 from option 1
            printf("\n1. Main Account\n2. Airtel Money\n");

            int opt7;
            printf("\nSelect: ");
            scanf("%d", &opt7);

            switch(opt7) {
            case 1:
                printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                break;
            case 2:
                printf("\nEnter PIN: ");
                int pin6;
                scanf("%d", &pin6);

                printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                break;

            }
        }
        else if (opt1==7) {     //If the user selects 7 from option 1
            printf("\n1. Main Account\n2. Airtel Money\n");

            int opt8;
            printf("\nSelect: ");
            scanf("%d", &opt8);

            switch(opt8) {
            case 1:
                printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                break;
            case 2:
                printf("\nEnter PIN: ");
                int pin7;
                scanf("%d", &pin7);

                printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                break;

            }
        }

        break;
    case 2:     //If the user selects 2 from the main option this block of code below is printed out
        printf("\n1. For 24hours Daily Pack\n2. For Weekly Pack\n3. For Monthly Pack\n0 Return to main menu\n");  //Option 2

         int opt9;
         printf("\nSelect: ");  //Asking the user to select from
         scanf("%d", &opt9);    //option 2

         if(opt9==1) {      //If the user selects 1 from option 2 the code below is printed out e.g  3. K10=90Min+50MB...
            printf("\n1. K2=9Min+100SMS\n2. K5=36Min+20MB+250SMS\n3. K10=90Min+50MB+500SMS\n0 Return to main menu\n");

            int opt10;
            printf("\nSelect: ");
            scanf("%d", &opt10);

            switch(opt10) {
            case 1:
                printf("1. Main Account\n2. Airtel Money\n0 Return to main menu\n");

                int opt11;
                printf("\nSelect: ");
                scanf("%d", &opt11);

                if(opt11==1) {
                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon\n");

                }
                else if(opt11==2) {
                    printf("\nEnter PIN: ");
                    int pin8;
                    scanf("%d", &pin8);

                    printf("\nYour transaction is being processed.\nYou will receive a confirmation message soon\n");
                }
                else if (opt11==0) {
                    printf("\n1. Ikali Data and Voice\n");
                    printf("2. Airtel Soche Pack\n");
                    printf("3. All Networks Soche\n");
                    printf("4. Data Packs\n");
                    printf("5. Buy for Other\n");
                    printf("6. Balance Check\n");
                    printf("7. Night Data\n");
                    printf("8. Siliza Airtime Loan\n");
                    printf("n Next\n");

                }
                break;
            case 2:
                printf("\n1. Main Account\n2. Airtel Money\n0 Return to main menu\n");

                int opt12;
                printf("\nSelect: ");
                scanf("%d", &opt12);

                if(opt12==1) {
                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                }
                else if(opt12==2) {
                    printf("\nEnter PIN: ");
                    int pin9;
                    scanf("%d", &pin9);

                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                }
                else if(opt12==0) {
                    printf("\n1. Ikali Data and Voice\n");
                    printf("\n1. Ikali Data and Voice\n");
                    printf("2. Airtel Soche Pack\n");
                    printf("3. All Networks Soche\n");
                    printf("4. Data Packs\n");
                    printf("5. Buy for Other\n");
                    printf("6. Balance Check\n");
                    printf("7. Night Data\n");
                    printf("8. Siliza Airtime Loan\n");
                    printf("n Next\n");

                }
                break;
            case 3:
                printf("\n1. Main Account\n2. Airtel Money\n0 Return to main menu");
                int opt13;
                printf("\nSelect: ");
                scanf("%d", &opt13);

                if(opt13==1) {
                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");

                }
                else if(opt13==2) {
                    printf("\nSelect: ");
                    int pin10;
                    scanf("%d", &pin10);

                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon\n");
                }
                else if(opt13==0) {
                    printf("\n1. Ikali Data and Voice\n");
                    printf("2. Airtel Soche Pack\n");
                    printf("3. All Networks Soche\n");
                    printf("4. Data Packs\n");
                    printf("5. Buy for Other\n");
                    printf("6. Balance Check\n");
                    printf("7. Night Data\n");
                    printf("8. Siliza Airtime Loan\n");
                    printf("n Next\n");

                }
                break;
            case 0:
                printf("\n1. Ikali Data and Voice\n");
                printf("2. Airtel Soche Pack\n");
                printf("3. All Networks Soche\n");
                printf("4. Data Packs\n");
                printf("5. Buy for Other\n");
                printf("6. Balance Check\n");
                printf("7. Night Data\n");
                printf("8. Siliza Airtime Loan\n");
                printf("n Next\n");
                break;

            }

         }

         else if(opt9==2) {
            printf("\n1. K20=180Min+100MB+500SMS\n2. K10=65Min+75MB+200SMS\n3. K5=20Min+100SMS\n0 Return to main menu\n");

            int opt14;
            printf("\nSelect: ");
            scanf("%d", &opt14);

            switch(opt14) {
            case 1:
                printf("\n1. Main Account\n2. Airtel Money\n0 Main Menu\n");

                int opt15;
                 printf("\nSelect: ");
                 scanf("%d", &opt15);

                 if(opt15==1) {
                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                 }
                 else if(opt15==2) {
                    printf("\nEnter PIN: ");

                    int pin11;
                    scanf("%d", &pin11);

                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                 }
                 else if(opt15==0) {
                    printf("\n1. Ikali Data and Voice\n");
                    printf("2. Airtel Soche Pack\n");
                    printf("3. All Networks Soche\n");
                    printf("4. Data Packs\n");
                    printf("5. Buy for Other\n");
                    printf("6. Balance Check\n");
                    printf("7. Night Data\n");
                    printf("8. Siliza Airtime Loan\n");
                    printf("n Next\n");

                 }
                 else {
                    printf("\nInvalid Input\n");
                 }
                 break;
            case 2:
                printf("\n1. Main Account\n2. Airtel Money\n0 Main Menu\n");

                int opt16;
                printf("\nSelect: ");
                scanf("%d", &opt16);

                if(opt16==1) {
                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n ");
                }
                else if(opt16==2) {
                    printf("\nEnter PIN: ");

                    int pin12;
                    scanf("%d", &pin12);

                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                }
                else if(opt16==0) {
                    printf("\n1. Ikali Data and Voice\n");
                    printf("2. Airtel Soche Pack\n");
                    printf("3. All Networks Soche\n");
                    printf("4. Data Packs\n");
                    printf("5. Buy for Other\n");
                    printf("6. Balance Check\n");
                    printf("7. Night Data\n");
                    printf("8. Siliza Airtime Loan\n");
                    printf("n Next\n");
                }
                else {
                    printf("\nInvalid Input\n");
                }
                break;
            case 3:
                printf("\n1. Main Account\n2. Airtel Money\n0 Main Menu\n");

                int opt17;
                printf("\nSelect: ");
                scanf("%d", &opt17);

                if(opt17==1) {
                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon\n");
                }
                else if(opt17==2) {
                    printf("\nEnter PIN: ");

                    int pin13;
                    scanf("%d", &pin13);

                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                }
                else if(opt17==0) {
                    printf("\n1. Ikali Data and Voice\n");
                    printf("2. Airtel Soche Pack\n");
                    printf("3. All Networks Soche\n");
                    printf("4. Data Packs\n");
                    printf("5. Buy for Other\n");
                    printf("6. Balance Check\n");
                    printf("7. Night Data\n");
                    printf("8. Siliza Airtime Loan\n");
                    printf("n Next\n");

                }
                break;
            case 0:
                printf("\n1. Ikali Data and Voice\n");
                printf("2. Airtel Soche Pack\n");
                printf("3. All Networks Soche\n");
                printf("4. Data Packs\n");
                printf("5. Buy for Other\n");
                printf("6. Balance Check\n");
                printf("7. Night Data\n");
                printf("8. Siliza Airtime Loan\n");
                printf("n Next\n");
                break;
            default:
                printf("\nInvalid Input\n");

         }
         }

         else if(opt9==3) {
            printf("\n1. K50=300Min+500MB+500SMS\n2. K100=800Min+1GB+1000SMS\n3. K200=2000Min+3GB+2000SMS\n0 Return to main menu\n");

            int opt18;
            printf("\nSelect: ");
            scanf("%d", &opt18);

            switch(opt18) {
            case 1:
               printf("\n1. Main Account\n2. Airtel Money\n0 Main Menu\n");

               int opt19;
               printf("\nSelect: ");
               scanf("%d", &opt19);

               if(opt19==1) {
                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon\n");

               }
               else if(opt19==2) {
                    printf("\nSelect: ");

                    int pin14;
                    scanf("%d", &pin14);

                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon\n");
               }
               else if(opt19==0) {
                    printf("\n1. Ikali Data and Voice\n");
                    printf("2. Airtel Soche Pack\n");
                    printf("3. All Networks Soche\n");
                    printf("4. Data Packs\n");
                    printf("5. Buy for Other\n");
                    printf("6. Balance Check\n");
                    printf("7. Night Data\n");
                    printf("8. Siliza Airtime Loan\n");
                    printf("n Next\n");
               }
               else {
                    printf("\nInvalid Input\n");
               }
               break;
            case 2:
                printf("\n1. Main Account\n2. Airtel Money\n0 Main Menu\n");

                int opt20;
                printf("\nSelect: ");
                scanf("%d", &opt20);

                if(opt20==1) {
                   printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon\n");
                }
                else if(opt20==2) {
                    printf("\nEnter PIN: ");

                    int pin15;
                    scanf("%d", &pin15);

                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon\n");
                }
                else if(opt20==0) {
                    printf("\n1. Ikali Data and Voice\n");
                    printf("2. Airtel Soche Pack\n");
                    printf("3. All Networks Soche\n");
                    printf("4. Data Packs\n");
                    printf("5. Buy for Other\n");
                    printf("6. Balance Check\n");
                    printf("7. Night Data\n");
                    printf("8. Siliza Airtime Loan\n");
                    printf("n Next\n");
                }
                else {
                    printf("\nInvalid Input\n");
                }
                break;
            case 3:
                printf("\n1. Main Account\n2. Airtel Money\n0 Main Menu\n");

                int opt21;
                printf("\nSelect: ");
                scanf("%d", &opt21);

                if(opt21==1) {
                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                }
                else if(opt21==2) {
                    printf("\nEnter PIN: ");

                    int pin16;
                    scanf("%d", &pin16);

                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                }
                else if(opt21==0) {
                    printf("\n1. Ikali Data and Voice\n");
                    printf("2. Airtel Soche Pack\n");
                    printf("3. All Networks Soche\n");
                    printf("4. Data Packs\n");
                    printf("5. Buy for Other\n");
                    printf("6. Balance Check\n");
                    printf("7. Night Data\n");
                    printf("8. Siliza Airtime Loan\n");
                    printf("n Next\n");
                }
                else {
                    printf("\nInvalid Input\n");
                }
                break;
            case 0:
                printf("\n1. Ikali Data and Voice\n");
                printf("2. Airtel Soche Pack\n");
                printf("3. All Networks Soche\n");
                printf("4. Data Packs\n");
                printf("5. Buy for Other\n");
                printf("6. Balance Check\n");
                printf("7. Night Data\n");
                printf("8. Siliza Airtime Loan\n");
                printf("n Next\n");
                break;
            default:
                printf("\nInvalid Input\n");
            }
         }
        break;
    case 3:     //If the user selects 3 from the main main, the code below is printed out
        printf("\n1. For 24hours Daily Pack\n2. For Weekly Pack\n3. For Monthly Pack\n0 Return to main menu\n");

        int num2;
        printf("\nSelect: ");
        scanf("%d", &num2);

        if(num2==1) {
            printf("\n1. k2=7Min+100SMS\n2. K5=26Min+20MB+250SMS\n3. K10=60Min+50MB+500SMS\n0 Return to main menu\n");

            int num3;
            printf("\nSelect: ");
            scanf("%d", &num3);

            switch(num3) {
            case 1:
                printf("\n1. Main Account\n2. Airtel Money\n0 Return to main menu\n");

                int num4;
                printf("\nSelect: ");
                scanf("%d", &num4);

                if(num4==1) {
                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                }
                else if(num4==2) {
                    printf("\nEnter PIN: ");

                    int pin17;
                    scanf("%d", &pin17);

                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                }
                else if(num4==0) {
                    printf("\n1. Ikali Data and Voice\n");
                    printf("2. Airtel Soche Pack\n");
                    printf("3. All Networks Soche\n");
                    printf("4. Data Packs\n");
                    printf("5. Buy for Other\n");
                    printf("6. Balance Check\n");
                    printf("7. Night Data\n");
                    printf("8. Siliza Airtime Loan\n");
                    printf("n Next\n");
                }
                else {
                    printf("\nInvalid Input\n");
                }
                break;
            case 2:
                printf("\n1. Main Account\n2. Airtel Money\n0 Return to main menu\n");

                int num5;
                printf("\nSelect: ");
                scanf("%d", &num5);

                if(num5==1) {
                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                }
                else if(num5==2) {
                    printf("\nEnter PIN: ");

                    int pin18;
                    scanf("%d", &pin18);

                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                }
                else if(num5==0) {
                    printf("\n1. Ikali Data and Voice\n");
                    printf("2. Airtel Soche Pack\n");
                    printf("3. All Networks Soche\n");
                    printf("4. Data Packs\n");
                    printf("5. Buy for Other\n");
                    printf("6. Balance Check\n");
                    printf("7. Night Data\n");
                    printf("8. Siliza Airtime Loan\n");
                    printf("n Next\n");
                }
                else {
                    printf("\nInvalid Input\n");
                }
                break;
            case 3:
                printf("\n1. Main Account\n2. Airtel Money\n0 Return to main menu\n");

                int num6;
                printf("\nSelect: ");
                scanf("%d", &num6);

                if(num6==1) {
                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                }
                else if(num6==2) {
                    printf("\nEnter PIN: ");

                    int pin19;
                    scanf("%d", &pin19);

                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                }
                else if(num6==0) {
                    printf("\n1. Ikali Data and Voice\n");
                    printf("2. Airtel Soche Pack\n");
                    printf("3. All Networks Soche\n");
                    printf("4. Data Packs\n");
                    printf("5. Buy for Other\n");
                    printf("6. Balance Check\n");
                    printf("7. Night Data\n");
                    printf("8. Siliza Airtime Loan\n");
                    printf("n Next\n");
                }
                else {
                    printf("\nInvalid Input\n");
                }
                break;
            case 0:
                printf("\n1. Ikali Data and Voice\n");
                printf("2. Airtel Soche Pack\n");
                printf("3. All Networks Soche\n");
                printf("4. Data Packs\n");
                printf("5. Buy for Other\n");
                printf("6. Balance Check\n");
                printf("7. Night Data\n");
                printf("8. Siliza Airtime Loan\n");
                printf("n Next\n");
                break;
            default:
                printf("\nInvalid Input\n");
            }
        }
        else if(num2==2) {
                printf("\n1. K50=350Min+250MB+500SMS\n2. K20=120Min+100MB+500SMS\n3. K10=45Min+75MB+200SMS\n4. K5=14Min+100SMS\n0 Return to main menu");

                int num7;
                printf("\nSelect: ");
                scanf("%d", &num7);

                switch(num7) {
                case 1:
                    printf("\n1. Main Account\n2. Airtel Money\n0 Return to main menu\n");

                    int num8;
                    printf("\nSelect: ");
                    scanf("%d", &num8);

                    if(num8==1) {
                       printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                    }
                    else if(num8==2) {
                        printf("\nEnter PIN: ");

                        int pin20;
                        scanf("%d", &pin20);

                        printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                    }
                    else if(num8==0) {
                         printf("\n1. Ikali Data and Voice\n");
                         printf("2. Airtel Soche Pack\n");
                         printf("3. All Networks Soche\n");
                         printf("4. Data Packs\n");
                         printf("5. Buy for Other\n");
                         printf("6. Balance Check\n");
                         printf("7. Night Data\n");
                         printf("8. Siliza Airtime Loan\n");
                         printf("n Next\n");
                    }
                    break;
                case 2:
                    printf("\n1. Main Account\n2. Airtel Money\n0 Return to main menu\n");

                    int num9;
                    printf("\nSelect: ");
                    scanf("%d", &num9);

                    if(num9==1) {
                        printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                    }
                    else if(num9==2) {
                        printf("\nEnter PIN: ");

                        int pin20;
                        scanf("%d", pin20);

                        printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                    }
                    else if(num9==0) {
                        printf("\n1. Ikali Data and Voice\n");
                        printf("2. Airtel Soche Pack\n");
                        printf("3. All Networks Soche\n");
                        printf("4. Data Packs\n");
                        printf("5. Buy for Other\n");
                        printf("6. Balance Check\n");
                        printf("7. Night Data\n");
                        printf("8. Siliza Airtime Loan\n");
                        printf("n Next\n");
                    }
                    else {
                        printf("\nInvalid Input\n");
                    }
                    break;
                case 3:
                    printf("\n1. Main Account\n2. Airtel Money\n0 Return to main menu\n");

                    int num10;
                    printf("\nSelect: ");
                    scanf("%d", &num10);

                    if(num10==1) {
                        printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                    }
                    else if(num10==2) {
                        printf("\nEnter PIN: ");

                        int pin21;
                        scanf("%d", &pin21);

                        printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                    }
                    else if(num10==0) {
                        printf("\n1. Ikali Data and Voice\n");
                        printf("2. Airtel Soche Pack\n");
                        printf("3. All Networks Soche\n");
                        printf("4. Data Packs\n");
                        printf("5. Buy for Other\n");
                        printf("6. Balance Check\n");
                        printf("7. Night Data\n");
                        printf("8. Siliza Airtime Loan\n");
                        printf("n Next\n");
                    }
                    else {
                        printf("\nInvalid Input\n");
                    }
                    break;
                case 4:
                    printf("\n1. Main Account\n2. Airtel Money\n0 Return to main menu\n");

                    int num11;
                    printf("\nSelect: ");
                    scanf("%d", &num11);

                    if(num11==1) {
                        printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                    }
                    else if(num11==2) {
                        printf("\nEnter PIN: ");

                        int pin22;
                        scanf("%d", &pin22);

                        printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                    }
                    else if(num11==0) {
                        printf("\n1. Ikali Data and Voice\n");
                        printf("2. Airtel Soche Pack\n");
                        printf("3. All Networks Soche\n");
                        printf("4. Data Packs\n");
                        printf("5. Buy for Other\n");
                        printf("6. Balance Check\n");
                        printf("7. Night Data\n");
                        printf("8. Siliza Airtime Loan\n");
                        printf("n Next\n");
                    }
                    else {
                        printf("\nInvalid Input\n");
                    }
                    break;
                case 0:
                    printf("\n1. Ikali Data and Voice\n");
                    printf("2. Airtel Soche Pack\n");
                    printf("3. All Networks Soche\n");
                    printf("4. Data Packs\n");
                    printf("5. Buy for Other\n");
                    printf("6. Balance Check\n");
                    printf("7. Night Data\n");
                    printf("8. Siliza Airtime Loan\n");
                    printf("n Next\n");

                }
                break;
                default:
                    printf("\nInvalid Input");


            }
        else if(num2==3) {
            printf("\n1. K50=200Mins+500MB+500SMS\n2. k100=500Min+1GB+1000SMS\n3. k200=1200Mins+3GB+2000SMS\n0 Return to main menu\n");

            int num12;
            printf("\nSelect: ");
            scanf("%d", &num12);

            switch(num12) {
            case 1:
                printf("\n1. Main Account\n2. Airtel Money\n0 Return to main menu\n");

                int num13;
                printf("\nSelect: ");
                scanf("%d", &num13);

                if(num13==1) {
                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");

                }
                else if(num13==2) {
                    printf("\nEnter PIN: ");

                    int pin23;
                    scanf("%d", &pin23);

                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                }
                else if(num13==0) {
                    printf("\n1. Ikali Data and Voice\n");
                    printf("2. Airtel Soche Pack\n");
                    printf("3. All Networks Soche\n");
                    printf("4. Data Packs\n");
                    printf("5. Buy for Other\n");
                    printf("6. Balance Check\n");
                    printf("7. Night Data\n");
                    printf("8. Siliza Airtime Loan\n");
                    printf("n Next\n");
                }
                else {
                    printf("\nInvalid Input\n");
                }
                break;
            case 2:
                printf("\n1. Main Account\n2. Airtel Money\n0 Return to main menu\n");

                int num14;
                printf("\nSelect: ");
                scanf("%d", &num14);

                if(num14==1) {
                   printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                }
                else if(num14==2) {
                    printf("\nEnter PIN: ");

                    int pin24;
                    scanf("%d", &pin24);

                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                }
                else if(num14==0) {
                    printf("\n1. Ikali Data and Voice\n");
                    printf("2. Airtel Soche Pack\n");
                    printf("3. All Networks Soche\n");
                    printf("4. Data Packs\n");
                    printf("5. Buy for Other\n");
                    printf("6. Balance Check\n");
                    printf("7. Night Data\n");
                    printf("8. Siliza Airtime Loan\n");
                    printf("n Next\n");
                }
                else {
                    printf("\nInvalid Input\n");
                }
                break;
            case 3:
                printf("\n1. Main Account\n2. Airtel Money\n0 Return to main menu\n");

                int num15;
                printf("\nSelect: ");
                scanf("%d", &num15);

                if(num15==1) {
                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                }
                else if(num15==2) {
                    printf("\nEnter PIN: ");

                    int pin25;
                    scanf("%d", &pin25);

                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                }
                else if(num15==0) {
                    printf("\n1. Ikali Data and Voice\n");
                    printf("2. Airtel Soche Pack\n");
                    printf("3. All Networks Soche\n");
                    printf("4. Data Packs\n");
                    printf("5. Buy for Other\n");
                    printf("6. Balance Check\n");
                    printf("7. Night Data\n");
                    printf("8. Siliza Airtime Loan\n");
                    printf("n Next\n");
                }
                break;
            case 0:
                printf("\n1. Ikali Data and Voice\n");
                printf("2. Airtel Soche Pack\n");
                printf("3. All Networks Soche\n");
                printf("4. Data Packs\n");
                printf("5. Buy for Other\n");
                printf("6. Balance Check\n");
                printf("7. Night Data\n");
                printf("8. Siliza Airtime Loan\n");
                printf("n Next\n");
                break;
            default:
                printf("\nInvalid Input\n");
            }
        }
        else if(num2==0) {
            printf("\n1. Ikali Data and Voice\n");
            printf("2. Airtel Soche Pack\n");
            printf("3. All Networks Soche\n");
            printf("4. Data Packs\n");
            printf("5. Buy for Other\n");
            printf("6. Balance Check\n");
            printf("7. Night Data\n");
            printf("8. Siliza Airtime Loan\n");
            printf("n Next\n");
        }
        break;
    case 4:
        printf("\n1. Ikali Data and Voice\n2. Tonse Internet Bundles\n3. Buy for other\n4. Check balance\n5. Cancel auto renewal\n");

        int data1;
        printf("\nSelect: ");
        scanf("%d", &data1);

        if(data1==1) {
            printf("\n1. k2=9 Airtel Min,24Hrs\n2. K5=45 Airtel Min,24Hrs\n3. K10=75 Airtel Min,7Days\n4. k10=1.2GB,24Hrs\n5. K50=5GB,7Day\n6. k100=10GB,30Day\n7. K5=400MB,7Day\n");

            int select;
            printf("\nSelect: ");
            scanf("%d", &select);

            switch(select) {
            case 1:
                printf("\n1. Main Account\n2. Airtel Money\n0 Return to main menu\n");

                int select2;
                printf("\nSelect: ");
                scanf("%d", &select2);

                if(select2==1) {
                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                }
                else if(select2==2) {
                    printf("\nEnter PIN: ");

                    int pin26;
                    scanf("%d", &pin26);

                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                }
                else if(select2==0) {
                    printf("\n1. Ikali Data and Voice\n");
                    printf("2. Airtel Soche Pack\n");
                    printf("3. All Networks Soche\n");
                    printf("4. Data Packs\n");
                    printf("5. Buy for Other\n");
                    printf("6. Balance Check\n");
                    printf("7. Night Data\n");
                    printf("8. Siliza Airtime Loan\n");
                    printf("n Next\n");
                }
                else {
                    printf("\nInvalid Input\n");
                }
                break;
            case 2:
               printf("\n1. Main Account\n2. Airtel Money\n0 Return to main menu\n");

               int select3;
               printf("\nSelect: ");
               scanf("%d", &select3);

               if(select3==1) {
                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");

               }
               else if(select3==2) {
                    printf("\nEnter PIN: ");

                    int pin27;
                    scanf("%d", &pin27);

                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
               }
               else if(select3==0) {
                    printf("\n1. Ikali Data and Voice\n");
                    printf("2. Airtel Soche Pack\n");
                    printf("3. All Networks Soche\n");
                    printf("4. Data Packs\n");
                    printf("5. Buy for Other\n");
                    printf("6. Balance Check\n");
                    printf("7. Night Data\n");
                    printf("8. Siliza Airtime Loan\n");
                    printf("n Next\n");
               }
               else {
                    printf("\nInvalid Input\n");
               }
               break;
            case 3:
                printf("\n1. Main Account\n2. Airtel Money\n0 Return to main menu\n");

                int select4;
                printf("\nSelect: ");
                scanf("%d", &select4);

                if(select4==1) {
                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                }
                else if(select4==2) {
                    printf("\nEnter PIN: ");

                    int pin28;
                    scanf("%d", &pin28);

                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                }
                else if(select4==0) {
                    printf("\n1. Ikali Data and Voice\n");
                    printf("2. Airtel Soche Pack\n");
                    printf("3. All Networks Soche\n");
                    printf("4. Data Packs\n");
                    printf("5. Buy for Other\n");
                    printf("6. Balance Check\n");
                    printf("7. Night Data\n");
                    printf("8. Siliza Airtime Loan\n");
                    printf("n Next\n");
                }
                else {
                    printf("\nInvalid Input\n");
                }
                break;
            case 4:
                printf("\n1. Main Account\n2. Airtel Money\n0 Return to main menu\n");

                int select5;
                printf("\nSelect: ");
                scanf("%d", &select5);

                if(select5==1) {
                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                }
                else if(select5==2) {
                    printf("\nEnter PIN: ");

                    int pin29;
                    scanf("%d", &pin29);

                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                }
                else if(select5==0) {
                    printf("\n1. Ikali Data and Voice\n");
                    printf("2. Airtel Soche Pack\n");
                    printf("3. All Networks Soche\n");
                    printf("4. Data Packs\n");
                    printf("5. Buy for Other\n");
                    printf("6. Balance Check\n");
                    printf("7. Night Data\n");
                    printf("8. Siliza Airtime Loan\n");
                    printf("n Next\n");
                }
                else {
                    printf("\nInvalid Input\n");
                }
                break;
            case 5:
                printf("\n1. Main Account\n2. Airtel Money\n0 Return to main menu\n");

                int select6;
                printf("\nSelect: ");
                scanf("%d", &select6);

                if(select6==1) {
                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                }
                else if(select6==2) {
                    printf("\nEnter PIN: ");

                    int pin30;
                    scanf("%d", &pin30);

                    printf("\nYour transaction is being processed.\nYou will receive a confirmation SMS soon.\n");
                }
                else if(select6==0) {
                    printf("\n1. Ikali Data and Voice\n");
                    printf("2. Airtel Soche Pack\n");
                    printf("3. All Networks Soche\n");
                    printf("4. Data Packs\n");
                    printf("5. Buy for Other\n");
                    printf("6. Balance Check\n");
                    printf("7. Night Data\n");
                    printf("8. Siliza Airtime Loan\n");
                    printf("n Next\n");
                }
                else {
                    printf("\nInvalid Input\n");
                }
                break;
       //     case 6



            }
        }
    }
            //ENDED ON OPTION 4

    return 0;
 }
