/* Bibliotecas */
#include "libDriveThru.h"

/* Prot�tipos de fun��es */
int   main (void);

/* Corpo do programa */
int   main (void)
{
	setlocale (LC_ALL, "");
    system ("color 09");
    system ("cls");
    relatorio_pagamentos(); 
	relatorio_cartoes();  
	return (0);
}
