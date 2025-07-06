#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define num 10

//struct cidade suas coordenadas
typedef struct 
{
    int x, y;
}Cidade;

//alocacao de coordenadas
Cidade cidades[num]={
    {0, 0}, {2, 3}, {5, 4}, {1, 1}, {6, 2},
    {3, 7}, {8, 1}, {4, 6}, {7, 3}, {2, 5}
};

//variavel calculada de distancia entre coordenadas
double distancia(int a, int b){
    int dx = cidades[a].x - cidades[b].x;
    int dy = cidades[a].y - cidades[b].y;
    return sqrt(dx*dx + dy*dy);
}

//funcao para printar a rota
void print(int rota[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%d->", rota[i]);
    }
    printf("%d\n", rota[0]);
}

//variavel para calcular distancia total
double calcularTotal(int rota[], int tamanho)
{
    double dist= 0;
    for (int i= 0; i<tamanho-1; i++)
    {
        dist += distancia(rota[i], rota[i+1]);

    }
    dist += distancia(rota[tamanho-1], rota[0]);
    return dist;
    
}

//funcao para permutar as cidades
void permuta(int rota[], int inicio, int fim, double *melhor_dist, int melhor_rota[]){
    if (inicio == fim)
    {
        double dist= calcularTotal(rota, fim+1);
        print(rota, fim+1);
        printf("Distancia total: %.2f\n", dist);
        if (dist< *melhor_dist)
        {
            *melhor_dist=dist;
            for (int i = 0; i <=fim; i++)
            {
                melhor_rota[i]=rota[i];
            }
            
        }
        return;
        
    }
    for (int i = inicio; i <= fim; i++)
    {
        int temp = rota[inicio];
        rota[inicio]= rota[i];
        rota[i]=temp;
        permuta(rota, inicio+1, fim, melhor_dist, melhor_rota);
        temp= rota[inicio];
        rota[inicio]= rota[i];
        rota[i]= temp;

    }
    
    
}

int main(){
    //inicio 
    int rota[num -1];
    for (int i = 1; i < num; i++)
    {
        rota[i-1]= i;
    }
    int melhor_rota[num -1];
    double melhor_dist= __DBL_MAX__;
    printf("Calculando todas as rotas possiveis...\n");
    permuta(rota, 0, num -2, &melhor_dist, melhor_rota);
    printf("|||||||| Melhor rota encontrada: ||||||||\n");
    printf("0 ->");
    for (int i = 0; i < num -1; i++)
    {
        printf("%d-> ", melhor_rota[i]);

    }
    printf("0\n");
    printf("Distancia total: %.2f\n", melhor_dist);
    return 0;
    //.fim
}


