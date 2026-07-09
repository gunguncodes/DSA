#include<stdio.h>
int main () {
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the %d elements of array: \n",size);
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }

    int search;
    int i;
    int found = 0;
    printf("Enter the element to be search: \n");
    scanf("%d",&search); 
    for(i=0;i<size;i++) {

        if(search==arr[i]) {
            found = 1;
            break;
        }
      }

     if(found==1) {
        printf("Element found at index %d",i);
      }
      else {
        printf("Not found");
      }
}