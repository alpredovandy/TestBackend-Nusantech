#include<bits/stdc++.h>

using namespace std;
int S;

/*

@ @@@@@ 0
@     @ 1
@@@@@ @ 2
@     @ 3
@ @@@@@ 4
@     @ 5
@@@@@ @ 6

*/

int main()
{
 printf("Input angka: ");
 scanf("%d",&S);
 char arr[S+1][S+1];
 for(int i=0;i<S+1;++i)
  for(int j=0;j<S+1;++j)
   arr[i][j]=' ';
 
 for(int i=0;i<S;++i)
 {
  arr[i][0]='@';    //kiri
  arr[i][S-1]='@';   //kanan
  arr[i][S]='\n';   //enter
  if(i%2==1) continue;
  for(int j=1;j<S-1;++j)
  {
   if(i%4==0 && j==1)  continue;
   if(i%4==2 && j==S-2) continue;
   arr[i][j]='@';
  }
 }
 
 for(int i=0;i<S+1;++i)
  for(int j=0;j<S+1;++j)
   printf("%c",arr[i][j]);
}
