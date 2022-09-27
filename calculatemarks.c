# include<stdio.h>
 int calculateperc(int science,int maths,int sanskrit);

 int main(){
      int sc =91;
      int maths=88;
      int sanskrit=90;
      printf("percentage is  : %d\n", calculateperc(sc,maths,sanskrit));
      return 0;
    
}

 int calculateperc(int science,int maths,int sanskrit)

{

    return((science+ maths + sanskrit)/3);
}

