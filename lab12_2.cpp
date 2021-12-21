#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>

using namespace std;

string cardNames[] = {"","A","2","3","4","5","6","7","8","9","10","J","Q","K"};
int cardScores[] = {0,1,2,3,4,5,6,7,8,9,10,10,10,10};

int drawCard(void){
	int x = rand()%14;
	if(x == 1) return 1;
	else if(x == 2) return 2;
	else if(x == 3) return 3;
	else if(x == 4) return 4;
	else if(x == 5) return 5;
	else if(x == 6) return 6;
	else if(x == 7) return 7;
	else if(x == 8) return 8;
	else if(x == 9) return 9;
	else if(x == 10) return 10;
	else if(x == 11) return 11;
	else if(x == 12) return 12;
	else return 13;
}



int main(){
	drawCard();
	return 0;
}