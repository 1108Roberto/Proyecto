#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctime>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	
	int dinero, dinerocasa, ganado, victoria, dado1, dado2, Menor, Mayor, opcion, opcioncorrecta;
	char repuesta, repuesta1='s', repuesta2='n';
	srand(time(NULL));
	int valor=dado1+dado2;
	
	while(repuesta=='s'&&dinero)
	
		
		cout<<endl;
		dinero=1000, dinerocasa=100000, ganado=100, victoria=0;
		valor=dado1+dado2;
		printf("Hay que adivinar si el valor de ambos dado es mayor o menor.\nLos valor es 2 a 12.\nUsted Empieza con %i$.\n\n",dinero);
		
		
		while((dado1<1)&&(dado2<2)&&(dado1==dado2));
		{
			do
			{
				dado1=rand()%(1-6);
				dado2=rand()%(1-6);
			}
		
		
		while((dado1<1)&&(dado2<1)&&(dado1==dado2));
		
			if(valor>6)
			{
				opcioncorrecta=1;
			}
			
			else if(valor<6)
			{
				opcioncorrecta=2;
			}
			
			do
			{
				printf("El primer dado es: %i\n",dado1);
				printf("El segundo dado es: %i\n",dado2);
				printf("El valor del ambos dado sera mayor o menor?(1.Mayor, 2.Menor): ");
				scanf("%i",&opcion);
				system("cls");
			}
			
			while(opcion!=1&&opcion!=2);
			
			if(opcion==opcioncorrecta)
			{
				victoria++;
				dinero=dinero+100;
				dinerocasa=dinerocasa-100;
				ganado=100+victoria;
				valor=dado1+dado2;
				printf("Correcto. El valor de ambos dado es: ",valor);
				cout<<"Valor"<<endl;
				printf("Usted tiene %i$ en la mesa\n",ganado);
				printf("Usted cuenta con %i$\n",dinero);
				printf("A la casa le queda %i$\n\n",dinerocasa);
				
				do
				{
					printf("Desea continuar? (S/N): ");
					fflush(stdin);
					scanf("%c",&repuesta);
					system("cls");
				}
				
				while(repuesta!='s'&&repuesta!='n');
				
				if(repuesta!='n')
				{
					dinero=dinero+ganado;
					printf("Usted cuenta con %i$...\n",dinero);
					printf("A la Casa le queda %i$...\n",dinerocasa);
					ganado=100;
					victoria=0;
					
					do
					{
						printf("Desea continuar? (S/N): ");
						fflush(stdin);
						scanf("%c",&repuesta);
						system("cls");
					}
					
					while(repuesta!='s'&&repuesta!='n');
				}
			}
			
			else if(opcion!=opcioncorrecta)
			{
				dinero=dinero-100;
				dinerocasa=dinerocasa+ganado;
				ganado=100;
				victoria=0;
				printf("------------Perdiste!------------");
				printf("EL valor del dado es era: ",valor);
				printf("Le queda %i$...\n",dinero);
				printf("A la casa le queda %i$...\n",dinerocasa);
				
				do
				{
					printf("Desea continuar? (S/N): ");
					fflush(stdin);
					scanf("%c",&repuesta);
					system("cls");
				}
				
				while(repuesta!='s'&&repuesta!='n');
				
			}
		}
	
		do
		{
			if(dinero==0)
			{
				printf("------------Game over------------");
			}
			else{
				printf("Te has retirado con %i$!!\n",dinero);
			}
			printf("Quiere volver a jugar? (empexara desde0) (S/N): ");
			fflush(stdin);
			scanf("%c",&repuesta);
			system("cls");
		}
		
		while(repuesta!='s'&&repuesta!='n');
	
                                      
	printf("-----------Gracias por jugar------------");
			
	return 0;
}