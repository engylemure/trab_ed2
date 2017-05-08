#include "macro.h"
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>

void quick_sort(void *v, int  tam, int (*cmp)(const void*,const void*),size_t size);
void particao(int Esq, int Dir , int *i , int *j , void *A, int (*cmp)(const void*,const void*),size_t size);
void particao2(int Esq, int Dir , int *i , int *j , void *A, int (*cmp)(const void*,const void*),size_t size);
void particao1(int Esq, int Dir , int *i , int *j , void *A, int (*cmp)(const void*,const void*),size_t size);
void ordena(int Esq, int Dir , void *A, int (*cmp)(const void*,const void*),size_t size);
