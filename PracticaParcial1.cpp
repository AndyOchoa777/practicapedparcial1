#include <iostream>
#include <random>

using namespace std;

/*
1. Crea un programa que:
    - Genere un arreglo de 20 números aleatorios entre 1 y 100.
    - Implemente funciones para:
        - Contar cuántos son pares e impares.
        - Encontrar el segundo mayor y el segundo menor.
        - Invertir el arreglo (sin usar otro arreglo auxiliar).


*/

void contar(int numeros[]){
    int pares = 0;
    int impares = 0;
    for (int i = 0; i < 20; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            pares++;
        }else{
            impares++;
        }
        
    }

    cout<<"La cantidad de numeros pares es de: "<<pares<<endl;
    cout<<"La cantidad de numeros impares es de: "<<impares<<endl;
    
}



int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);

    int nums[20];

    for (int i = 0; i < 20; i++)
    {
        nums[i] = dis(gen);
    }

    

}