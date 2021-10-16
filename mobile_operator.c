/*
###########################################
Course Code & Section: CSE104 & 02
Full Name: Yasin Mustafiz
Student ID: 182011072
Email:yasin.mustafiz.bba@ulab.edu.bd
Submission Date: 22-May-2021
###########################################
*/

#include <stdio.h>

int show_Main_Menu();
int grameenphone_Menu();
int grameenphone_Sub_Menu();
int robi_Menu();
int robi_Sub_Menu();
int banglalink_Menu();
int banglalink_Sub_Menu();
int airtel_Menu();
int airtel_Sub_Menu();

void PrintSuperOffer();
void PrintBillBalance();
void PrintBestInternetPacks();
void PrintJhotpotBalanceTransfer();

int main(void)
{
    int menus=0;
    do
    {
        menus=show_Main_Menu();
        switch(menus)
        {
            case 1:
            {
               grameenphone_Menu();
            }
            break;
            case 2:
            {
                robi_Menu();
            }
            break;
            case 3:
            {
                banglalink_Menu();
            }
            break;
            case 4:
            {
                airtel_Menu();
            }
            break;
        }
    }
    while (menus != 4);
    return 0;
}

/** ************ **/

int show_Main_Menu()
{
    int submenus=0;
    do
    {
        printf(" \n Dial *123*12# for MyRobi, *123*13# for gp, *123*14# for airtel, *123*15 for banlalink \n");
        printf(" Select anything below for display \n \n");
        printf(" 0) Syper Offer: 3.5GB for 3Days @69Tk \n (1)My Bill & Balance \n (2) My package & Offers \n (3) Best Internet Packs \n (4) Jhotpot & Banalnce Tranfer \n     * Next \n\n");
        printf(" Press any number that you want to choose: ");
        scanf("%d", &submenus);
        printf("\n");
        if((submenus<0) || (submenus>4))
        {
            printf(" You have entered an invalid choice. Please try again. \n \n \n");
        }
    }
    while ((submenus<0) || (submenus>4));
    return submenus;
}

/** ************ **/

int grameenphone_Menu()
{
    int menus=0;
    do
    {
        menus=grameenphone_Sub_Menu();
        switch(menus)
        {
            case 1:
            {
                PrintSuperOffer();
            }
            break;
            case 2:
            {
                PrintBillBalance();
            }
            break;
            case 3:
            {
                PrintBestInternetPacks();
            }
            break;
            case 4:
            {
                PrintJhotpotBalanceTransfer();
            }
            break;
        }
    }
    while (menus !=4);
    return menus;
}

/** ************ **** *** **/

int grameenphone_Sub_Menu()
{
    int submenus = 0;
    do
    {
        printf(" My Bill & Balance \n which one you want to select \n (1) Check your balance of your mobile \n (2) check your bill for internet \n (3) check your balance for internet \n (4)Check your bill of your mobile \n    # Back \n   + Main \n \n \n");
        printf(" Press a number you want to choose: ");
        scanf("%d", &submenus);
        printf("\n");
        if((submenus<1) || (submenus>4))
        {
            printf(" You have enter an invalid choice. Pease try again \n \n \n");
        }
    }
    while((submenus<1) || (submenus>4));
    return submenus;
}

/** ************ **/

int robi_Menu()
{
    int menus=0;
    do
    {
        menus=robi_Sub_Menu();
        switch(menus)
        {
            case 1:
            {
                PrintSuperOffer();
            }
            break;
            case 2:
            {
                PrintBillBalance();
            }
            break;
            case 3:
            {
                PrintBestInternetPacks();
            }
            break;
            case 4:
            {
                PrintJhotpotBalanceTransfer();
            }
            break;
        }
    }
    while (menus !=4);
    return menus;
}

/** ************ **/

