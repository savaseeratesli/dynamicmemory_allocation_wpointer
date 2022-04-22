#include <iostream>
#include"dynamicMemory.h"

using namespace std;


int main()
{
	/*
	* Example exObj, * exPtr;//Pointer nesne oluşturmaz

	exPtr = &exObj;//Aynı sınıftan nesnelerin adresi

	exObj.x = 19;
	exObj.y = 4;

	exObj.print();
   
	(*exPtr).x = 35;
	(*exPtr).y = 60;
	(*exPtr).print();

	exPtr->x = 66;
	exPtr->y = 77;
	exPtr->print();
	
	*/
	
	/*
	* int* ptr = new int;

	Example* ptrExample = new Example;//new decont çalıştırmaz!!

	ptrExample->x = 19;
	ptrExample->y = 4;
	ptrExample->print();

	delete ptr;//NEW var delete yap.
	delete ptrExample;

	
	*/
	
	/*
	* int* ptrArray = new int[5];

	Example* ptrExArray = new Example[5];

	for (int i = 0; i < 5; i++)
	{
		//ptrArray[i] = i;
		//cout << ptrArray[i] << endl;

		ptrExArray[i].x = i;
		ptrExArray[i].y = i * i;
		ptrExArray[i].print();

	}

	delete[] ptrArray;
	delete[] ptrExArray;
	
	*/
	
	

	/*
	* int** ptr2array = new int* [5];//İşaretçinin adresini tutar

	Example** ptrEx2array = new Example *[5];

	for (int i = 0; i < 5; i++)
	{
		ptrEx2array[i] = new Example[5];//5 tane nesne oluştur arrayde
		
		
		//ptr2array[i] = new int[5];

		//ptr->- - - - - 
		//...
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			ptrEx2array[i][j].x = i;
			ptrEx2array[i][j].y = j;
			ptrEx2array[i][j].print();

			//ptr2array[i][j] = i;//ptr-> i ,---->j
		}
	}

	for (int i=0; i < 5; i++)
	{
		delete[] ptrEx2array[i];
	}

	delete[]ptrEx2array;

	
	*/
	
	//THIS POINTER
	//Nesnemizin adresini tutar
	//Sınıf içinde kullanılır
	Example exObj(19,4), exObj2(10,24);
	Example exObj3 = exObj.addExample(exObj2);//exObj nin thisi çalışır

	exObj3.print();






	return 0;
}


