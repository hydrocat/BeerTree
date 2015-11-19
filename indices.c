#ifndef INDICE_H_
#define INDICE_H_ 

#include <stdio.h>
#define MAXCHAVESIZE 4

typedef struct ind
{
  //linha que referencia a página
  int rrnPagina;  
  
  //+1 para o "\0"
  char chave[MAXCHAVESIZE+1];

  //a quantos "128" bytes o dado
  //se encontra do inicio
  int rrnDado;

  char* (*toString) (ind);
  int (*printTo)(FILE*, struct ind );
}Indice;


char* toString( Indice i )
{

}


#endif
