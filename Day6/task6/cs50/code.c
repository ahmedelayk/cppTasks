#include <stdio.h>
#include <string.h>

int main(void){
  // string names[] = {"obaida", "raghad"};
  char name[10] = "obaida";
  for (int i = 0; i < 2; i++)
  {
    if(strcmp(name, "raghad"))
      printf("found in %i steps\n", i+1);
  }
  
}