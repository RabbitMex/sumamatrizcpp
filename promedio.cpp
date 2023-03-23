/**
 * Programa para solicitar cantidad de estudiantes y sus notas
 * Despues se obtiene el promedio.
 * Daniel Bastian Luna
*/
#include <iostream>
using namespace std;

int main(){
    int estudiantes, calificacion;
    double promedio;
    promedio = 0;
    cout<<"--------------Inicio de Programa--------------"<<endl;
    cout<<"Ingrese la cantidad de estudiantes: ";
    cin>>estudiantes;
    cout<<"Ahora ingrese las calificaciones de los estudiantes: "<<endl;
    for(int i=0;i<estudiantes;i++){
        cout<<"Calificacion del estudiante "<<i+1<<": ";
        cin>>calificacion;
        promedio += calificacion;
    }
    cout<<endl<<"Listo el promedio es: "<<(promedio/estudiantes)<<endl;
    return 0;
}