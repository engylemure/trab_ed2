#include "lib_sort.h"
int COMP;
int cmp(const void* a,const void* b)
{
  COMP++;
  int a1 = *(int*)a;
  int b1 = *(int*)b;
  if(b1 > a1)return 1;
  return 0;
}

void sort_away(char* in, char *out, int N, int M,int f)
{
  int OrdemIntercalacao = 2, NBlocos = 0, Low, High, Lim;
  FILE* arq_in, arq_out;
  FILE* v_arq_in[OrdemIntercalacao];
  int aux;
  arq_in = fopen(in,"r");
  while(fscanf(arq_in,"%d",)){
    NBlocos++;

  }
}

void sort_in(char* in, int M)
{
  FILE* arq_in = fopen(in,"r");
  int arq_inmemo[M], i;
  for(i=0;i<M;i++)
  {
    fscanf(arq_in,"%d",&arq_inmemo[i]);
  }
  fclose(arq_in);
  quick_sort(arq_inmemo,M,cmp,sizeof(int));
  FILE* arq_out = fopen(in,"w");
  for(i=0;i<M;i++)
  {
    fprintf(arq_out,"%d\n",arq_inmemo[i]);
  }
  fclose(arq_out);
}
