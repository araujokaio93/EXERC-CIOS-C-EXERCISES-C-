#include <iostream>
#include <stdio.h>
#include <clocale>
#include <vector>
#include <string.h>
#include <cmath>
using namespace std;

int main (){
    setlocale (LC_ALL,("Portuguese"));
    int exec=0;
    int cl=0;
    int cc=0;
    string vetNomes[9999];
    double matDados[9999][8];
    double horaextra=0;
    double horas=0;
    double valorhoratrab=0;
    int depedente=0;
    double abonodependente=0;
    double inss=0;
    double irpf=0;
    double salarioabono=0;
    double salariodesconto=0;
    double totaldescontos=0;
    double salariototal=0;
    double salarioliquido=0;


    cout<<("Usu�rio, por favor, defina quantos funcion�rios pretende cadastrar durante � execu��o da aplica��o. (M�ximo de 50 funcion�rios cadastrados por execu��o.)")<<endl;
    cin >> exec;
    while((exec>=50) or (exec<1))
        {
        cout <<("\nUsu�rio, n�o � permitido o cadastro superior a 50 funcion�rios por execu��o do programa, reinsira valores v�lidos entre 1 e 50.\n")<<endl;
        cin >> exec;
    }
    cout<<endl;
    for(cl=0;cl<exec;cl++)
        {
        cout<<("Usu�rio, por favor, insira os nomes dos funcion�rios a serem cadastrados:")<<endl;
        cin >>vetNomes[cl];
        cout<<("\nUsu�rio, o nome do funcion�rio cadastrado �: ")<<vetNomes[cl]<<(" \n")<<endl;
    }
    system("cls");
    for (cl=0;cl<exec;cl++)
        {
        cout<<("Usu�rio, consta na base de dados, o funcion�rio cadastrado de nome: ")<<vetNomes[cl]<<(" ")<<endl;
    }
    cout<<endl;
    cout<<endl;
    for (cl=0;cl<exec;cl++)
        {
        cout<<("Usu�rio, por favor, insira o sal�rio base do funcion�rio de nome: ")<<vetNomes[cl]<<(" ")<<endl;
        cin>>matDados[cl][0];
        cout<<("\nUsu�rio, o sal�rio base do funcion�rio de nome: ")<<vetNomes[cl]<<(" �:  \nR$ ")<<matDados[cl][0]<<("\n")<<endl;
        cout<<("Usu�rio, por favor, informe o n�mero de dependentes do funcion�rio cadastrado: ")<<vetNomes[cl]<<(" ")<<endl;
        cin>>depedente;
        abonodependente=(depedente*50);
        matDados[cl][1]=abonodependente;
        salarioabono=matDados[cl][1]+matDados[cl][0];
        cout<<("\nUsu�rio, o funcion�rio de nome: ")<<vetNomes[cl]<<(" possu�, ")<<depedente<<(" dependentes, portanto fazendo jus ao pagamento no valor de : \nR$")<<matDados[cl][1]<<(" de ABONO DEPENDENTE\n")<<endl;
        cout<<("Usu�rio, informe a quantidade de horas trabalhadas pelo funcion�rio ")<<vetNomes[cl]<<(" ")<<endl;
        cin >>horas;
        valorhoratrab=(salarioabono/(horas*30));
        horaextra=(valorhoratrab*1.50);
        cout<<("\nUsu�rio, ao funcion�rio de nome: ")<<vetNomes[cl]<<(", com jornada laboral de ")<<horas<<(" horas, tendo o valor da hora trabalhada na import�ncia de: R$ ")<<valorhoratrab<<(" , � devido o pagamento da quantia de: \nR$ ")<<horaextra<<("\n")<<endl;
        matDados[cl][2]=horaextra;
        salariototal=(matDados[cl][0]+matDados[cl][2]+matDados[cl][1]);
        matDados[cl][3]=salariototal;
        cout<<("\nUsu�rio, o funcion�rio de nome: ")<<vetNomes[cl]<<(" possu� PROVENTOS TOTAIS no valor de: \nR$")<<matDados[cl][3]<<("\n")<<endl;
        inss=(matDados[cl][3]*0.11);
        matDados[cl][4]=inss;
        cout<<("\nUsu�rio, o funcion�rio de nome: ")<<vetNomes[cl]<<(" deve recolher de seus proventos totais a import�ncia de: \nR$ ")<<matDados[cl][4]<<(" como contribu���o previdenci�ria.")<<("\n")<<endl;
        if (matDados[cl][3]>3000)
        {
            irpf=(matDados[cl][3]*0.275);
            matDados[cl][5]=irpf;
            cout<<("\nUsu�rio, o funcion�rio de nome: ")<<vetNomes[cl]<<(" , possu� Proventos superiores � insen��o de imposto de renda, devendo recolher � import�ncia de 27.5% de seus proventos, totalizando: \nR$ ")<<matDados[cl][5]<<("\n")<<endl;
        }
        else if ((matDados[cl][3]>1500) and (matDados[cl][3]<3000))
        {
                irpf=(matDados[cl][3]*0.15);
            matDados[cl][5]=irpf;
            cout<<("\nUsu�rio, o funcion�rio de nome: ")<<vetNomes[cl]<<(" , possu� Proventos superiores � insen��o de imposto de renda, devendo recolher � import�ncia de 15% de seus proventos, totalizando: \nR$ ")<<matDados[cl][5]<<("\n")<<endl;

        }
        else {
            irpf=0;
            matDados[cl][5]=irpf;
            cout<<("\nUsu�rio, o funcion�rio de nome: ")<<vetNomes[cl]<<(" , � isento de contribu���o ao IMPOSTO DE RENDA.")<<endl;
        }
        salariodesconto=(matDados[cl][4]+matDados[cl][5]);
        matDados[cl][6]=salariodesconto;
        cout<<("\nUsu�rio, o funcion�rio de nome: ")<<vetNomes[cl]<<(" , possu� o total de descontos aos proventos totais, a quantia de : \nR$ ")<<matDados[cl][6]<<("\n")<<endl;
        salarioliquido=(matDados[cl][3]-matDados[cl][6]);
        matDados[cl][7]=salarioliquido;
        cout<<("\nUsu�rio, o funcion�rio de nome: ")<<vetNomes[cl]<<(" , possu� o sal�rio l�quido no total de: \nR$")<<matDados[cl][7]<<("\n")<<endl;
        for(cc=0;cc<8;cc++){}
    }
    cout<<endl;
    system("cls");
    for (cl=0;cl<exec;cl++)
        {
        cout<<("Usu�rio, segue abaixo os dados cadastrados de seus funcion�rios e os respectivos contra-cheques: ")<<endl;
        cout<<endl;
        cout<<("Funcion�rio:         ")<<vetNomes[cl]<<("   \n")<<endl;
        cout<<endl;
        cout<<("Sal�rio Base:     R$ ")<<matDados[cl][0]<<("\n")<<endl;
        cout<<("Abono Dependente: R$ ")<<matDados[cl][1]<<("\n")<<endl;
        cout<<("Horas Extras:     R$ ")<<matDados[cl][2]<<("\n")<<endl;
        cout<<endl;
        cout<<("Proventos Totais: R$ ")<<matDados[cl][3]<<(" \n")<<endl;
        cout<<endl;
        cout<<("DESCONTOS\n");
        cout<<endl;
        cout<<("INSS:             R$ ")<<matDados[cl][4]<<(" \n")<<endl;
        cout<<("Imposto de Renda: R$ ")<<matDados[cl][5]<<(" \n")<<endl;
        cout<<endl;
        cout<<("Descontos totais: R$ ")<<matDados[cl][6]<<(" \n")<<endl;
        cout<<endl;
        cout<<("SAL�RIO L�QUIDO:  R$ ")<<matDados[cl][7]<<(" \n")<<endl;
        for (cc=0;cc<8;cc++){}
    }




















    system ("PAUSE");
    return 0;
}
