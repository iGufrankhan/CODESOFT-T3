#include<iostream>
using namespace std;

char board[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
void get_x_player_choice();
void get_o_player_choice();
void player_vs_player();
int count_board(char symbol);
char  check_winner();
void show_board();

int main(){

string mode;
cout<<"......................................................................................."<<endl<<endl;
cout<<"\n\t\t\t..............Welcome To Game World !..............."<<endl<<endl<<endl<<endl;

      cout<<"\n\t\t..........Tic Tac Toe Game............."<<endl<<endl<<endl;
                    
           


   cout<<"Enter (start) To Start The Game: ";
     cin>>mode;
cout<<endl<<endl;
     if(mode=="start"){
        cout<<"............Lets Play The Game............. "<<endl<<endl<<endl;
        player_vs_player();
     }
     else {
        cout<<"Don't You Want To Play The Game ?."<<endl<<endl;
        cout<<"Error ! You Have Entered Wrong Keywords "<<endl;

     }

     cout<<endl<<endl;


}

void get_x_player_choice(){
    while(true){
        cout<<" Select Your Position(1-9): ";
        int choice ;
        cin>>choice;
        choice--;

        if(choice < 0||choice > 8){
            cout<<"Please Select Your Choice From(1-9):";
        }
        else if(board[choice]!=' ') {
            cout<<"Please Select An Empty Position:"<<endl;

        }else {
            board[choice]='X';
            break;
        }
    }
}
void get_o_player_choice(){
    while(true){
        cout<<" Select Your Position(1-9):" ;
        int choice ;
        cin>>choice;
        choice--;

        if(choice<0||choice>8){
            cout<<"Please Select Your Choice From(1-9):";
        }
        else if(board[choice]!=' ') {
            cout<<"Please Select An Empty Position: "<<endl;

        }else {
            board[choice]='O';
            break;
        }
    }

}


void player_vs_player(){
   string X_player_name,O_player_name;
   cout<<"Enter X_Player Name: ";
   cin>>X_player_name;
   cout<<"Enter O_Player Name : ";
  cin>>O_player_name;
  while(true)
  {
     system("cls");
       show_board();
     if(count_board('X')== count_board('O'))
{
    cout<<X_player_name<<"'s Turns."<<endl;
    get_x_player_choice();
    
    }
    else 
    {
        cout<<O_player_name<<"'s Turn."<<endl;
        get_o_player_choice();

    }


    char winner=check_winner();
    if(winner=='X')
    {
        system("cls");
        show_board();
       cout<<"\n\t\tCongratulation ! "<<endl<<endl;
        cout<<"\t\t............"<<X_player_name<<" "<<"Won The Game."<<"..............."<<endl<<endl<<endl;
        cout<<"\n\n.............................Thank You.....................................";
        break;
    }
    else if(winner=='O')
    {
        system("cls");
        show_board();
         cout<<"\n\t\tCongratulation ! "<<endl;
        cout<<"\t\t........."<<O_player_name<<" "<<" Won The Game."<<".............."<<endl<<endl<<endl;
        cout<<"\n\n.............................Thank You.............................................";
        break;
    }
      else if(winner=='D')
     {
        cout<<"Game Is Draw."<<endl;
        cout<<"\n\n......................Thank you...................................";
        break;


     }

  }




}


int count_board(char symbol){
    int total=0;
    for(int i=0;i<9;i++)
    {
        if(board[i]==symbol)
        {
            total+=1;
        }

    }
    return total;

}
char check_winner(){
//horizontal
if(board[0]==board[1]&&board[1]==board[2]&&board[0]!=' ')
    return board[0];
 if(board[3]==board[4]&&board[4]==board[5]&&board[3]!=' ')
    return board[3];
  if(board[6]==board[7]&&board[7]==board[8]&&board[6]!=' ')
    return board[6];
     //vertical
    if(board[0]==board[3]&&board[3]==board[6]&&board[0]!=' ')
    return board[0];
 if(board[1]==board[4]&&board[4]==board[7]&&board[1]!=' ')
    return board[1];
  if(board[2]==board[5]&&board[5]==board[8]&&board[2]!=' ')
    return board[2]; 
    //diagonal
    if(board[0]==board[4]&&board[4]==board[8]&&board[0]!=' ')
    return board[0];
 if(board[2]==board[4]&&board[4]==board[6]&&board[2]!=' ')
    return board[2];
 if(count_board('X')+count_board('O')<9)
 return 'C';
 else return 'D';

}

  void show_board() {
    cout << " " << "    |   " << "   |  " << endl;
    cout << " " << board[0] << "   |   " << board[1] << "  | " << board[2] << endl;
    cout << " " << "    |   " << "   |  " << endl;
     cout << "-------------------" << endl;
   cout << " " << "    |   " << "   |  " << endl;
    cout << " " << board[3] << "   |   " << board[4] << "  | " << board[5] << endl;
    cout << " " << "    |   " << "   |  " << endl;
     cout << "-------------------" << endl;
   cout << " " << "    |   " << "   |  " << endl;
    cout << " " << board[6] << "   |   " << board[7] << "  | " << board[8] << endl;
    cout << " " << "    |   " << "   |  " << endl;
     
  
}





