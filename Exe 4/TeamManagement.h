#pragma once
#include <iostream>
#include "player.h"
using namespace std;

class TeamManagement : public Player
{
    public:
        TeamManagement(Player** players);
        TeamManagement(const TeamManagement& TeamManagement);
        ~TeamManagement();

        void updatePlayers(const Player** players);
        void insertNewPlayer(const Player& player);
        void printPlayers(ostream & os) const;
        void UpdatePlayerFouls(const int& shirt, const int& offense);
        void UpdatePlayerAssists(const int& shirt, const int& assists);
        void UpdatePlayerBlockages(const int& shirt, const int& blockages);
        void UpdatePlayerThrowing(const int& shirt, const Enum points, const Bool hitormiss);
        void PrintGroupStatistic(ostream & os) const;
        void PrintPointStatistic(ostream & os) const;
        void createTopFive(const Player** team, const Player* openings[5]);
        
        TeamManagement& operator= (const TeamManagement& TeamManagement);        

    private:
        void cleanPlayers();

    protected:
        Player** team;
        Player** topFive[5];    
};

