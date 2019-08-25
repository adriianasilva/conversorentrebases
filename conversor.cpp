#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

using namespace std;

int bin12dec(char Bin1[16]){
 int total=0,j=0,k=0;
    char bin1[16]={0};
    cin>>bin1;
    strcpy(bin1,Bin1);

    //INVERTE OS VALORES E EM SEGUIDA OS MULTIPLICA LOGO EM SEGUIDA
    for(int i=15; i>0;i--){
        if(bin1[i]=='0'){
            bin1[i]='1';
            
        }else if(bin1[i]=='1'){
            bin1[i]='0';
        }
        if(bin1[i]=='1'){
            total += pow(2,j);
        }
        j++;
    }

    //VERIFICA SE O PRIMEIRO DIGITO É 1 POR CONTA DO SINAL DE AMPLITUDE E RETORNA O TOTAL POSITIVO OU NEGATIVO
    if(bin1[0]=='0'){
        return -1*total;
    }
    return total;
}

int bin22dec(char Bin2[16]){

    //INICIALIZAÇÃO DOS VARIAVEIS, E PEGANDO O PARAMETRO
    int total=0,j=0,k=0;
	  char bin2[16]={0};
    strcpy(bin2,Bin2);

    for(int i=15;i>0;i--){
        if(bin2[i]=='1'){
            break;
        }else{
            k++;
        }
    }
    if(k==15){
        cout<<'0';
        return 0;
    }
    
    //SUBTRAI 1 E VÊ OQ ACONTECE

    if(bin2[15]==48){
    bin2[15]=47;
    }else {
    bin2[15]=48;
    }

    for(int i=15;i>0;i--){

        if (bin2[i]==47){
            bin2[i]=48;
            if (i==1){ 
                break; 
            }
            if(bin2[i-1]==49){
                bin2[i-1]=48;
            }else if(bin2[i-1]==48){
                bin2[i-1]=47;
            }
        } 
    } 
    //INVERTE OS VALORES E EM SEGUIDA OS MULTIPLICA LOGO EM SEGUIDA
    for(int i=15; i>0;i--){
        if(bin2[i]=='0'){
            bin2[i]='1';
            
        }else if(bin2[i]=='1'){
            bin2[i]='0';
        }
        if(bin2[i]=='1'){
            total += pow(2,j);
        }
        j++;
    }

    //VERIFICA SE O PRIMEIRO DIGITO É 1 POR CONTA DO SINAL DE AMPLITUDE E RETORNA O TOTAL POSITIVO OU NEGATIVO
    if(bin2[0]=='0'){
        cout<<total*-1;
        return -1*total;
    }
    cout<<total;
    return total;
}

int dec2bin2(int decimal){ //funcao que converte de decimal para binario complemento de 2
  int r, q = decimal;
	char bin2[16]={0};
	if(q<0){
        bin2[15]=49; 
        q=abs(q);
	}else{
        bin2[15]='0';
  }
    
  for(int i=0 ;i<=14;i++){
        r = q%2;
        q /= 2;
        bin2[i]=r+48;
  }
  
  for(int i=0;i<=15;i++){
        if(bin2[i]=='0'){
            bin2[i]='1';
        }else if(bin2[i]=='1'){
            bin2[i]='0'; 
        }
  }
  
  if(bin2[0]==48){
    bin2[0]=49;
  }else {
    bin2[0]=50;
  }

  for(int i=0;i<15;i++){

    if (bin2[i]==50){
        bin2[i]=48;
        if (i==14){ 
          break; 
        }
        if(bin2[i+1]==49){
          bin2[i+1]=50;
        }else if(bin2[i+1]==48){
          bin2[i+1]=49;
        }
    } 
  } 
    cout << "\n Número em binário de complemento 2: " ;

  for(int j = 15; j>=0; j--){
      cout << bin2[j];
  }
    
  return 0;
}


int dec2bin1(int decimal){ //funcao que converte de decimal para binario complemento de 1
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
  
  for(int i=0;i<=15;i++){
        if(bin1[i]=='0'){
            bin1[i]='1';
        }else if(bin1[i]=='1'){
            bin1[i]='0';
        }
  }


  cout << "\n Número em binário de complemento 1: " ;

  for(int j = 15; j>=0; j--){
      cout << bin1[j];
  }
    
  return 0;
}
 int bin2dec()
   {    //funcao que converte de binario para decimal (inteiro)
        int valor=0,aux,j=0;
        char numbin[16]={0};
        cin >> numbin;
    
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

    int dec2hexa(int decimal){ //função que converte decimal em hexadecimal
    
    int r, q=decimal;
	char hexa[5]={0};

	if(q<0){
        hexa[4]='-';
        q=abs(q);
	}else{
        hexa[4]='+';
	}
	
    for(int i=0;i<4;i++){
        r = q%16;
        q/= 16;

        if(r==10){
            strcat(hexa,"A");
        }else if(r==11){
            strcat(hexa,"B");
        }else if(r==12){
            strcat(hexa,"C");
        }else if(r==13){
            strcat(hexa,"D");
        }else if(r==14){
            strcat(hexa,"E");
        }else if(r==15){
            strcat(hexa,"F");
        }else {
            hexa[i]=r+48;
        }
    }
    cout << "\n Número em Hexadecimal: ";
  
    for(int j = 4; j>=0; j--){ //imprimir ao contrario 
       cout << hexa[j];
    }
    return 0;
}

    
int main (){
  int opcao;
  int decimal;
  int retorno;

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
		int rtn;
		rtn = bin2dec();

	    cout << "\n Número em Hexadecimal" << dec2hexa ;
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
	    cout << "\n\n Insira 1 para voltar para o menu\n";
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
      char bin1[16]={0};
      cin>>bin1;
      int a;
	    a = bin12dec(bin1); 
	    cout << "\n\n Base escolhida: Binário Complemento de 1";
	    cout << "\n Digite o número desejado com até 16 dígitos. \n";
		  cout << "Número em decimal: " << a;
		  cout << "Número em binário: " << dec2bin(a);
		  cout << "Número em binário complemento de 2: " << dec2bin2(a);
		  cout << "Número em Hexadecimal: " << dec2hexa(a);
		  cout << "\n\n Insira 1 para voltar para o menu\n";
	    cin >> opcao;
	    if (opcao == 1) {
		system ("clear");

	      }
	    break;
	  }
	case 5:
	  {
		char bin2[16]={0};
	    system ("clear");
	    cout << "\n\n Base escolhida: Binário Complemento de 2";
	 	cout << "\n Digite o número desejado com até 16 dígitos. Ex: 1000110 =  0000000001000110\n";
		cin >> bin2;
		retorno = bin22dec(bin2);
		cout << "Número em decimal: " << retorno<<endl;
		cout << "Número em binário: " << dec2bin(retorno);
		cout << "Número em binário complemento de 1: " << dec2bin1(retorno);
		cout << "Número em Hexadecimal: " << dec2hexa(retorno);
	    cout << "\n\n Insira 1 para voltar para o menu\n";
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
