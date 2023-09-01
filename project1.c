#include<stdio.h>       // Standard input/output Header[contains printf() & scanf()].
#include<stdlib.h>      // Standard Library(Information of memory allocation/freeing functions).
#include<windows.h>     // Master include file that includes other Windows header files.

int i, j;
int main_exit;

void menu();

struct day{
    int month, day, year
};

struct{
    char name[60];
    int account_number, age;
    char address[70];
    char citizenship[15];
    double phone_number;
    char acc_type[15];
    float amount;
    struct date DOB;
    struct date Deposite;
    struct date Withdraw;
}add, update, check, rem, transaction;

float interest(float t, float amount, int rate){
    float SI;
    SI = (rate*t*amount)/100;
    return(SI);
}

void for_delay(int j){
    int i, k;
    for(i = 0; i < j; i++){
        k = i;
    }

void new_account(){
    int choice;
    FILE *ptr;

    ptr = fopen("record.dat", "a+");
    account_number:
    system("cls");

    printf("ADD RECORD");
    printf("Enter today's date(mm/dd/yyyy): ");
    scanf("%d%d%d", &add.deposite.month, &add.deposite.day, &add.deposite.year);

    printf("\nEnter the Account Number: ");
    scanf("%d", &check.account_number);

    while(fscanf(ptr, "%d %s %d/%d/%d %d %s %lf %s %f %d/%d/%d\n", &add.account_number, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.address, add.citizenship, &add.phone, add.acc_type, &add.amt, &add.deposite.month, &add.deposite.day, &add.deposite.year) != EOF){
        if(check.account_number == add.account_number){
            printf("Acount number already in use!");
            fordelay(1000000000);
            goto account_number;
        }
    }
}