#include<stdio.h>
 #define N 150
 int main(void){
   int a[N], b[N];
   int i,j,k,l;
   //キーボードから初項を入力する。//
  printf("初項を入力する\n");
  scanf("%d",&a[0]);
  //コラッツの数列の第150項までを表示する//
  for(i=0;N>i;i++){
    if(a[i]%2==0){
      a[i+1]=a[i]/2;
    }else{
      a[i+1]=a[i]*3+1;
    }
  }
  //数列から1を引く//
  for(i=0;N>i;i++){
    b[i]=a[i]-1;  
  }
  //数列の各項を表示する//
 for (i = 0;N>i;i++) {
   printf("a[%3d]=",i+1);
   printf("%3d",a[i]);
 }
     return 0 ; 
}

