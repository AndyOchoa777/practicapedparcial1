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

void segundo(int numbers[]){
    int top = 0;
    int second = 0;
    int bottom = 101;
    int secondBottom = 101;

    for (int i = 0; i < 20; i++)
    {
        if (numbers[i] > top)
        {
            second = top;
            top = numbers[i];
        }else if (numbers[i] > second && numbers[i] < top)
        {
            second = numbers[i];
        }
        
        if (numbers[i] < bottom)
        {
            secondBottom = bottom;
            bottom = numbers[i];
        }else if (numbers[i] < secondBottom && numbers[i] > bottom)
        {
            secondBottom = numbers[i];
        }
        
        

        
    }

    cout<<"El segundo numerin mas alto es: "<<second<<endl;
    cout<<"El segundo numerin mas bajo es:"<<secondBottom<<endl;

    
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

    for (int i : nums)
    {
        cout<<i<<endl;
    }

    contar(nums);
    segundo(nums);
    

    

}