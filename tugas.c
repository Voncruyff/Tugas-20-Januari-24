#include <stdio.h>
int find_in_array(int arr[], int length, int element) {

    for( int i = 0; i < length; i++) {
       if (arr[i] == element) {
      return i; 
       }
    }
    return -1;
}

int main() {

  int data[] = {8, 5, 3, 4, 10, 11};
  int n = sizeof(data) / sizeof(data[0]);

  int index = find_in_array(data, n, 3);

  if(index != -1) {
    printf("Element berada dalam index %d", index); 
  } else {
    printf("Element tidak berada dalam index");
  }

  return 0;
}