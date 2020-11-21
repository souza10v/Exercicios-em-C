// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


#include <stdio.h>

int main() {
  float num,n100,n50,n20,n10,n5,n2,m1,m050,m025,m010,m005,m001,resto;
  
  printf ("Digite um valor monetário com duas casa decimas:");
  scanf ("%f", &num);
  n100=num/100;
  resto=fmod(num, 100);
  n50=resto/50;
  resto=fmod(num, 50);
  n20=resto/20;
  resto=fmod(num, 20);
  n10=resto/10;
  resto=fmod(num, 10);
  n5=resto/5;
  resto=fmod(num, 5);
  n2=resto/2;
  resto=fmod(num, 2);
  m1=resto/1;
  resto=fmod(num, 1);
  m050=resto/0.5;
  resto=fmod(num, 0.5);
  m025=resto/0.25;
  resto=fmod(num, 0.25);
  m010=resto/0.1;
  resto=fmod(num, 0.1);
  m005=resto/0.05;
  resto=fmod(num, 0.05);
  m001=resto/0.01;
  resto=fmod(num, 0.0);


  printf("NOTAS:\n");
  printf("%.0f notas de R$ 100.00\n", n100);
  printf("%.0f notas de R$ 50.00\n", n50);
  printf("%.0f notas de R$ 20.00\n", n20);
  printf("%.0f notas de R$ 10.00\n", n10);
  printf("%.0f notas de R$ 5.00\n", n5);
  printf("%.0f notas de R$ 2.00\n", n2);
  
  printf("MOEDAS\n");
  printf("%.0f moedas de R$ 1.00\n",m1); 
  printf("%.0f moedas de R$ 0.50\n",m050); 
  printf("%.0f moedas de R$ 0.25\n",m025); 
  printf("%.0f moedas de R$ 0.10\n",m010); 
  printf("%.0f moedas de R$ 0.05\n",m050); 
  printf("%.0f moedas de R$ 0.01\n",m001); 


}
  