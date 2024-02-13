#include <stdio.h>
#define MAXSIZE 100

struct lifo
{
   int st[MAXSIZE];
   int  top;
};
typedef struct lifo stack;

main() {
  stack A, B; 
  create(&A);  
  create(&B);
  push(&A,10); 
  push(&A,20);
  push(&A,30);
  push(&B,100);  
  push(&B,5);
  
  printf (“%d %d”, pop(&A), pop(&B));

  push (&A, pop(&B));

  if (isempty(&B))
    printf (“\n B is empty”);
  return;
}
