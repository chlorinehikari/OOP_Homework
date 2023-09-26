#include<cstdio>
#include<cstdlib>
#include"OPEN.h"
#include"PUSH.h"
#include"CLOSE.h"

int main()
{
	int elephant = 1, fridge = 2;
	
	Touch(fridge);
	Pull(fridge);

	Push(elephant);
	Fasten(elephant);

	Close(fridge);
	system("pause");
	return 0;
}