#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

using namespace std;

int hexa2dec(char Hexa[5]){ //função que converte de hexa para decimal
  char hexa[5]={0};
  strcpy(hexa,Hexa);
  int teile=0,j=0,total=0;
  if (hexa[0]=='-'){
    teile=1;
  }

  for(int i=4;i>0;i--){
    if(hexa[i]=='A'){
      total+= 10*pow(16,j);
    }else if (hexa[i]=='B'){
      total+= 11*pow(16,j);
    }else if (hexa[i]=='C'){
      total+= 12*pow(16,j);
    }else if (hexa[i]=='D'){
      total+= 13*pow(16,j);
    }else if (hexa[i]=='E'){
      total+= 14*pow(16,j);
    }else if (hexa[i]=='F'){
      total+= 15*pow(16,j);
    }else if (hexa[i]=='0'){
      total+= 0;
    }else if (hexa[i]=='1'){
      total+= 1*pow(16,j);
    }else if (hexa[i]=='2'){
      total+= 2*pow(16,j);
    }else if (hexa[i]=='3'){
      total+= 3*pow(16,j);
    }else if (hexa[i]=='4'){
      total+= 4*pow(16,j);
    }else if (hexa[i]=='5'){
      total+= 5*pow(16,j);
    }else if (hexa[i]=='6'){
      total+= 6*pow(16,j);
    }else if (hexa[i]=='7'){
      total+= 7*pow(16,j);
    }else if (hexa[i]=='8'){
      total+= 8*pow(16,j);
    }else if (hexa[i]=='9'){
      total+= 9*pow(16,j);
    }
    j++;
  }
  if (teile==1){
    return -1*total;
  }
  return total;
}

int bin12dec(char Bin1[16]){ //função que converte de binario complemento de 1 pra decimal
    char bin1[16]={0};
    strcpy(bin1,Bin1);
    int total=0,j=0,k=0;
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

    if(bin1[0]=='0'){
        return -1*total;
    }
    return total;
}

int bin22dec(char Bin2[16]){
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

    if(bin2[0]=='0'){
        cout<<total*-1;
        return -1*total;
    }
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
 int bin2dec(char Numbin[16])
   {    //funcao que converte de binario para decimal (inteiro)
        char numbin[16]={0};
         strcpy(numbin,Numbin);
         int valor=0,aux,j=0;
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
	    char numbin[16]={0};
      cin >> numbin;
      int rtn;
      rtn = bin2dec(numbin);
	    cout << "\n Número em Decimal: " << rtn;
	    cout << dec2hexa(rtn);
      cout << dec2bin1(rtn);
	    cout << dec2bin2(rtn);
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
      char hexa[5]={0};
      cout << "\n\n Base escolhida: Hexadecimal";
	    cout << "\n Digite o número: \n";
      cin >> hexa;
      int h;
      h = hexa2dec(hexa);
	    cout << "\n Número em Decimal: " << h;
	    dec2bin(h);
      dec2bin1(h);
	    dec2bin2(h);
     
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
	    cout << "\n\n Base escolhida: Binário Complemento de 1";
	    cout << "\n Digite o número desejado com até 16 dígitos. Ex: 010 é 0000000000000010. \n";
      cin>>bin1;
      int a;
	    a = bin12dec(bin1); 
		  cout << "\n Número em decimal: " << a;
		  cout << dec2bin(a);
		  cout << dec2bin2(a);
		  cout << dec2hexa(a);
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
		cout << "\n Número em decimal: " << retorno;
		cout << dec2bin(retorno);
		cout << dec2bin1(retorno);
		cout << dec2hexa(retorno);
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

	    if (opcao == 6){
        system ("clear");
        cout << "\n Até a próxima! ;)";
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
