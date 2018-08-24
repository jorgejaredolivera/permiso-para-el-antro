/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: olivera
 *
 * Created on 23 de agosto de 2018, 08:40 PM
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
   
    printf("hola chavo dime tu edad y te dire si puedes ir o no al antro");
    int edad;
    scanf("%d",&edad);
    
    if (edad>=18){
        printf("\n puedes ir hijo, anda a divertirte\n");
    }
    else{
        printf("eres un mocoso, esos lugares no son para ti");
    }
    printf("\nhasta la proxima amigos");
    return 0;
}

