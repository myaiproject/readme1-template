#include <stdio.h>
triangleAreaCalculator(float base, float height);
int main(){
float base , height ,area ;

printf("Enter triangle Base:");
scanf("%f",& base);

printf("Enter triangle Height:");
scanf("%f",& height);
area = triangleAreaCalculator( base, height);

printf("Area of triangle = %.2f",area);

return 0;


}

 triangleAreaCalculator(float base, float height){
float area ;

area = .5 * base * height ;
return area;


}
