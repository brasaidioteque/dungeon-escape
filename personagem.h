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
		std::cout<< "Personagem: " << nome << std::endl;
		std::cout<< "Vida: " << vida << std::endl;
		std::cout<< "Ataque: " << ataque << std::endl;	
	}
	
};
class Inimigo : public Personagem {
	public:
			std::string tipo;
			
			Inimigo(std::string nomePersonagem, int VidaPersonagem, int ataquePersonagem, std::string tipoPersonagem)
			: Personagem(nome, vida, ataque), tipo(tipoPersonagem) {}
			
			void apresentar() {
				std::cout<< ":3 [INIMIGO] " << nome
						 << "| Tipo: " << tipo
						 << "| Vida: " << vida
						 << "| Ataque: " << ataque << std::endl;
			}
};
