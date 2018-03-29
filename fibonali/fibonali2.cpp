//us ing namespace std;
#include "stdio.h"
#include "iostream"
#include"funcionsumar2.c"
    int array[]={} ;
 int main(int x[]){
   	for(int d=0; d<10; d++){
     array[d]=rellenar();
     printf("el dato del array es  %d \n", array[d]);
     d++;
     array[d]=rellenar2();
	 printf("el dato del array es  %d \n", array[d]);
	}
    return 0;
}
