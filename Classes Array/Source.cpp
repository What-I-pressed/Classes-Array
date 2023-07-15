#include <iostream>
#include <string>
#include "Arrayy.h"
#include "Arrayy.cpp"

using namespace std;

void main() {
	Arrayy <int> arr1;
	Arrayy <short> arr2;
	arr1.add(5);											//		add()
	arr1.add(4);
	arr1.add(3);
	arr1.add(2);
	arr1.add(1);
	cout << "Real size: " << arr1.getSize() << endl;//		getSize()
	arr1.setSize(6, 4);
	arr1.info();
	cout << "Upper bound: " << arr1.getUpperBound() << endl;//		getUpperBound()
	cout << "Arr2 is empty: " << boolalpha << arr2.isEmpty() << endl;//		isEmpty()
	arr1.freeExtra();//		freeExtra()
	arr1.info();
	Arrayy <int> arr3(arr1);
	arr1.removeAll();//		removeAll()
	arr3.info();
	cout << "Item with index [3] = " << arr3.getAt(3) << endl;//		getAt()
	arr3.setAt(3, 9);//		setAt()
	cout << "Now item with index [3] = " << arr3[3] << endl;
	arr1.add(0);
	arr1.add(-1);
	arr1.add(-2);
	arr1.add(-3);
	arr1.add(-4);
	arr3.append(arr1.getData(), arr1.getSize());//		append()			getData()
	arr3.info();
	arr3.insertAt(10, -5);//		insertAt()
	arr3.insertAt(0, 6);
	arr3.info();
	arr3.removeAt(0);//		removeAt()
	arr3.removeAt(10);
	arr3.info();
};