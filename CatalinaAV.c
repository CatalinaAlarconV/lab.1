#include <stdio.h>
#include <stdlib.h>


int main ()
{
	float candidato1=0, candidato2=0, candidato3=0,nulos=0,total_votos =0;
	char voto;
	//float prom1=0, prom2=0, prom3=0;
	while (voto!='f' && voto!='F'){
		printf ("ingrese voto: ");
		//system("clear");
		scanf ("%c", &voto);
		
		if (voto=='1'){
				candidato1 = candidato1 + 1 ;
			}
			else
				if(voto=='2'){
					candidato2 = candidato2 + 1;
				}
				else
					if (voto=='3'){
						candidato3 = candidato3 + 1;
					}
					else{
						if (voto!='f'){
							nulos=nulos+1;
						}
					}
		while(getchar()!='\n');											
	}
		char porcent = '%';
		total_votos=candidato1+candidato2+candidato3+nulos;
		printf("%.f votos candidato1 (%.2f%c),\n%.f votos candidato2 (%.2f%c),\n%.f votos candidato3 (%.2f%c)\n",candidato1,(candidato1/total_votos)*100,porcent,candidato2,(candidato2/total_votos)*100,porcent, candidato3,(candidato3/total_votos)*100,porcent);
		printf("%.f votos nulos (%.2f%c),\n",nulos,(nulos/total_votos)*100,porcent);			
		printf("%.f total votos ",total_votos);	
		
		printf("\n");
		if(candidato1>candidato2 && candidato1>candidato3){
			printf("gana candidato1");
		}
		else{
			if(candidato2>candidato1 && candidato2>candidato3){
				printf("gana candidato2");
			}
			else{
				if(candidato3>candidato2 && candidato3>candidato1){
					printf("gana candidato3");
				}
				else{
					printf("empate");
				}
			}
		}
}
