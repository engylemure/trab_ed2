#include "quicksort.h"
void particao(int Esq, int Dir , int *i , int *j , void *A, int (*cmp)(const void*,const void*),size_t size)
{
  unsigned char x[size];
  *i = Esq; *j = Dir;
  insert(x, A+((*i + *j )/2)*size,size);
  do
  {
    while(cmp(A+*i*size,x)){(*i)+=1;}
    while (cmp(x,A+*j*size)) {(*j)-=1;}
    if (*i <= *j )
    {
      swap(A+*i*size,A+*j*size,size);
      (*i)+=1; (*j)-=1;
    }
  } while (*i <= *j );
}

void ordena(int Esq, int Dir , void *A, int (*cmp)(const void*,const void*),size_t size)
{
  int i , j;
  particao(Esq, Dir, &i , &j , A, cmp, size);
  if (Esq < j ) ordena(Esq, j , A, cmp,size);
  if ( i < Dir ) ordena( i , Dir , A, cmp,size);
}


void quick_sort(void *v, int  tam, int (*cmp)(const void*,const void*),size_t size)
{
  ordena(0,tam-1,v,cmp,size);
}

void particao1(int Esq, int Dir , int *i , int *j , void *A, int (*cmp)(const void*,const void*),size_t size)
{
  unsigned char x[size];
  *i = Esq; *j = Dir;
  if((cmp(A+*i*size,A+*j*size) && cmp(A+((*i + *j )/2)*size,A+*i*size)) || (cmp(A+*j*size,A+*i*size) && cmp(A+*i*size,A+((*i + *j )/2)*size)))
    insert(x, A+*i*size,size);
  else if((cmp(A+*j*size,A+*i*size) && cmp(A+((*i + *j )/2)*size,A+*j*size)) || (cmp(A+*i*size,A+*j*size) && cmp(A+*j*size,A+((*i + *j )/2)*size)))
    insert(x, A+*j*size,size);
  else insert(x, A+((*i + *j )/2)*size,size);
  do
  {
    while(cmp(A+*i*size,x)){(*i)+=1;}
    while (cmp(x,A+*j*size)) {(*j)-=1;}
    if (*i <= *j )
    {
      swap(A+*i*size,A+*j*size,size);
      (*i)+=1; (*j)-=1;
    }
  } while (*i <= *j );
}
void particao2(int Esq, int Dir , int *i , int *j , void *A, int (*cmp)(const void*,const void*),size_t size)
{
  unsigned char x[size];
  *i = Esq; *j = Dir;
  insert(x, A+(rand()%(*j-*i)+*i)*size,size);
  do
  {
    while(cmp(A+*i*size,x)){(*i)+=1;}
    while (cmp(x,A+*j*size)) {(*j)-=1;}
    if (*i <= *j )
    {
      swap(A+*i*size,A+*j*size,size);
      (*i)+=1; (*j)-=1;
    }
  } while (*i <= *j );
}
