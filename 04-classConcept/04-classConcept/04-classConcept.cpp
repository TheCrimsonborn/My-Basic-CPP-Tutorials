//
// Created by Halil Acar on 23.05.2021.
//
#include <iostream>
#include "Array.h"
using namespace std;

int main()
{
	Array mainArray(10);
	Array mainArray2(mainArray);
	cout << "Capacity: " << mainArray.getCapacity() << endl;
	cout << "Size: " << mainArray.getSize() << endl;

	cout << "Capacity: " << mainArray2.getCapacity() << endl;
	cout << "Size: " << mainArray2.getSize() << endl;

	mainArray.AddItem(5);
	mainArray.AddItem(12);
	mainArray.AddItem(3);
	mainArray.AddItem(8);
	mainArray.AddItem(7);
	mainArray.AddItem(23);
	mainArray.AddItem(92);
	mainArray.AddItem(3);
	mainArray.AddItem(85);
	mainArray.AddItem(76);
	mainArray.AddItem(32);
	mainArray.AddItem(3);
	mainArray.printItem();
	mainArray.AddItem(42);
	mainArray.printItem();

	Array mainArray3 = mainArray;
	mainArray3.printItem();
	mainArray3.AddItem(15);
	mainArray3.AddItem(18);

	mainArray.printItem();
	mainArray3.printItem();

	mainArray3.removeIndexItem(1);
	mainArray3.printItem();

	mainArray3.removeItem(3);
	mainArray3.printItem();

	mainArray3.findElement(12, 2);


	return 0;
}

