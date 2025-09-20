# Cálculo-II-Integrais
--- Cálculo Fundamental II --- Tarefa prática de implementação ---

# Objetivo
O codigo.cpp tem o objetivo de calcular, com 4 casas decimais de precisão, o valor de uma dada integral definida f, no intervalo [a,b].

# Funcionamento
Primeiro, deve-se dar ao programa os seguintes dados:
- O início do intervalo (a) --> linha 7;
- O final do intervalo (b) --> linha 8;
- A função f(x) --> linha 24.

Em seguida, o programa calculará a integral definida de f(x) pelo método dos retângulos (soma de Riemann), seguindo estes passos após a sua preparação com os dados anteriores:
1. Define a variável inicio e a variável fim (o início e o final do intervalo [a,b]);
2. Define a variável resp, a qual iniciará igual a 0 e terminará igual à resposta final;
3. Define outras variáveis que serão utilizadas no decorres do programa:
     - A variável x, que representa o x da função dentro do intervalo [a,b] e que será utilizada para encontrar o valor da variável altura;
     - A variável altura, que representa a altura dos retângulos que serão usados na soma de Riemann;
     - A variável area, que representa a área dos retângulos que serão usados na soma de Riemann;
4. Define a variável deltaI, que representa a largura dos retângulos da soma de Riemann;
5. Dentro de um loop (enquanto x estiver dentro do intervalo [a,b]), serão calculados os valores das variáveis altura e, em seguida, area. Somando-se o valor da área à variável resp, que, ao final do loop, conterá a resposta final da soma de Riemann;
6. Por fim, o programa retorna o valor da integral definida calculada com quatro casas decimais de precisão.

# Testes unitários
Os testes a seguir foram utilizados para testar o funcionamento do programa:
1. Integral de função identidade 
-    $\int_0^3 x  dx$ , que resulta em 4,5
2. Integral de função quadrática
-    $\int_0^1 x^2+1  dx$ , que resulta em 1,3333...
3. Integral de função ímpar em intervalo simétrico
-    $\int_{-1}^1 x^3-3x dx$ , que resulta em 0
4. Integral de função cosseno
-    $\int_{π/2}^{π} cos(x) dx$ , que resulta em -1
5. Integral de função exponencial
-    $\int_0^{ln(3)} e^x dx$ , que resulta em 2
6. Integral de função logarítmica
-    $\int_1^{e^2} ln(x) dx$ , que resulta em $e^2$ + 1
7. Integral de função racional
-    $\int_1^2 1/(x+1) dx$ , que resulta em 0,405465...
8. Integral de identidades trigonométricas
-    $\int_0^{π} cos(x)^2 dx$ , que resulta em 1,570796...
