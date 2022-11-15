


#include <string>
#include <vector>

using  namespace std;

class Puzzle
{
private:
	vector<vector<int>> solved_puzzle = { {1,2,3,4},
										 {5,6,7,8},
										 {9,10,11,12},
										 {13,14,15,0} };
	vector<int> list;
	vector<vector<int>> game_board{ 4,vector<int>(4) };
	static const int board_size = 4;
	static const int list_size = 16;
	int X_x, X_y;

public:
	Puzzle();
	void shuffling();  
	bool checker();
	void list_filling();
	bool is_it_solvable();
	void board_filling();
	void x_location();
	void move();
	int& operator[ ](int);
	friend ostream& operator<< (ostream&, Puzzle&);
	~Puzzle();
};

class Menu
{
private:
	int ch;
public:
	void setCh(int ch);
	void start_menu();
	void conditions_of_the_game();
	void end_of_the_game();
};