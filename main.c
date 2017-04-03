/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: jens
 *
 * Created on 31. März 2017, 15:50
 */

#include <stdio.h>
#include <stdlib.h>
#include <mysql/mysql.h>

#define maxTest 10

/*
 * 
 */
int main(int argc, char** argv) {

    MYSQL *pDatabase;
    int i = 0;
    int fbsqlconnect = 0;
    printf("\n");
    
    fbsqlconnect = connect_sql(pDatabase);
    
    if(fbsqlconnect)
        printf("Datenbank connect ok\n");
    else
        printf("Datenbank connect nok\n");
    
    for(i=0; i< maxTest; i++)
    {
        status_sql(pDatabase);
    }
    
    fbsqlconnect = disconnect_sql(pDatabase);
    
    if(fbsqlconnect)
        printf("Datenbank disconnect ok\n");
    else
        printf("Datenbank disconnect nok\n");
                
    return (EXIT_SUCCESS);
}

