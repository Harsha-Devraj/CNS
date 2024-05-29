#include <stdio.h> 
#include<string.h> 
#include<stdlib.h> 
int main() { 
  char str[]="Hello World"; 
  int len=strlen(str); 
  char s1[12],s2[12],s3[12]; 
   
  printf("After and operation\n"); 
  for(int i=0;i<len;i++){ 
      printf("%c=%d\n",str[i],str[i]&127); 
  } 
   
   printf("After or operation\n"); 
  for(int i=0;i<len;i++){ 
      printf("%c=%d\n",str[i],str[i]|127); 
  } 
   
   printf("After xor operation\n"); 
  for(int i=0;i<len;i++){ 
      printf("%c=%d\n",str[i],str[i]^127); 
  } 
} 
