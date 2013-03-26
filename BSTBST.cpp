// BSTBST.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "bstbst.h"
#include "stdafx.h"
#include "stdio.h"
#include <stdio.h> 
#include <iostream> 
#include <string>
#include <istream>
#include <fstream>

int main(int argc, char* argv[])
{
  BBst newhot;
	
	//BBst newhot = new BBst();
	newhot.testt = 234;
	newhot.CreatBst(4, 1);
	newhot.PrintBST();
	
	
	
	newhot.newnode;
	
	//these nest 2 lines are not needed, however, they do work!
	//just leaving as an example. 
	BSTnode * yestest = new BSTnode[2];
	yestest[0].sdf = 3;
	//
	
	//asdf();
	//newhot.newnode dfdf[3];
	//newhot.newnode
	printf("Hello World!\n");
	return 0;
}



/*
decal_booklist * CVSAlist = new decal_booklist[decalBufferSize];



typedef struct 
{
	LONGLONG decalNum ;
	LONGLONG minDecal;
	LONGLONG maxDecal;
	CStdString strFormTypCd;	
	LONGLONG highestUsed;
	int dQuantity;
	vector<LONGLONG> DecalBookList;
	//vector<LONGLONG> DecalBookList2;
}
decal_booklist;
*/
