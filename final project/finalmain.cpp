#include<iostream>
#include<fstream>
#include<ctime>
#include <string>
#include<stdio.h>
#include <vector>

int main()
{
	//Start Screen
	char start;


	printf("    Hangman    \n");
	printf(" By David Munoz \n insert name \n insert name\n");
	printf("_____________   \n");
	printf("|        }      \n");
	printf("|        o      \n");
	printf("|        |      \n");
	printf("|      / | \\   \n");
	printf("|     /  |  \\  \n");
	printf("|       / \\    \n");
	printf("|      /   \\   \n");
	printf("|               \n");
	printf("|               \n");
	printf("|_______________\n");
	printf("\n Press any key and enter to start\n");
	std::cin >> start;

	//Game
	int tries{ 6 }; // number of tries
	char Guess;
	bool CorrectGuess = false;
	std::string Word;
	std::string Wordlist[20] = { "unwieldy", "permit", "mouth", "umbrella", "squeal", "aromatic", "alleged", "walk", "houses", "wretched", "elated", "puzzling", "radiate", "embarrass", "plausible", "melodic", "boil", "argue", "trouble", "terrific" };


	// Get random word
	srand(time(NULL));
	int RandomNum = rand() % 20;
	Word = Wordlist[RandomNum];

	//Make word a mystery
	std::string MysteryWord = Word;
	int a = 0;
	for (int i = 0; i < MysteryWord.length(); ++i)
	{
		MysteryWord[i] = '_';
		a++;
	}

	// while loop for actual game 
	while (tries >= 0)
	{
		CorrectGuess = false;
		printf("The word you have is :\n\n");
		std::cout << MysteryWord << std::endl;
		printf("You have %d ", tries);
		printf("guesses left");
		std::cin >> Guess;

		// guess check
		for (int j = 0; j < MysteryWord.length(); j++)
		{
			if (Word[j] == Guess)
			{
				MysteryWord[j] = Guess;
				printf("congrats you found a letter");
				CorrectGuess = true;
			}
		}
		if (Word == MysteryWord)
		{
			printf("\n\n Congrats you guessed the word");
			break;
		}
		if (CorrectGuess == false)
		{
			tries--;
			printf("you guessed wrong :(");

		}

		switch (tries)
		{
		case 6:
		{
			printf("_____________   \n");
			printf("|        }      \n");
			printf("|               \n");
			printf("|               \n");
			printf("|               \n");
			printf("|               \n");
			printf("|               \n");
			printf("|               \n");
			printf("|               \n");
			printf("|               \n");
			printf("|_______________\n");
			break;
		}
		case 5:
		{
			printf("_____________   \n");
			printf("|        }      \n");
			printf("|        o      \n");
			printf("|               \n");
			printf("|               \n");
			printf("|               \n");
			printf("|               \n");
			printf("|               \n");
			printf("|               \n");
			printf("|               \n");
			printf("|_______________\n");
			break;

		}
		case 4:
		{
			printf("_____________   \n");
			printf("|        }      \n");
			printf("|        o      \n");
			printf("|        |      \n");
			printf("|        |      \n");
			printf("|        |      \n");
			printf("|               \n");
			printf("|               \n");
			printf("|               \n");
			printf("|               \n");
			printf("|_______________\n");
			break;

		}
		case 3:
		{
			printf("_____________   \n");
			printf("|        }      \n");
			printf("|        o      \n");
			printf("|        |      \n");
			printf("|      / |      \n");
			printf("|     /  |      \n");
			printf("|               \n");
			printf("|               \n");
			printf("|               \n");
			printf("|               \n");
			printf("|_______________\n");
			break;

		}case 2:
		{
			printf("_____________   \n");
			printf("|        }      \n");
			printf("|        o      \n");
			printf("|        |      \n");
			printf("|      / | \\   \n");
			printf("|     /  |  \\  \n");
			printf("|               \n");
			printf("|               \n");
			printf("|               \n");
			printf("|               \n");
			printf("|_______________\n");
			break;

		}
		case 1:
		{
			printf("_____________   \n");
			printf("|        }      \n");
			printf("|        o      \n");
			printf("|        |      \n");
			printf("|      / | \\   \n");
			printf("|     /  |  \\  \n");
			printf("|       /       \n");
			printf("|      /        \n");
			printf("|               \n");
			printf("|               \n");
			printf("|_______________\n");
			break;

		}
		case 0:
		{
			printf("_____________   \n");
			printf("|        }      \n");
			printf("|        o      \n");
			printf("|        |      \n");
			printf("|      / | \\   \n");
			printf("|     /  |  \\  \n");
			printf("|       / \\    \n");
			printf("|      /   \\   \n");
			printf("|               \n");
			printf("|               \n");
			printf("|_______________\n");
			printf("GAME OVER :(");
			tries = -1;
			break;

		}
		default:
			printf("if you are seeing this line then ther is an error.");
		}
		
	}
	return 0;

}