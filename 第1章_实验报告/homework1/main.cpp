#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<iostream>
#include"OPEN.h"
#include"PUSH.h"
#include"CLOSE.h"
using namespace std;

int main()
{
	string elephant = "elephant", fridge = "fridge";
	
	Touch(fridge);
	Pull(fridge);

	Push(elephant);
	Fasten(elephant);

	Close(fridge);
	system("pause");
	return 0;
}