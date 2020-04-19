#include<stdio.h>
struct create{
  int colours[6]; 
} layer[6];


int main(){

int i=0;
while (i<6)
{
  int j=0;
  while (j<6){
    int k;
    printf("enter the color for layer number %d and block number %d ",i+1,j+1);
    scanf("%d",&k);
    layer[i].colours[j]=k;
    j++;
  }
  i++;
}
}
