#include <stdio.h>
float TriangleAre(float base, float height);

int main(){
    float base , height,area;
    printf("Enter base: ");
    scanf("%f",&base);
    printf("Enter height: ");
    scanf("%f",&height);

    area = TriangleAre(base,height);
    printf("Area of Triangle= %.2f",area);


return 0;
}

float TriangleAre(float base, float height){
float area ;
area = .5*base*height;
return area;

}
