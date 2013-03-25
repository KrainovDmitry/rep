#include <stdio.h>

int main()
{
  int pid = fork();  
  if (pid < 0)
     printf ("Ошибка");
  else if (pid > 0) {
    FILE *out = fopen("first-one", "w");
    fprintf(out, "%d", pid);
    fclose(out);
  }
  else if (pid == 0)
     printf("Hello world!");
  return 0;
} 
