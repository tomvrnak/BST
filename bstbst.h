/*
class MainClass
{
  //three basic things:
	1. member varibles

	2. consructors

	3. methods
}

implementation of constructors:

MainClass::SomeConstructedClass()
{

}

methods:

void MainClass::methods( void ) 
{
 	printf("NameOfThingNameOfThing\n");
}
*/







/*				  classEntity
                 /           \
               /              \
             /                 \
         classLiving          ClassNonLiving
         /  \			          /	      \
       /      \				     /          \			
   classWarm  classCold       project       classVehicle
     Blooded   Blooded 

*/

#include "stdafx.h"
#include "stdio.h"
#include <iostream>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cstring>




#include <stdio.h> 

typedef struct node
{
	node* nodeLeft;
	node* noderight;
	int sdf;

}
BSTnode;



/////////////////////////////////////////////////////////////////

//class AllClasses
//{
//}


//this can be considered the base class
class BBst
{
	
	
	bool BSTBSTBST;
public:
	BBst();
	int testt;
	void CreatBst(int valuee, bool first);
	void PrintBST();
	BSTnode newnode; 
//	int cnt = 0;
};


BBst::BBst()
{
	int rt = 34;
}

void BBst::CreatBst(int value, bool first)
{
	int ert = 45;
	//if a tree has been started, add new incoming node.
	//if not, new incoming node witll be node in new tree
	//regardless, we need to create a new node
	//BSTnode * root = NULL;
	if(first==1)
	{
		BSTnode * root = new BSTnode;
		roott->sdf = value;
	}
	else//tree already exists
	{
		BSTnode * Newnode = new BSTnode;
		Newnode->sdf = value;
		node* nodeLeft;
		node* noderight;
	}
		

}

void BBst::PrintBST()
{
		//BSTnode * yestest = new BSTnode[0];
		//yestest[0].sdf = value;
}


