struct create{
  int colours[6]; 
} layer[6];

void tell_colours(struct create s); 


void setup() {
  // put your setup code here, to run once:

}

int i=0;
while i<6
{
  int j=0;
  while j<{
    int k;
    printf("enter the color for layer number %d and block number %d ",i,j);
    scanf("%d",&k);
    layer[i].colours[j]=k;
    j++;
  }
  i++;
}

void loop() {
  // put your main code here, to run repeatedly:

}
