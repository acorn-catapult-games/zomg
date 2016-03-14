//Sean Burger and others
//Define things that game knows or does
#include <string>

class Game{
	std::string Land[1024][1024];
	struct player ** humans;
	struct player ** zombies;
	struct player ** walls;
	int numHumans;
	int numZombies;

public:
	Game(int humans, int zombies);
	Game();
		
	int move(struct player * person, int x, int y);
	int attack(struct player * aggres, struct player * defend, struct weapon * item);
	void printVeiw(struct player * focus);		
};
struct player{
	int xPos;
	int yPos;
	int human;
	int veiwDistance;
	struct weapon ** weapons;
};

struct weapon{
	std::string name;
	int distance;
	float decay;
	int ammo;
};
