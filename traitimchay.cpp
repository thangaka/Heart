#include<iostream>
#include<windows.h>

int main(){
	
	float x, y, z;
	for(y = 1.5; y > -1.5; y-=0.1)
	{
		for (x = -1.5; x < 1.5; x += 0.05)
		{
			z = x * x + y * y - 1;
			putchar(z * z * z - x * x * y * y * y <= 0.0 ? 'x' : ' ');
		}
		Sleep(100);
		putchar('\n');
	}
	printf("                         I LOVE YOU!!!");
	return 0;
}

