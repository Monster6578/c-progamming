# include<stdio.h>
float convertTemprature(float celsius);

 int main(){
      float far =convertTemprature(37);
      printf("vfar is  : %f\n", far );
      return 0;
    
}
 float convertTemprature(float celsius)

 {

  float far=celsius*(9.0/5.0)+32.0;
  return far;
 }