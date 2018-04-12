
int factorial(char m[],int n)
{
  int n1;
  int factorial = 1;
  int i;
  n1 = n;
  if(n-n1==0)
  {
      for(i=1;i<=n1;i++)
    {
        factorial = factorial * 1;
    }
    printf("%s %d \n",m , factorial);
    return 0;
  }
  else
  {
      printf("%s No se puede calcular el numero con flotantes \n",m);
      return 0;
  }
}


float suma (float a, float b)
{
float resultado;
resultado = a + b;
return resultado;
}
float resta (float a, float b)
{
float rst;
rst = a - b;
return rst;
}
int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}
float multi (float a,float b)
{
    float res;
    res = a * b;
    return res;
}
float divicion (float a,float b)
{
    float res;
    res = a / b;
    return res;
}
float todaslasfunciones (float n1,float n2 )
{
    float res;
    res = suma (n1,n2);
    printf("La suma es: %.2f\n",res);

    res = resta (n1,n2);
    printf("La resta es: %.2f\n",res);

    if(n2<0)
    {printf("Error. El diviso no puede ser menor que 0\n");}
    else
    {res = divicion (n1,n2);
    printf("la divicion es %.2f\n",res);}

    res = multi(n1,n2);
    printf("La multiplicacion es: %.2f\n",res);

    if(n1<0)
    {printf("Error. No se puefactorear un numero menor a 0\n");}
    else
    {factorial("El factoreo de 'X' es:  ",n1);}
    }



