#include <stdio.h>
int main(){

int arr[] = {64 , 25 , 12 , 22 , 11};
int minIndex , i,j, temp;
int size = sizeof(arr)/sizeof(arr[0]);


for(i = 0; i < size -1 ; i++){
    minIndex = i;

    for(j = i + 1; j < size; j++){
        if(arr[j] < arr[minIndex] ){
            minIndex = j;
        }}
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp ;




}

for(i = 0; i < size; i++){
    printf("%d ",arr[i]);
}

printf("\n");
return 0;

}
