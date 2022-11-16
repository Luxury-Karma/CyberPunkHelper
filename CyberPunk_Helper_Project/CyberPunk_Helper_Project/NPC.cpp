#include "NPC.h"
#include<string>;
#include<vector>;
using namespace std;

	/*int N::NPC::test()
	{
		return 0;
	}*/


///BESOINS DE :
/// FONCTION POUR ALLOUER DES POINTS
/// FONCTION POUR DONNER DES OBJETS ALLEATOIRE\
/// FONCTION POUR DONNER DES NOMS ALLEATOIRE DEPUIS UNE LISTE DE NOM
/// FONCTION POUR AJOUTER DES ATTAQUES LIERS A CERTAINS OBJETS

void N::NPC::Givehp(N::NPC name) {
	double hpBrute = (name.stats[5] + name.stats[8] + 10) / 2;
	name.hp = floor(hpBrute);
}
//put 6 at all stats
void N::NPC::GiveBaseStats(N::NPC name) {
	
	for (int i = 0; i < 10 ; i++) {
		name.stats[i] = 6;
	}
}

//PARTIAL RANDOM
//UTILISER JASON FILE POUR METTRE LES TABLEAUX DU LIVRE PAR CLASS (p.73)
void GiveStats(N::NPC name) {
	
}

//UTILISER JASON FILE POUR METTRE LES TABLEAUX DES OBJETS (P.100-101)
void GiveObject(N::NPC name) {

}


//UTILISER JASON FILE POUR METTRE LES TABLEAUX DES ARMES (P.92, 94,95)
void GiveWeapon(N::NPC name) {

}
//UTILISER JASON FILE POUR METTRE LES TABLEAU DES ARMURES (p.97)
void GiveArmor(N::NPC name) {

}
//donner un nombre de chargeur a chaque NPC (calculer a moitier random et BASER sur les armes dans leurs inventaire
void GiveAmo(N::NPC name){}
//UTILISER JASON FILE POUR METTRE LES TABLEAUX DES SKILLS (P82,83,84,85) ET leur donner un niveau
void GiveSkill(N::NPC name){}
//UTILISER JASON FILE POUR METTRE LE TABLEAU DES CYBER GEAR. Donner un % de chance d'avoir chacun des types de gear et si on a un majeur % les modification
void GiveCyberGear(N::NPC name) {} 
//UTILISER LE JASON FILE POUR ASSOSSIER LE NOM DE L'ARME A UN DOMMAGE
void GiveAttack(N::NPC name){}
//Retirer les balles lors d'une attack
void RemoveBullet(N::NPC name) {}
//regarde si on a des munition pour l'arme
void canIUseWeapon(N::NPC name) {}
//retire les point de vie de l'armure, retire les points de vie du personnage
void damageTaken(N::NPC name, int damage){}

