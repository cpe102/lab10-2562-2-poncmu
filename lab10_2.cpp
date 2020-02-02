#include<iostream>
#include<string>
#include <ctime>
#include <cstdlib>

using namespace std;

string cardNames[] = {"","A","2","3","4","5","6","7","8","9","10","J","Q","K"};
int cardScores[] = {0,1,2,3,4,5,6,7,8,9,10,10,10,10};

int drawCard(void){
	//Write the function to random the number from 1 to 13 and return that random number.
	return rand()%14+1;
}

int calScore(int x,int y,int z){
	//Write the function to calculate the score with is the rightmost digit of summation of the scores from three cards.
	//Return the score.
	return (cardScores[x]+cardScores[y]+cardScores[z])%10; 
}

int findYugiAction(int s){	
	if(s == 9) return 2; // Yugi will definitely stay (2) when current score (s) is equal to 9
	else if(s < 6) return 1; // Yugi will definitely draw (1) when current score (s) is less than 6
	else{
		int x=rand()%100+1;
		if(x<=31)
		return 2;
		else
		{
			return 1;
		}
		
		// If current score is 6,7,8, Yugi will draw with probability 69% and will stay with probability 31% 
		// Write conditions here using random number 
	}
}

void checkWinner(int p, int y){
	// Write condition for cout in this function
	cout << "\n---------------------------------\n";
	if(p==y)
	cout <<   "|             Draw!!!           |"; // when p is equal to y
	else if(p>y)
	cout <<   "|         Player wins!!!        |"; // when p is greater than y
	else if(y>p)
	cout <<   "|          Yugi wins!!!         |"; // when p is less than y
	cout << "\n---------------------------------\n";
}

int main(){	
	srand(time(0));
	int playerScore, yugiScore, playerAction, yugiAction;
	int playerCards[3] = {drawCard(), drawCard(), 0};
	int yugiCards[3]={drawCard(),drawCard(),0}; //This line of code is not completed. You need to initialize value of yugiCards[].
	
	
	cout << "---------ORE NO TURN, DRAW!!!------------\n";
	cout << "Your cards: " << cardNames[playerCards[0]] << " " << cardNames[playerCards[1]] << "\n";
	playerScore = calScore(playerCards[0],playerCards[1],playerCards[2]);
	cout << "Your score: " << playerScore << "\n";
	do{
		cout << "(1) Destiny draw (2) Stay, SELECT: ";
		cin >> playerAction;
	}while(playerAction != 1 && playerAction != 2);
	if(playerAction == 1){
		//The following lines of code are not completed. Please correct it.
		
		cout << "Player draws the 3rd card!!!" << "\n";
		playerCards[2]=drawCard();
		cout << "Your 3rd card: " <<cardNames[playerCards[2]]<< "\n";
		playerScore=calScore(playerCards[0],playerCards[1],playerCards[2]);
		cout << "Your new score: " <<calScore(playerCards[0],playerCards[1],playerCards[2]) <<"\n";
	

	}
	cout << "------------ Turn end -------------------\n\n";
	
	
	//The following lines of code for Yugi's turn are not completed. Please correct it.
	
	cout << "---------YUGI'S TURN, DRAW!!!------------\n";
	cout << "Yugi's cards: " <<cardNames[yugiCards[0]]<<" "<<cardNames[yugiCards[1]] <<"\n";
	
	cout << "Yugi's score: " << calScore(yugiCards[0],yugiCards[1],yugiCards[2]) << "\n";
	yugiAction = findYugiAction(yugiScore);
	if(yugiAction == 1){
		cout << "Yugi draws the 3rd card!!!\n";
		yugiCards[2]=drawCard();
		cout << "Yugi's 3rd card: " <<cardNames[yugiCards[2]]<< "\n";
		yugiScore=calScore(yugiCards[0],yugiCards[1],yugiCards[2]);
		cout << "Yugi's new score: " << calScore(yugiCards[0],yugiCards[1],yugiCards[2])<<"\n";
	}
	cout << "------------ Turn end -------------------\n";

	
	checkWinner(playerScore,yugiScore);
}
