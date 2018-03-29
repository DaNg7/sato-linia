//us ing namespace std;
#include "stdio.h"
#include "iostream"
//#include"funcionsumar.c"
	int x[10]={};
  	int a=1;
  	int b=1;
  	int l=1;
    int i=1;
  
 int suma(int o[10]){
    int sum=0 ;
	for(int d=0; d<10; d++){
      sum += x[d];
      printf("el dato del array es  %d \n", x[d]);

	}
    return sum;
}

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
  	
	int total = suma( x[10]);
    printf("la suma del array es   %d \n",total);
   
	return 0 ;  	
  	
}