int robi_Sub_Menu()
{
    int submenus = 0;
    do
    {
        printf(" my packag & Offers \n which one you want to select \n (1) Buy 3 GB internet for TK 19 \n (2) Flexiload 105 TK and get 5 free call time \n (3) Flexiload 75Tk and get 5TK cashback \n (4) you have transfer money \n   # Back \n   + Main \n \n");
        printf(" Press a number you want to choose: ");
        scanf("%d", &submenus);
        printf("\n");
        if((submenus<1) || (submenus>4))
        {
            printf("You have enter an invalid choice. Pease try again \n \n \n");
        }
    }
    while((submenus<1) || (submenus>4));
    return submenus;
}

/** ************ **/

int banglalink_Menu()
{
    int menus=0;
    do
    {
        menus=banglalink_Sub_Menu();
        switch(menus)
        {
            case 1:
            {
                PrintSuperOffer();
            }
            break;
            case 2:
            {
                PrintBillBalance();
            }
            break;
            case 3:
            {
                PrintBestInternetPacks();
            }
            break;
            case 4:
            {
                PrintJhotpotBalanceTransfer();
            }
            break;
        }
    }
    while (menus !=4);
    return menus;
}

/** ************ **/

int banglalink_Sub_Menu()
{
    int submenus = 0;
    do
    {
        printf("  Best internet packs \n which one you want to select \n (1) Buy 1 GB internet for TK 19 \n (2) Buy 2 GB internet for TK 29 \n (3) Buy 3 GB internet for TK 39 \n (4) Buy 4 GB internet for TK 49 \n   #  Back \n   +  Main \n \n");
        printf(" Press a number you want to choose: ");
        scanf("%d", &submenus);
        printf("\n");
        if((submenus<1) || (submenus>4))
        {
            printf("You have enter an invalid choice. Pease try again \n \n \n");
        }
    }
    while((submenus<1) || (submenus>4));
    return submenus;
}

/** ************ **/

int airtel_Menu()
{
    int menus=0;
    do
    {
        menus=airtel_Sub_Menu();
        switch(menus)
        {
            case 1:
            {
                PrintSuperOffer();
            }
            break;
            case 2:
            {
                PrintBillBalance();
            }
            break;
            case 3:
            {
                PrintBestInternetPacks();
            }
            break;
            case 4:
            {
                PrintJhotpotBalanceTransfer();
            }
            break;
        }
    }
    while (menus !=4);
    return menus;
}

/** ************ **/

int airtel_Sub_Menu()
{
    int submenus = 0;
    do
    {
        printf(" Jhotpot & Balance transfer \n which one you want to select \n (1) transfer money to bkash \n (2) Transfer money to nogod \n (3) Transfer money to bank \n (4) Transfer money to upay \n    #  Back \n   +  Main \n \n");
        printf("Press a number you want to choose: ");
        scanf("%d", &submenus);
        printf("\n");
        if((submenus<1) || (submenus>4))
        {
            printf("You have enter an invalid choice. Pease try again \n \n \n");
        }
    }
    while((submenus<1) || (submenus>4));
    return submenus;
}

/** ************ **/

void PrintSuperOffer()
{
    printf(" choose the sim companies you use and enter your number \n (1) enter your Airtel number \n (2) enter your Banglalink number \n (3) enter your Grameen number \n (4) enter your Robi number \n     # Back \n     + Main \n \n \n");
}
void PrintBillBalance()
{
    printf(" choose the sim companies you use and enter your number \n (1) enter your Airtel number \n (2) enter your Banglalink number \n (3) enter your Grameen number \n (4) enter your Robi number \n     # Back \n     + Main \n \n \n");
}
void PrintBestInternetPacks()
{
    printf(" choose the sim companies you use and enter your number \n (1) enter your Airtel number \n (2) enter your Banglalink number \n (3) enter your Grameen number \n (4) enter your Robi number     # Back \n     + Main \n \n \n");
}
void PrintJhotpotBalanceTransfer()
{
    printf(" choose the sim companies you use and enter your number \n (1) enter your Airtel number \n (2) enter your Banglalink number \n (3) enter your Grameen number \n (4) enter your Robi number \n     # Back \n     + Main \n \n \n");
}