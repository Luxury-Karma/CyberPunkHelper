#pragma once
#include <iostream>
#include<string>
#include<vector>

using namespace std;
namespace N {
	
	class NPC {
		void Givehp(N::NPC name);
		
		
	public:
		void GiveBaseStats(N::NPC name);
		int hp;
		string name;
		int age;
		vector<string> objectOnSelf;
		int stats[10];
		/*
		* 0 : int
		* 1 : ref
		* 2 : dex
		* 3 : tech
		* 4 : cool
		* 5 : will
		* 6 : Luck
		* 7 : move
		* 8 : body
		* 9 : emp
		*/
		//int Givehp(int will, int body);
		
	};
	
	
}

