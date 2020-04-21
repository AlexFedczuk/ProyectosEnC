#include "funcionesDelListadoDeNotas.h"

/** \brief Informar al usuario el ingreso por el que va.
 *
 * \param El numero de repeticiones
 * \return Nada
 *
 */
void informarIngresos(int indice)
{
    if(indice==0)
    {
        printf("\nIngresando al alumno 1...\n");
    }else
    {
        indice++;
        printf("\nIngresando al alumno %d...\n",indice);
    }
}

/** \brief Pedir el legajo del alumno.
 *
 * \param El numero del legajo del alumno.
 * \return El legajo del alumno.
 *
 */
int pedirLegajo(int legajo)
{
    printf("\nIngrese el legajo del alumno: ");
    scanf("%d",&legajo);

     while(legajo<1000||legajo>9999)
    {
        printf("\nError! El legajo del alumno debe ser un numero de 4 cifras: ");
        scanf("%d",&legajo);
    }
    return legajo;
}

/** \brief Pedir el sexo del alumno.
 *
 * \param El sexo del alumno.
 * \return El sexo del alumno.
 *
 */
char pedirSexo(char sexo)
{
    printf("\nIngrese el sexo del alumno, masculino(m) o femenino(f): ");
    fflush(stdin);
    scanf("%c",&sexo);

    while(sexo!='m'&&sexo!='f')
    {
        printf("\nError, Ingreso invalido! El sexo del alumno debe ser masculino(m) o femenino(f): ");
        fflush(stdin);
        scanf("%c",&sexo);
    }
    return sexo;
}

/** \brief Pedir la nota del parcial del alumno y un mensaje que acompana.
 *
 * \param La nota del alumno.
 * \param El mensaje a mostrar.
 * \return La nota del parcial.
 *
 */
int pedirNotaParcial(int notaParcial,char mensaje[])
{
    printf("\n%s",mensaje);
    scanf("%d",&notaParcial);

    while(notaParcial<1||notaParcial>10);
    {
        printf("\nError! La nota del parcial del alumno debe ser entre 1 y 10: ");
        scanf("%d",&notaParcial);
    }
    return notaParcial;
}

/** \brief Calcular el promedio de dos valores int.
 *
 * \param El primer valor int.
 * \param El segundo valor int.
 * \param El divisor int del calculo.
 * \return El promedio de los dos valores int.
 *
 */
float calcularPromedio(int primerNumero,int segundoNumero,int divisor)
{
    float promedio;

    promedio=(float)(primerNumero+segundoNumero)/divisor;

    return promedio;
}
