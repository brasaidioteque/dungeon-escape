# pragma once
# include <iostream>
# include <string>


class Personagem { 
public:
	std::string nome;
	int vida;
	int ataque;
	
	Personagem(std::string nomePersonagem, int vidaPersonagem, int ataquePersonagem) 
		: nome(nomePersonagem), vida(vidaPersonagem), ataque(ataquePersonagem) {}
		
	void apresentar () {
		std::cout<< "Personagem: " << nome <<std::endl;
		std::cout<< "Vida: " << vida <<std::endl;
		std::cout<< "Ataque: " << ataque <<std::endl;	}
	
};
