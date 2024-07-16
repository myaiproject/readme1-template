#include <stdio.h>
int main (){

int array[] = {10 , 2 , 15 , 20 , 35 ,46 , 85} ;
int searchValue , position = -1 , index ;
 int numberOfElement = sizeof(array) / sizeof(array[0]);
 printf("numberOfElement %d:\n",numberOfElement);

printf("Enter the value yor are searching: \n");
scanf("%d",&searchValue );

    for(index = 0; index < numberOfElement ; index++){
            printf("Index:%d\n",index);
        if(searchValue == array[index]){
            position = index + 1;

            break ;
        }

    }


    if(position == -1){
        printf("Item is not found");

    }
    else{
        printf("%d at position= %d \n",searchValue, position);
    }
    printf("\n 1)Best  case: O(1)\n 2)average and worst case: O( n)\n 3) Space complexity (1) ");


return 0 ;
}
