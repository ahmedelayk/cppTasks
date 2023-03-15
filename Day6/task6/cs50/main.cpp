#include <iostream>
#include <string.h>

using namespace std;

int main(){
  // cout<<"Hello, world.\n";
  // int number[] = {1, 2, 3, 4, 5};
  // for (int i = 0; i < sizeof(number)/sizeof(int); i++){
  //   cout << number[i] <<"\t";
  // }
  // printf("\n");
  // drawing with if
  // *********
  // ********
  // *******
  // ******
  // *****
  // ****
  // ***
  // **
  // *
  // for (int i = 0; i < 10; i++){
  //   for (int j= i+1; j < 10; j++){
  //     printf("*");
  //   }
  //   printf("\n");
  // }
    // drawing with if
  // *
  // **
  // ***
  // ****
  // *****
  // ******
  // *******
  // ********
  // *********
  // for (int i = 0; i < 10; i++){
  //   for (int j= 0; j <i+1; j++){
  //     printf("*");
  //   }
  //   printf("\n");
  // }

  // AlGorithms
  // Searching Techniques
  int nums[] = {5, 8, 6, 3, 1, 2, 4};
  // string names[] = {"ahmed","mohamed","hamada","obaida","adam","raghad","baraa"};
  char names[7][10] = {"ahmed","mohamed","hamada","obaida","adam","raghad","baraa"};
  // Linear Search
  // for (int i = 0; i < sizeof(nums)/sizeof(int); i++)
  //   if(nums[i] == 4)
  //     printf("Found at index %i\n", i);
  for (int i = 0; i < 7; i++){
    if (strcmp(names[i], "adam") == 0){
      printf("found in %i steps", i+1);
    }
  }
  // Binary Search
  
  return 0;
}