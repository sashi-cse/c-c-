#include<stdio.h>
float rectangleArea(float a, float b);
float squareArea(float c);
float circleArea(float d); 

int main(){
    
float a=5;
float  b=10;
  printf("area is: %f",rectangleArea( a,  b)) ;
    return 0;
}
float rectangleArea(float a, float b){
return a*b;
}
float squareArea(float c){
    return c*c;
}
float circleArea(float d){
    return 3.14 * d * d;
}