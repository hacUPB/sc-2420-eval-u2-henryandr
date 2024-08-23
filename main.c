#include <stdio.h>
#include <math.h> //incluyo este header para usar pow()

float calcula_imc(float,float); //Prototipo de la función

int main(int argc, char const *argv[])
{
    float estatura, peso, imc;
    char Nombre[30];

    printf("Ingrese su nombre: \n");
    fgets(Nombre, 30, stdin); //lee texto de un archivo

    printf("Ingrese su peso: \n");
    scanf("%f",&peso);      //lee del teclado y lo convierte al formato

    printf("Ingrese su estatura: \n");
    scanf("%f",&estatura);  //%f es float

    imc = calcula_imc(peso,estatura); //llama a la función     

    printf("%s su IMC = %f\n",Nombre,imc);
    
    return 0;
}

float calcula_imc(float peso,float estatura) //no lleva ;
{
    float IMC;
    //IMC = peso / estarura2
    IMC = peso / pow(estatura, 2);
    return IMC;
}