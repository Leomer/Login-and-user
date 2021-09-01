#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>

#define USER "leomer"
#define PASS "Leo123"

int main(void) {
    char user[20], pass[20], letra;
    int status = 0, intento = 0;
    do {
        int i = 0, j=0;
        system("cls");
        printf("\t\t================\n");
        printf("\t\t=  Bienvenido  =\n");
        printf("\t\t================\n\n");

        printf("\tUsuario: ");
        gets(user);
        while(user[j] != '\0'){
            user[j] = tolower(user[j]);
            j++;
        }

        printf("\tPassword: ");
        while(letra = getch()) {
            if(letra == 13) {
                pass[i] = '\0';
                break;
            } else if(letra == 8) {
                if(i > 0) {
                    i--;
                    printf("\b \b");
                }
            } else {
                printf("*");
                pass[i] = letra;
                i++;
            }
        }


        if(strcmp(user, USER) == 0 && strcmp(pass, PASS) == 0) {
            status = 1;
        } else {
            printf("Error en el acceso");
            intento++;
        }

    } while(intento < 3 && status == 0);
    system("cls");
    if(status == 1) {
        printf("Acceso concedido");
    }
    return 0;
}