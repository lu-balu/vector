#include "vector.h"
#include <iostream>

int main(){
	Vector<int> v;
	//v.pushBack(5);
	//v.pushBack(10);
	//v.pushBack(23);
	//v.pushBack(14);
	//v.pushBack(7);
	//v.pushBack(3);
	//v.pushBack(75);
	//v.pushBack(-12);
	//v.pushBack(8);
	//v.pushBack(4);
	v.pushFront(1);
	v.pushFront(2);
	v.pushFront(3);
	v.pushFront(4);
	v.pushFront(5);
	v.pushFront(6);
	v.pushFront(7);
	v.pushFront(8);
	v.pushFront(9);
	v.pushFront(10);
	v.printInfo();
	v.insert (3, 2);
	v.printInfo();
	v.remove(3);
	v.printInfo();
	for(int i = 0; i < v.size(); i++){
		std::cout << v.getElementByIndex(i) << " ";
	}
	std::cout << std::endl;
	return 0;
}