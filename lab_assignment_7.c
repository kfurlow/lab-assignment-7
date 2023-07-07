#include <stdio.h>

int main(){
    int arr[9] = {97,16,45,63,13,22,7,58,72};

    int len = sizeof(arr) / 4;
  
  printf("Before bubble sort: \n");
  for(int x = 0; x < len; x++){
    printf("%d ", arr[x]);
  }
  printf("\n");
  
  int temp; //for swapping variables
  for(int x = 0; x < len; x++){
    for(int y = 0; y < len; y++){
      if(arr[y] > arr[y+1]){
        temp = arr[y];
        arr[y] = arr[y+1];
        arr[y+1] = temp;
      }
    }
  }
  printf("After bubble sort: \n");
  for(int x = 0; x < len; x++){
    printf("%d ", arr[x]);
  }

    return 0;
}