//Tic-Tac-Toe is a paper-and-pencil game for two players, X and O, who take turns marking the spaces in a 3x3 grid. The player who succeeds in placing three of their marks in a horizontal, vertical or diagonal row wins the game.
#include<iostream>
#include<vector>

std::vector<char> board = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char current_player = 'X';
void draw()
{
  std::cout<<" "<<board[0]<<" | "<<board[1]<<" | "<<board[2]<<"\n";
  std::cout<<"---|---|---\n";
  std::cout<<" "<<board[3]<<" | "<<board[4]<<" | "<<board[5]<<"\n";
  std::cout<<"---|---|---\n";
  std::cout<<" "<<board[6]<<" | "<<board[7]<<" | "<<board[8]<<"\n";
}
void set_position()
{
  int position;
  std::cout<<"Player "<<current_player<<", enter a position (1-9): ";
  std::cin>>position;
  if(position >= 1 && position <= 9 && board[position -1] == '0' + position)
  {
    board[position - 1] = current_player;
  }
  else
  {
    std::cout<<"Invalid position. Try again.\n";
    set_position();
  }
}
void change_player()
{
  current_player = (current_player == 'X') ? 'O' : 'X';
}
bool is_winner()
{
  return(board[0] == board[1] && board[1] == board[2]) || (board[3] == board[4] && board[4] == board[5]) || (board[6] == board[7] && board[7] == board[8]) || (board[0] == board[3] && board[3] == board[6]) || (board[1] == board[4] && board[4] == board[7]) || (board[2] == board[5] && board[5] == board[8]) || (board[0] == board[4] && board[4] == board[8]) || (board[2] == board[4] && board[4] == board[6]);
}
bool filled_up()
{
  for (int i = 0;i<9;++i)
  {
    if (board[i] !='X' && board[i] != 'O')
    {
      return false;
    }
  }
  return true;
}
int main()
{
  draw();
    while (true) {
        set_position();
        draw();
        if (is_winner()) {
            std::cout << "Player " << current_player << " wins!\n";
            break;
        }
        if (filled_up()) {
            std::cout << "It's a draw!\n";
            break;
        }
        change_player();
    }
    return 0;

}