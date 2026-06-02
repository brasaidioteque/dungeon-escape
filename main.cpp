# include <iostream>
# include "personagem.h"

int main () {
	Personagem heroi ("Heroi", 100, 10);	
	heroi.apresentar();
	
	Inimigo goblin ("Goblin", 30, 5, "Goblin");
	goblin.apresentar();
	
	return 0;
}
