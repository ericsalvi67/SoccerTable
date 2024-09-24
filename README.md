# SoccerTable

Considere um vetor de estruturas do tipo TABELA que contém as informações relativas aos N times 
(o valor de N é definido através da diretiva #define)  que disputam um campeonato de futebol.  
Os campos da estrutura são definidos conforme descrito a seguir:

 > struct tabela {  
   char nome[50];  
   int vitorias;  
   int empates;   
   int derrotas;  
   int marcados;  
   int sofridos;   
};  
typedef struct tabela TABELA;  
 

Faça um programa que leia um vetor do tipo TABELA e escreva os times em ordem de classificação. 
As equipes são classificadas de acordo com o número de pontos obtidos, ou seja, a equipe com mais pontos fica melhor classificado.  
Na pontuação, a vitória vale 3 pontos, o empate vale 1 ponto e a derrota vale 0.
 Em caso de empate no número de pontos, o critério de desempate é o número de vitórias.
  A equipe com mais vitórias fica em posição mais alta na classificação.  
  Se ainda houver empate, o saldo de gols é considerado. 
  O saldo de gols é a diferença entre gols marcados e gols sofridos ao longo de todas as partidas.
   A equipe com um saldo de gols superior ganha vantagem na classificação.*/
