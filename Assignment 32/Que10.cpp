// 10.Create a C++ class for player objects with the following attributes: player no., name, number of matches and number of goals done in each match. The number of matches varies for each player. Write a parameterized constructor which initializes player no., name, number of matches and creates an array for number of goals and number of matches dynamically.

#include<iostream>
using namespace std;

class Player{
    int player_no;
    string name;
    int no_of_matches,no_of_goals;
    int *matches;
    int *goals;

    public:
        Player(int no, string name ,int matches, int goals){
            this->player_no = no;
            this->name = name;
            this->no_of_matches = matches;
            this->no_of_goals = goals;

            this->goals = new int[goals];
            this->matches = new int[matches];
        }

        void setMatches(){
            cout<<"Enter "<<this->name<<"'s Matches --"<<endl;
            cout<<"Enter Matches :";
            for(int i=0; i<this->no_of_matches;i++){
                cin>>*(matches + i);
            }
        }

        void setGoals(){
            cout<<"Enter "<<this->name<<"'s Goals --"<<endl;
            cout<<"Enter Goals  :";
            for(int i=0; i<this->no_of_goals;i++){
                cin>>*(goals + i);
            }
        }

        void display(){
            cout<<"Player No   : "<<this->player_no<<endl;
            cout<<"Player Name   : "<<this->name<<endl;

            cout<<"Goals    : [ ";
            for(int i=0; i<this->no_of_goals;i++){
                cout<<*(goals + i)<<" , ";
            }
            cout<<" ]"<<endl;

            cout<<"Matches    : [ ";
            for(int i=0; i<this->no_of_matches;i++){
                cout<<*(matches + i)<<" , ";
            }
            cout<<" ]"<<endl<<endl;

        }
};

int main(){

    Player p (07, "MSD", 5, 5);

    p.setGoals();
    p.setMatches();
    p.display();

    return 0;
}