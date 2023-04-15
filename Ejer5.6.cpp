#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
int notas, NotaAlta, Aux, aprobado;

for ( int estudiantes = 1; estudiantes <= 10; estudiantes++)
{
    if(estudiantes==1||estudiantes==2||estudiantes==3||estudiantes==4||estudiantes==5||estudiantes==6||estudiantes==7||estudiantes==8||estudiantes==9||estudiantes==10){

cout<<"Dime la nota del estudiante: "<<estudiantes<<endl;
cin>>notas;
Aux+=notas;
if (notas<70){

    cout<<"Reprobado."<<endl;
    
}
else {
    cout<<"Aprobado."<<endl;
    aprobado++;
}
if(notas>NotaAlta){
    NotaAlta=notas;
    
}
    }
    
}


cout<<"La nota mas alta fue de: "<<NotaAlta<<" pts"<<endl;

cout<<"La cantidad de aprobados fue de: "<<aprobado<<endl;

if(aprobado>5){
    cout<<"La cantidad de aprobados es de 5 o mas aprobados. "<<endl;
}
else{
    cout<<"La cantidad de aprobados es de menos de 5. "<<endl;
}

system("pause");
return 0;
}