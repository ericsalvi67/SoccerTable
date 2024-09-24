 #include <stdio.h>
   #include <stdlib.h>
   #include <string.h>

   #define N 20

   typedef struct TABELA
    {
        char nome[50];
        int vitorias;
        int empates;
        int derrotas;
        int marcados;
        int sofridos;
    }TAB;

    void escreve (TAB v[N])
    {
        int i;

        for(i=0;i<N;i++)
        {
            printf("NOME: ");
            gets(v[i].nome);
            printf("V/E/D: ");
            scanf("%d%d%d", &v[i].vitorias,&v[i].empates,&v[i].derrotas);
            printf("GOLS MARCADOS/SOFRIDOS: ");
            scanf("%d%d", &v[i].marcados, &v[i].sofridos);
            fflush(stdin);
        }
    }

    void mostra(TAB v[N])
    {
        int i;

        printf("TABELA DE CLASSIFICACAO: \n");
        printf("NOME\t\tPONTOS\tVITORIA\tEMPATE\tDERROTA\tSG\n");

        for(i=0;i<N;i++)
        {
            printf("%-10s\t% 4d\t% 4d\t% 4d\t% 4d\t% 2d\n",v[i].nome,v[i].vitorias*3+v[i].empates,v[i].vitorias,v[i].empates,v[i].derrotas,v[i].marcados-v[i].sofridos);
        }
    }

    void ordena(TAB v[N])
    {
        int i,j;
        TAB aux;

        for(j=0;j<N-1;j++)
        {
            for(i=0;i<N-j-1;i++)
            {
                if(v[i].vitorias*3+v[i].empates<v[i+1].vitorias*3+v[i+1].empates)
                {
                    aux=v[i];
                    v[i]=v[i+1];
                    v[i+1]=aux;
                }
                else if (v[i].vitorias*3+v[i].empates==v[i+1].vitorias*3+v[i+1].empates && v[i].vitorias<v[i+1].vitorias)
                {
                    aux=v[i];
                    v[i]=v[i+1];
                    v[i+1]=aux;
                }
                else if(v[i].vitorias*3+v[i].empates==v[i+1].vitorias*3+v[i+1].empates && v[i].vitorias==v[i+1].vitorias && v[i].marcados-v[i].sofridos<v[i+1].marcados-v[i+1].sofridos)
                {
                    aux=v[i];
                    v[i]=v[i+1];
                    v[i+1]=aux;
                }
            }
        }
    }

    int main()
    {
        TAB v[N];

        escreve(v);
        mostra(v);
        ordena(v);
        mostra(v);
    }
