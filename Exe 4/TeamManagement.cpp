#include "TeamManagement.h"
//We had no time :(
TeamManagement::TeamManagement(Player** newTeam){
    int count = 0;
    while (!team)
    {
        if (!team[count]) delete team[count];
        team[count] = newTeam[count];
        count++;
    }        
}

TeamManagement::TeamManagement(const TeamManagement& teamManagement){
    cleanPlayers();
    int count = 0;
    team = new Player*[sizeof(teamManagement.team)];
    while (!team[count])
    {
        team[count] = teamManagement.team[count];
        count++;
    }  
    
}
TeamManagement::~TeamManagement(){ 
    cleanPlayers();
}

void TeamManagement::cleanPlayers(){
    for (int i = 0 ; i < (sizeof(TeamManagement)*sizeof(Player))/sizeof(team); ++i)
        delete team[i];
    delete [] team;
}

void TeamManagement::updatePlayers(const Player** players){
    cleanPlayers();
    int count = 0;
    team = new Player*[sizeof(players)];
    while (!team[count])
    {
        team[count] = (*players[count]);
        count++;
    }  
}

void TeamManagement::insertNewPlayer(const Player& player){
    for(int i=0; i<sizeof(team); ++i)
    {
        if(team[i] == NULL)
            team[i] = player;
    }
}
void TeamManagement::printPlayers(ostream & os) const{
     for(int i=0; i<sizeof(team); ++i)
    {
        team[i]->print(os);
    }
}