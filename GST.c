# include<stdio.h>
void calculateprice(float value);

 int main(){
      float value=145.0;
      calculateprice(value);
      printf("value is : %f\n", value );
      return 0;
    
}
 void calculateprice(float value)
 {
    value = value+(value*0.18);
    printf("final price is %f\n",value);

 }