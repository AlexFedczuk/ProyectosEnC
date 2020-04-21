#include "funcionesDelListadoDeNotas.h"

#define TAM 5

int main()
{
    /*int legajosAlumnos[TAM]={1234,5678,9012,3456,7890};
    //char inicialDelNombreDelAlumno;
    //char inicialDelApellidoDelAlumno;
    char sexoAlumno[TAM]={'m','f','f','m','m'};
    int notaPrimerParcial[TAM]={9,8,2,7,6};
    int notaSegundoParcial[TAM]={7,10,5,4,3};
    float promedioNotas[TAM]={8,9,3.5,5.5,4.5};*/
    //
    int legajosAlumnos[TAM];
    //char inicialDelNombreDelAlumno;
    //char inicialDelApellidoDelAlumno;
    char sexoAlumno[TAM];
    int notaPrimerParcial[TAM];
    int notaSegundoParcial[TAM];
    float promedioNotas[TAM];

    for(int indice=0;indice<TAM;indice++)
    {
        informarIngresos(indice);

        pedirLegajo(legajosAlumnos[indice]);

        pedirSexo(sexoAlumno[indice]);

        pedirNotaParcial(notaPrimerParcial[indice],"Ingrese la nota del 1er parcial");

        pedirNotaParcial(notaSegundoParcial[indice],"Ingrese la nota del 2do parcial");

        promedioNotas[indice]=calcularPromedio(notaPrimerParcial[indice],notaSegundoParcial[indice],2);

        system("pause");
        system("cls");
    }

    printf("\n\n                        *****Listado de Notas*****\n\n");
    printf("Legajo del Alumno   Sexo del alumno   Nota 1er parcail   Nota 2do parcail   Nota de promedio\n");
    for(int indice=0;indice<5;indice++)
    {
        printf("\n%d                 %c               %2d                  %2d                 %2.2f\n",legajosAlumnos[indice],sexoAlumno[indice],notaPrimerParcial[indice],notaSegundoParcial[indice],promedioNotas[indice]);
        printf("-------------------------------------------------------------------------------------------");
    }
    return 0;
}//Debo realizar un algoriymo que me permita mostrar un listado de las notas de una serie de alumnos(5)!




