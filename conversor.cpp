#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

using namespace std;
 int bin2dec()
   {    //funcao que converte de binario para decimal (inteiro)
        int valor=0,aux,j=0;
        char numbin[16]={0};
        scanf("%s", numbin);
    
        for(int i=15; i>0;i--){
            if(numbin[i]=='1'){
                valor += pow(2,j);
            }
            j++;
        }
        if(numbin[0]=='1'){
        return -1*valor;
    }
    return valor;
    }   
    
int dec2bin(int decimal){ //funcao que converte de decimal para binario
    int r, q = decimal;
	char bin1[16]={0};
	
	if(q<0){
        bin1[15]=49;
        q=abs(q);
	}else{
        bin1[15]='0';
    }
    
    for(int i=0 ;i<=14;i++){
        r = q%2;
        q /= 2;
        bin1[i]=r+48;
    }

    cout << "\n Número em binário: " ;

    for(int j = 15; j>=0; j--){
        cout << bin1[j];
    }
    
    return 0;
}


int main (){
  int opcao;
  int decimal;

  while (opcao != 5)
    {
      cout <<
	"\n==============BEM-VINDX AO CONVERSOR ENTRE BASES!================";
      cout << "\n Escolha a base do número que você quer converter e digite a opção desejada:";

      cout << "\n 1 - Binário ";
      cout << "\n 2 - Decimal";
      cout << "\n 3 - Hexadecimal";
      cout << "\n 4 - Binário complemento de 1 ";
      cout << "\n 5 - Binário complemento de 2 ";
      cout << "\n 6 - Encerrar Programa ";
      cout << "\n\n *********Feito por Adriana Silva, 2019*********\n";
      cin >> opcao;

      switch (opcao)
	{

	case 1:
	  {
	    system ("clear");
	    cout << "\n\n Base escolhida: Binário";
	    cout << "\n Digite o número desejado com até 16 dígitos. Ex: 010 é 0000000000000010 \n";
	    
	    cout << "\n Número em Decimal:" << bin2dec();
	    cout << "\n Número em Hexadecimal" ;
	    cout << "\n\n Insira 1 para voltar para o menu\n";
	    cin >> opcao;
	    if (opcao == 1)
	      {
		system ("clear");
	      }
	    break;
	  }

	case 2:
	  {
	    system ("clear");
	    cout << "\n\n Base escolhida: Decimal";
	   
	    cout << "\n Digite o número \n";
	    cin >> decimal;
	    dec2bin(decimal);
	    dec2hexa(decimal);
	    dec2bin1(decimal);
	    dec2bin2(decimal);
	    
	    cout << "\n\n Insira 1 para voltar para o menu\n";
	    cin >> opcao;
	    if (opcao == 1)
	      {
		system ("clear");

	      }
	    break;
	  }

	case 3:
	  {
	    system ("clear");
	    cout << "\n\n Base escolhida: Hexadecimal";
	    cout << "\n Digite o número \n";
	    cout << "\n\n Insira 1 para voltar para o menu";
	    cin >> opcao;
	    if (opcao == 1)
	      {
		system ("clear");

	      }
	    break;
	  }

	case 4:
	  {
	    system ("clear");
	    cout << "\n\n Base escolhida: Binário Complemento de 1";
	    cout << "\n Digite o número \n";
	    cout << "\n\n Insira 1 para voltar para o menu";
	    cin >> opcao;
	    if (opcao == 1)
	      {
		system ("clear");

	      }
	    break;
	  }
	case 5:
	  {
	    system ("clear");
	    cout << "\n\n Base escolhida: Binário Complemento de 2";
	    cout << "\n Digite o número \n";
	    cout << "\n\n Insira 1 para voltar para o menu";
	    cin >> opcao;
	    if (opcao == 1){
	    	system ("clear");
	      }
	    break;
	  }

	default:
	  {
	    system ("clear");

	    if (opcao == 6)
	      {
		system ("clear");
		cout << "\n\n Até a próxima! ;)";
		 exit(0);
	    break;
	   
	      }

	    cout << "\n\n Opção inválida!";
	    break;
	  }

	}

    }
return 0;
}
