#include<stdio.h>
int partition(int arr[], int left, int right)

{

      int i = left, j = right;

      int tmp;

      int pivot = arr[(left + right) / 2];

     

      while (i <= j) {

            while (arr[i] < pivot)

                  i++;

            while (arr[j] > pivot)

                  j--;

            if (i <= j) {

                  tmp = arr[i];

                  arr[i] = arr[j];

                  arr[j] = tmp;

                  i++;

                  j--;

            }

      };

     

      return i;

}
void quickSort(int arr[], int left, int right) {

      int index = partition(arr, left, right);

      if (left < index - 1)

            quickSort(arr, left, index - 1);

      if (index < right)

            quickSort(arr, index, right);

}
int main(){
int a[]={1,5,2,7,5,8};
quickSort(a,0,5);
for(int i=0;i<6;i++)
{
printf("%d",a[i]);

}return 0;
}

















