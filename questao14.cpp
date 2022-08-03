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


    cout<<("Usuário, por favor, defina quantos funcionários pretende cadastrar durante à execução da aplicação. (Máximo de 50 funcionários cadastrados por execução.)")<<endl;
    cin >> exec;
    while((exec>=50) or (exec<1))
        {
        cout <<("\nUsuário, não é permitido o cadastro superior a 50 funcionários por execução do programa, reinsira valores válidos entre 1 e 50.\n")<<endl;
        cin >> exec;
    }
    cout<<endl;
    for(cl=0;cl<exec;cl++)
        {
        cout<<("Usuário, por favor, insira os nomes dos funcionários a serem cadastrados:")<<endl;
        cin >>vetNomes[cl];
        cout<<("\nUsuário, o nome do funcionário cadastrado é: ")<<vetNomes[cl]<<(" \n")<<endl;
    }
    system("cls");
    for (cl=0;cl<exec;cl++)
        {
        cout<<("Usuário, consta na base de dados, o funcionário cadastrado de nome: ")<<vetNomes[cl]<<(" ")<<endl;
    }
    cout<<endl;
    cout<<endl;
    for (cl=0;cl<exec;cl++)
        {
        cout<<("Usuário, por favor, insira o salário base do funcionário de nome: ")<<vetNomes[cl]<<(" ")<<endl;
        cin>>matDados[cl][0];
        cout<<("\nUsuário, o salário base do funcionário de nome: ")<<vetNomes[cl]<<(" é:  \nR$ ")<<matDados[cl][0]<<("\n")<<endl;
        cout<<("Usuário, por favor, informe o número de dependentes do funcionário cadastrado: ")<<vetNomes[cl]<<(" ")<<endl;
        cin>>depedente;
        abonodependente=(depedente*50);
        matDados[cl][1]=abonodependente;
        salarioabono=matDados[cl][1]+matDados[cl][0];
        cout<<("\nUsuário, o funcionário de nome: ")<<vetNomes[cl]<<(" possuí, ")<<depedente<<(" dependentes, portanto fazendo jus ao pagamento no valor de : \nR$")<<matDados[cl][1]<<(" de ABONO DEPENDENTE\n")<<endl;
        cout<<("Usuário, informe a quantidade de horas trabalhadas pelo funcionário ")<<vetNomes[cl]<<(" ")<<endl;
        cin >>horas;
        valorhoratrab=(salarioabono/(horas*30));
        horaextra=(valorhoratrab*1.50);
        cout<<("\nUsuário, ao funcionário de nome: ")<<vetNomes[cl]<<(", com jornada laboral de ")<<horas<<(" horas, tendo o valor da hora trabalhada na importância de: R$ ")<<valorhoratrab<<(" , é devido o pagamento da quantia de: \nR$ ")<<horaextra<<("\n")<<endl;
        matDados[cl][2]=horaextra;
        salariototal=(matDados[cl][0]+matDados[cl][2]+matDados[cl][1]);
        matDados[cl][3]=salariototal;
        cout<<("\nUsuário, o funcionário de nome: ")<<vetNomes[cl]<<(" possuí PROVENTOS TOTAIS no valor de: \nR$")<<matDados[cl][3]<<("\n")<<endl;
        inss=(matDados[cl][3]*0.11);
        matDados[cl][4]=inss;
        cout<<("\nUsuário, o funcionário de nome: ")<<vetNomes[cl]<<(" deve recolher de seus proventos totais a importância de: \nR$ ")<<matDados[cl][4]<<(" como contribuíção previdenciária.")<<("\n")<<endl;
        if (matDados[cl][3]>3000)
        {
            irpf=(matDados[cl][3]*0.275);
            matDados[cl][5]=irpf;
            cout<<("\nUsuário, o funcionário de nome: ")<<vetNomes[cl]<<(" , possuí Proventos superiores á insenção de imposto de renda, devendo recolher à importância de 27.5% de seus proventos, totalizando: \nR$ ")<<matDados[cl][5]<<("\n")<<endl;
        }
        else if ((matDados[cl][3]>1500) and (matDados[cl][3]<3000))
        {
                irpf=(matDados[cl][3]*0.15);
            matDados[cl][5]=irpf;
            cout<<("\nUsuário, o funcionário de nome: ")<<vetNomes[cl]<<(" , possuí Proventos superiores á insenção de imposto de renda, devendo recolher à importância de 15% de seus proventos, totalizando: \nR$ ")<<matDados[cl][5]<<("\n")<<endl;

        }
        else {
            irpf=0;
            matDados[cl][5]=irpf;
            cout<<("\nUsuário, o funcionário de nome: ")<<vetNomes[cl]<<(" , é isento de contribuíção ao IMPOSTO DE RENDA.")<<endl;
        }
        salariodesconto=(matDados[cl][4]+matDados[cl][5]);
        matDados[cl][6]=salariodesconto;
        cout<<("\nUsuário, o funcionário de nome: ")<<vetNomes[cl]<<(" , possuí o total de descontos aos proventos totais, a quantia de : \nR$ ")<<matDados[cl][6]<<("\n")<<endl;
        salarioliquido=(matDados[cl][3]-matDados[cl][6]);
        matDados[cl][7]=salarioliquido;
        cout<<("\nUsuário, o funcionário de nome: ")<<vetNomes[cl]<<(" , possuí o salário líquido no total de: \nR$")<<matDados[cl][7]<<("\n")<<endl;
        for(cc=0;cc<8;cc++){}
    }
    cout<<endl;
    system("cls");
    for (cl=0;cl<exec;cl++)
        {
        cout<<("Usuário, segue abaixo os dados cadastrados de seus funcionários e os respectivos contra-cheques: ")<<endl;
        cout<<endl;
        cout<<("Funcionário:         ")<<vetNomes[cl]<<("   \n")<<endl;
        cout<<endl;
        cout<<("Salário Base:     R$ ")<<matDados[cl][0]<<("\n")<<endl;
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
        cout<<("SALÁRIO LÍQUIDO:  R$ ")<<matDados[cl][7]<<(" \n")<<endl;
        for (cc=0;cc<8;cc++){}
    }




















    system ("PAUSE");
    return 0;
}
