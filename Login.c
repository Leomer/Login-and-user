#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>

#define USER "leomer"
#define PASS "Leo123"

int main(void) {
    char user[20], pass[20], letter;
    int status = 0, chance = 0;
    do {
        int i = 0, j=0;
        system("cls");
        printf("\t\t=============\n");
        printf("\t\t=  Welcome  =\n");
        printf("\t\t=============\n\n");

        printf("\tUser: ");
        gets(user);
        while(user[j] != '\0'){
            user[j] = tolower(user[j]);
            j++;
        }

        printf("\tPassword: ");
        while(letter = getch()) {
            if(letter == 13) {
                pass[i] = '\0';
                break;
            } else if(letter == 8) {
                if(i > 0) {
                    i--;
                    printf("\b \b");
                }
            } else {
                printf("*");
                pass[i] = letter;
                i++;
            }
        }

        if(strcmp(user, USER) == 0 && strcmp(pass, PASS) == 0) {
            status = 1;
        } else {
            printf("\n\n\tError");
            chance++;
            clock_t delay = clock();
            while(clock() < delay + 1500);
        }

    } while(chance < 3 && status == 0);
    system("cls");
    if(status == 1) {
        printf("Access Granted");
    }else{
        printf("Access Denied");
    }

    return 0;
}