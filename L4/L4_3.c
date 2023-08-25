#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia; 
    int mes; 
    int ano;
} tData;

// normaliza a data
tData InicializaDataParam( int a_dia, int a_mes, int a_ano ) {
    tData data;
    data.ano = a_ano;

    // delimita a faixa de meses
    if (a_mes > 12){
        a_mes = 12;
    } else if (a_mes < 1){
        a_mes = 1;
    }
    data.mes = a_mes;

    // delimita os dias de acordo com o mes e o ano
    int qtdDiasNoMes = InformaQtdDiasNoMesMA(a_mes, a_ano);
    if (a_dia > qtdDiasNoMes) {
        a_dia = qtdDiasNoMes;
    } else if (a_dia < 1) {
        a_dia = 1;
    }
    data.dia = a_dia;
    
    return data;
}

tData LeData( ) {
    tData data;
    int d, m, a;
    if (scanf("%d %d %d", &d, &m, &a) != 3) {
        exit(1);
    }

    //normaliza a data
    data = InicializaDataParam(d, m, a);
    return data;
}

void ImprimeData(tData a_data) {
    printf("'%02d/%02d/%04d'", a_data.dia, a_data.mes, a_data.ano);
    if (EhBissexto(a_data.ano)) {
        printf(":Bisexto\n");
    } else {
        printf(":Normal\n");
    }
}

int EhBissexto(int data) {
    if (data % 4 == 0 && 
        data % 100 != 0 || 
        data % 400 == 0) {
        return 1;
    } else return 0;
}

// fala qts dias tem no mes de acordo com o mes e abno
int InformaQtdDiasNoMesMA(int mes, int ano) {
    if (mes == 4 ||
        mes == 6 || 
        mes == 9 ||
        mes == 11) {
            return 30;
    } else if (mes == 2) {
        if (EhBissexto(ano)) {
            return 29;
        } else return 28;
    }

    return 31;
}

int InformaQtdDiasNoMes( tData a_data ) {
    int d = InformaQtdDiasNoMesMA(a_data.mes, a_data.ano);
    return d;
}

tData AvancaParaDiaSeguinte( tData data ) {
    if (data.dia < InformaQtdDiasNoMes(data)) {
        data.dia++;
    } else {
        data.dia = 1;
        if (data.mes < 12) {
            data.mes++;
        } else {
            data.mes = 1;
            data.ano++;
        }
    }
    return data;
}

int EhIgual( tData d1, tData d2 ) {
    if (d1.dia == d2.dia && 
        d1.mes == d2.mes && 
        d1.ano == d2.ano) {
        return 1;
    } else 
        return 0;
}

int EhMenorDataAqDataB(tData a, tData b){
    if (a.ano < b.ano)
        return 1;
    else if (a.ano == b.ano && a.mes < b.mes) {
        return 1;
    } else if (a.ano == b.ano && a.mes == b.mes && a.dia < b.dia) {
        return 1;
    } else return 0;

}



int main() {
    tData data;
    int n = 0;
    scanf("%d", &n);

    int i = 0;
    for (i = 0; i < n; i++) {
        data = LeData();
        ImprimeData(data);
    }


/*
    for(data = dataIni; 
        !EhIgual(data, dataFim); 
        data = AvancaParaDiaSeguinte(data)) {
            ImprimeData(data);
            printf("\n");
    }
*/
    
    return 0;
}