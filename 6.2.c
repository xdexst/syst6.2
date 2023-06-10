#define array_size 40
#include <stdio.h>
#include <math.h>
int main(){
  int a[array_size];
  double b[array_size-1];
  int i=0;
  int n1=1;
  int n2=1;
  int n=0;
  a[0]=n1;
  a[1]=n2;
 for (i=2;i<array_size;i++){
 n=n2;
    n2=n1+n2;
    n1=n;
    a[i]=n2;}
 for (i=0;i<array_size-1;i++){
    b[i]=(double)a[i+1]/a[i];}
for (i=0;i<array_size;i++){
    printf("a[%d] = %d  \n",i,a[i]);}
  for (i=0;i<array_size-1;i++){
    printf(" b[%d] = %lf \n",i,b[i]);}}
