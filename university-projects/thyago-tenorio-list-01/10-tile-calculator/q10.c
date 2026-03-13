// Author: jhonatanmickael
// Description: Program that calculates the number of tiles needed to cover a wall.
// Challenge by: Exercise List - Prof. Thyago Tenório (UFAL)
// Date: March 12, 2026

#include <stdio.h>

int main() {
	double altura, largura, area_azulejo, area_parede;

	printf("Digite a altura do azulejo em metros: \n");
	scanf("%lf", &altura);

	printf("Digite a largura do azulejo em metros: \n");
	scanf("%lf", &largura);
	
	area_azulejo = altura * largura;

	printf("Digite a altura da parede em metros: \n");
	scanf("%lf", &altura);

	printf("Digite a largura da parede em metros: \n");
	scanf("%lf", &largura);

	area_parede = altura * largura;

	printf("Para preencher a parede de área %.2f são necessarios %.2f azulejos. \n", area_parede,  area_parede/area_azulejo);
}
