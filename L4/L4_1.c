#include <stdio.h>

typedef struct {
    int codigo;
    float preco;
    int qtdEstoque;
} tProduto;

tProduto LeProduto() {
    tProduto produto;
    scanf("%d;%f;%d", &produto.codigo, &produto.preco, &produto.qtdEstoque);
    return produto;
}

int EhProduto1MaiorQ2(tProduto p1, tProduto p2) {  
    if (p1.preco > p2.preco) {
        return 1;
    } else return 0;
}

int EhProduto1MenorQ2(tProduto p1, tProduto p2) {
    if (p1.preco < p2.preco) {
        return 1;
    } else return 0;
}

int TemProdutoEmEstoque(tProduto p) {
    if (p.qtdEstoque > 0) {
        return 1;
    } else return 0;
}

void ImprimeProduto(tProduto p) {
        printf("COD %d, PRE %.2f, QTD %d\n", p.codigo, p.preco, p.qtdEstoque);
    }

int main () {
    tProduto produto;
    tProduto maior;
    tProduto menor;

    int nLeitura = 0;
    scanf("%d", &nLeitura);

    int i = 0;
    for (i = 1; i <= nLeitura; i++) {
        produto = LeProduto();

        if (i == 1) {
            maior = produto;
            menor = produto;
        }

        if (EhProduto1MaiorQ2(produto, maior) == 1) {
            maior = produto;
        }

        if (EhProduto1MenorQ2(produto, menor) == 1) {
            menor = produto;
        }

        if (TemProdutoEmEstoque(produto) == 0) {
            printf("FALTA:");
            ImprimeProduto(produto);
        }
    }

    printf("MAIOR:");
    ImprimeProduto(maior);

    printf("MENOR:");
    ImprimeProduto(menor);

    return 0;
}