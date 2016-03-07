#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
int primo(int n)
{
  int i;

  for(i = 2; i < n; i ++)
    if (n % i == 0)
      return 0;
  
  return 1;
}

int main(int argc, char* argv[])
{
  int n,p,t=0;
  p = atoi(argv[1]);
	#pragma omp parallel for	
	for (n=2; n <= p;n++){
		if (primo(n))
			//printf("%d é primo.\n", n);
			t++;
	  //else
		 //printf("%d não é primo.\n", n);
	}

}	
