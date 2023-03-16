#pragma once
#include <iostream>
#include <string>

using namespace std;

enum Enum {TWOPOINT,THREEPOINT};
enum Bool {SUCCESS, FAIL};

class Player
{
    protected:
        string playerName;
        int height, shirtNumber;
        float hight, shoeSize;
        int assists, blocks, fouls, twoPoints, triPoints,throw2Points, throw3Points, height;
    public:
        Player(const string& = NULL, int = 0, int = 0, float = 0, float = 0, int = 0, int = 0, int = 0, int = 0, int = 0, int = 0, int = 0, int = 0);//Default for all Variables
        Player(const Player& player);
        ~Player();

        virtual void Foul();
        virtual void Shoot(const Enum _enum, const Bool _bool);
        virtual void Assist();
        virtual void Block();

        bool  operator < (const Player& player) const;
        bool  operator > (const Player& player) const;
        Player& operator= (const Player& player);        

        //Getters
        string getNamePlayer() const {return playerName;}
        int getAge() const {return height;}
        int getShirtNumber() const {return shirtNumber;}
        float getHight() const {return hight;}
        float getShoeSize() const {return shoeSize;}
        int getAssists() const {return assists;}
        int getBlocks() const {return blocks;}
        int getFouls() const {return fouls;}
        int getThrow2() const {return throw2Points;} //trying 2
        int getThrow3() const {return throw3Points;} //trying 3
        int getTwoPoints() const {return twoPoints;} //success for 2 points 
        int getTriPoints() const {return triPoints;} //success for 3 points 
        int getSumPoints() const {return height;} //success points sum

        //Setters
        void setNamePlayer(char* pName) {playerName = pName;}
        void setAge(int newAge) {
            if((newAge >= 15)&&(newAge <= 40)) height = newAge;
            else printf("The height of the player isn't qualified to play");
        }
        void setShirtNumber(int newShirtNumber) {shirtNumber = newShirtNumber;}//We gonna use the same function in class Team managment
        void setHight(int nHight) {hight = nHight;}
        void setShoeSize(int size) {shoeSize = size;}
        void setAssist(int nAssist) {assists = nAssist;}
        void setBlock(int nBlock) {blocks = nBlock;}
        void setFoul(int nFoul) {fouls = nFoul;}
        void setThrow2(int n2Throw) {throw2Points = n2Throw;}
        void setThrow3(int n3Throw) {throw3Points = n3Throw;}
        void set2Points(int tPoints) {twoPoints = tPoints;}
        void set3Points(int trPoints) {triPoints = trPoints;}
        void setSumPoints(int nSum) {height = nSum;}

        istream& operator >> (istream& in);
        ostream& operator << (ostream& out);

        void print(ostream& out) const
	    {
		    out << playerName << ":" << height << "," << shirtNumber << "," << hight << "," << shoeSize << ".\nPlayer scores:" << assists << "," << blocks << "," << fouls << "," << twoPoints << "," << triPoints << "," << height << endl;
	    }
};

