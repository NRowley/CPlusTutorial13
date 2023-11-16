#include <iostream>
#include <string>
using namespace std;

class Character {
public:
	Character() {
		cout << "new char created \n";
		CharacterAge = new int(32);
		CharacterHealth = new float(100.f);
	}
	//Destructor
	~Character() {
		cout << "char destroyed \n";
		delete CharacterAge;
		delete CharacterHealth;
	}

	int* CharacterAge;
	float* CharacterHealth;
};



int main() {

	Character* Char = new Character;
	delete Char;



	system("pause");
}