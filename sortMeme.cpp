#include <iostream>

using namespace std;

void sort(int arr[], int size);

int main(){

   int arr[] = {
        1, 5, 4, 3, 2, 6, 4, 3, 2, 4
   }; 

   int size = 10;

   sort(arr, size);

   for (int i = 0; i < 10; i++)
       cout << arr[i] << " ";

   cout << endl;


}

void sort(int arr[], int size){
    if (size >= 2){
        int subDiv = size / 2;
        int arr1[subDiv];
        int arr2[size - subDiv];
        for (int i = 0; i < subDiv; i++)
            arr1[i] = arr[i];
        for (int j = subDiv, k = 0; j < size; j++, k++)
            arr2[k] = arr[j];     
        sort(arr1, subDiv);
        sort(arr2, (size - subDiv));
        for (int m = 0, i = 0, j = 0; m < size; m++){
            if ( i >= subDiv){
               for (; m < size; m++, j++)
                  arr[m] = arr2[j];
            }
            else if ( j >= (size - subDiv)){
               for (;m < size ; m++, i++)
                  arr[m] = arr1[i];
            }
            
            
            else if (arr1[i] < arr2[j]){
                arr[m] = arr1[i];
                i++;
            }else{
                arr[m] = arr2[j];
                j++;
            }

        }          
    }

}
