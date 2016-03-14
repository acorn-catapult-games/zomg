//Sean Burger
#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Game.h"

//Run game here. needs to read from stdin and determin what to do then 
using namespace std;
int main(int argc,char ** argv ){
	if (argc < 3){
		fprintf(stdout,"needs 2 arguements #Humans, #Zombies");
		return 0;
	}
	Game * game = new Game(atoi(argv[1]),atoi(argv[2]));	

}
