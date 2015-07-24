
include <stdio.h>

int main()
{
 int n[7] = {1,3,4,8,13,17,20};
 int a,k,m=0;
 int last,last1;

 for(a = 0; a<7;a++){
 k = n[a+1]- n[a];
 if(m <= k)
 {
  m = k;
  last = n[a+1];
  last1 = n[a];
  }
  }

  printf("answer = %d %d",last,last1);
 
 return 0;
}

