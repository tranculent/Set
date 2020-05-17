#include <iostream>
#include "Set.h"

int main()
{
	Set s;// {75,13,32,65,42,23}
	s.insert(75);
	s.insert(13);
	s.insert(32);
	s.insert(65);
	s.insert(42);
	s.insert(23);
	s.insert(32);
	s.display();
}