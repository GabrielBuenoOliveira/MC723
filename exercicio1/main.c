#include <stdio.h>
#include <stdlib.h>
#include "calc_primo.h"
#include <omp.h>
int main(int argc, char* argv[])
{
	int n,p,t=0;
	p = atoi(argv[1]);
	if(p >= 2){
		//printf("2 é primo.\n");
		t++;
	}
	#pragma omp parallel for	
	for (n=3; n <= p;n=n+2){
	  if (primo(n))
			t++;
		 //printf("%d é primo.\n", n);
	  //else
		 //printf("%d não é primo.\n", n);
	}
}
