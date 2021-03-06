/* Yellow Project by LIU Vincent
 *
 * My first C++ application I made in order to enhance my skill set and for school coursework (2 weeks of work).
 *
 * Prerequisites
 * `sudo apt-get install libsfml-dev`
 * 
 * Installing
 * `make`
 *
 * How to play
 * ./play
 *
 * References
 * [1] How to Read from a Text File, Character by Character in C++, stackoverflow
 * https://stackoverflow.com/questions/12240010/how-to-read-from-a-text-file-character-by-character-in-c
 * [2] When should vector list be used, StackExchange
 * https://gamedev.stackexchange.com/questions/4887/when-should-vector-list-be-used
 * [3] Segmentation fault when push_back to vector c++, stackexchange
 * https://stackoverflow.com/questions/41712386/segmentation-fault-when-push-back-to-vector-c
 * [4] C++: Could Polymorphic Copy Constructors work?, stackoverflow
 * https://stackoverflow.com/questions/1021626/c-could-polymorphic-copy-constructors-work
 * [5] Copying a Polymorphic object in C++, stackoverflow
 * https://stackoverflow.com/questions/5148706/copying-a-polymorphic-object-in-c
 * [6] Documentation of SFML 2.5.1, SFML
 * https://www.sfml-dev.org/documentation/2.5.1/
 * [7] Tutorial: Create and Use SetIcon, SFML
 * https://github.com/SFML/SFML/wiki/Tutorial:-Create-and-Use-SetIcon
 */

#include <iostream>
#include <fstream>
#include "Screen.hh"
#include "Game.hh"
#include "Ghost.hh"
#include "GhostDumb.hh"
#include <time.h>

#include "SFML/Graphics.hpp"

int main(int argc, char ** argv)
{
	srand (time(NULL));
	Game g;
	g.run();

	return 0;
}
