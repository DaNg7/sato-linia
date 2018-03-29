//us ing namespace std;
#include "stdio.h"
#include "iostream"
#include"funcionsumar.c"
	int x[]={};
  	int a=1;
  	int b=1;
  	int l=1;
    int i=1;
  

int main() {
    x[i]=a;
    i++;
    x[i]=a;
	     
  	  	
  	for(i=3;i<10;i++){
	  a+=b;
	  b=a;
	  x[i]=a;
	  if (a==b){
	    i++;
	    a+=l;
	    l=a;
	    x[i]=a;
		}
    
  	}
  	
	int total = suma( );
    printf("la suma del array es   %d \n",total);
   
	return 0 ;  	
  	
}

