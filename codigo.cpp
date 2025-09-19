#include <bits/stdc++.h>
using namespace std;

int main()
{
    //intervalo(INPUT)
    double inicio = 1;
    double fim = 2;
    
    //resposta achada
    double resp = 0;
    
    //outras variaveis utilizadas
    double x, altura, area;
    
    //base dos retangulos
    double deltaI = 1e-5;
    
    
    //Soma de Riemann
    for(x=inicio; x<=fim; x+=deltaI){
      
        //aqui se escreve f(x) (INPUT)
        altura = 1.0/(x+1);
      
        area = deltaI * altura;
        
        resp += area;
    }

    printf("%.4f \n", resp);
}
