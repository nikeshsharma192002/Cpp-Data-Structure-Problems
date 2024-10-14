#include <iostream>
#include <conio.h>
using namespace std;
int startfile();  
int game();          
void asterisk();     
void start();        
int checkwin();      
void howtoplay();
void gamerule();     
void help();         
void aboutgame();
void credits();        
int i;
char square[9]={'1','2','3','4','5','6','7','8','9'};
int  main(){
	int y;
	system("cls");
	startfile();
	getch();
}
int startfile(){
	asterisk();
	system("cls");
	cout<<"\t\t\t\tWelcome to Tic Tac Toe game"<<endl;
	int choice;
	asterisk();
	cout<<"\n1.Play game\n2.Help\n3.Quit";
	cin>>choice;
	switch(choice){
		case 1:game(); break;
		case 2:help(); break;
		case 3:getch();  break;
		default:cout<<"Wrong choice, enter again ";
			getch();
			startfile();
		}
	return choice;
}
int game(){
	system("cls");
	int player;
	do
	{
	int choice,mark;
		start();
		player=(player%2)?1:2;
		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;
		if(player==1)
			mark='X';
		else if(player==2)
			mark='O';
		if (choice == 1 && square[0] == '1')
			square[0] = mark;
			else if (choice == 2 && square[1] == '2')
			square[1] = mark;
		else if (choice == 3 && square[2] == '3')
			square[2] = mark;
		else if (choice == 4 && square[3] == '4')
			square[3] = mark;
		else if (choice == 5 && square[4] == '5')
			square[4] = mark;
		else if (choice == 6 && square[5] == '6')
			square[5] = mark;
		else if (choice == 7 && square[6] == '7')
			square[6] = mark;
		else if (choice == 8 && square[7] == '8')
			square[7] = mark;
		else if (choice == 9 && square[8] == '9')
			square[8] = mark;
		else
		{
			cout<<"Invalid move ";
			player--;
			getch();
		}
		i=checkwin();
		player++;
	}while(i==-1);
	start();
	if(i==1)                {
		cout<<"==>\aPlayer "<<--player<<" win "<<endl;    }
	else if(i==0)
		cout<<"==>\aGame draw"<<endl;
	cout<<"Thanks for playing. Bye bye";
	getch();
	return 0;
	}
void start(){
	system("cls");
	cout<<"Let's play:\n ";
	asterisk();
	cout << "  " << square[0] << "  |  " << square[1] << "  |  " << square[2] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[3] << "  |  " << square[4] << "  |  " << square[5] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[6] << "  |  " << square[7] << "  |  " << square[8] << endl;
	cout << "     |     |     " << endl << endl;
	}
void asterisk(){
	for(int i=0;i<79;i++)
		cout<<"*";
		cout<<endl;
		cout<<endl;
		}
int checkwin(){
	if (square[0] == square[1] && square[1] == square[2])
		return 1;
	else if (square[3] == square[4] && square[4] == square[5])
		return 1;
	else if (square[6] == square[7] && square[7] == square[8])
		return 1;
	else if (square[0] == square[3] && square[3] == square[6])
		return 1;
	else if (square[1] == square[4] && square[4] == square[7])
		return 1;
	else if (square[2] == square[5] && square[5] == square[8])
		return 1;
	else if (square[0] == square[4] && square[4] == square[8])
		return 1;
	else if (square[2] == square[4] && square[4] == square[6])
		return 1;
	else if (square[0] != '1' && square[1] != '2' && square[2] != '3' &&
		 square[3] != '4' && square[4] != '5' && square[5] != '6' &&
	    square[6] != '7' && square[7] != '8' && square[8] != '9')
		return 0;
	else
		return -1;
}
void help(){
	system("cls");
	cout<<"So, what you want to know?"<<endl;
	asterisk();
	cout<<"\n1.How to play..\n2.Rules\n3.About the game\n4.Credits\n5.exit";
	int choice;
	cin>>choice;
	switch(choice){
		case 1:howtoplay();  break;
		case 2:gamerule();  break;
	case 3:aboutgame();break;
	case 4:credits();break;
		case 5:getch();break;
		default:cout<<"Wrong choice,enter again";
			getch();help();
			break;
			}
		}
void howtoplay(){
	system("cls");
	int c2;
	cout<<"The game is played as follows:"<<endl;
	asterisk();
	cout<<"\nStep 1: Select the 'play game' option from start menu"<<endl;
	cout<<"Step 2: A random player will be selected for the first move"<<endl;
	cout<<"The first player move is represented by 'X' while 2nd players move is represented by 'O'"<<endl;
	cout<<"Step 3:The selected player is required to make his first move by pressing the position represented by a specific number where he/she wants to make his move"<<endl;
	cout<<"Step 4:The next player will similarly give his mark represented by O"<<endl;
	cout<<"Step 5:Step 3 and 4 is repeated until a player wins or the game results in a tie";
	cout<<"That's it. Hope you will enjoy the game."<<endl;
	asterisk();
	cout<<"\nTo go back to main menu press 1\nTo exit the game, press 2";
	cin>>c2;

	switch(c2){
		case 1:startfile();break;
		case 2:getch();break;
		default:cout<<"Wrong choice, enter again";gamerule();break;
		}
	}

void gamerule(){
	system("cls");
	int c1;
	cout<<"GAME RULES:"<<endl;
	asterisk();
	cout<<"  The game follows very simple rules -";
	cout<<"\n1. For a person to win the game, he/she has to complete the three consecutive places in a selected row or column horizontally, vertically or diagonally.";
	cout<<"\n2.No person can change the moves he/she has already used\nThat's it. Thanks for playing.\n";
	asterisk();
	cout<<"\nTo go to start menu press 1, to exit the game, press 2"<<endl;
	cin>>c1;
	switch(c1){
		case 1:startfile();break;
		case 2:getch();break;
		default:cout<<"Wrong choice, enter again";gamerule();break;
		}
	}
void aboutgame(){
    system("cls");
    cout<<"ABOUT THE GAME:"<<endl;
    asterisk();
    cout<<"\nTic-tac-toe (also known as noughts and crosses or Xs and Os) is a multi - player computer game for two players, X and O, who take turns marking the spaces in a 3*3 grid. The player who succeeds in placing three of their marks in a horizontal, vertical, or diagonal row wins the game";
    cout<<endl;
    asterisk();
    cout<<"\nTo go back, press any key";
    getch();
    startfile();
    }
void credits(){
    system("cls");
    cout<<"CREDITS"<<endl;
    asterisk();
    cout<<"\nThis game is made by Ankur Gupta of class 11th science. Thanks for using the game..."<<endl;
    asterisk();
    cout<<"\nPress any key to go back to start menu";
    getch();
    startfile();
}