#include "player.h"

using namespace std;

Player::Player(const string& newName, 
            int newAge, int newShirtNum, 
            float newHight, float newShoeSize, 
            int newAssist, int newBlocks,
            int newFoul, int new2Points,
            int newThrow2Points, int newThrow3Points,
            int new3Points, int newSum) : 
            playerName(newName), shirtNumber(newShirtNum), hight(newHight), shoeSize(newShoeSize), 
            assists(newAssist), blocks(newBlocks), fouls(newFoul), throw2Points(newThrow2Points), throw3Points(newThrow3Points), 
            twoPoints(new2Points), triPoints(new3Points),
            sumPoints(newSum) { setAge(newAge); } 

Player::Player(const Player& player) : playerName(player.playerName), age(player.age), shirtNumber(player.shirtNumber), 
            hight(player.hight), shoeSize(player.shoeSize), assists(player.assists), blocks(player.blocks), fouls(player.fouls), 
            twoPoints(player.twoPoints), triPoints(player.triPoints), sumPoints(player.sumPoints) {}

Player& Player::operator=(const Player& player){
    if(this == &player) return *this;
    playerName = player.playerName; age = player.age; shirtNumber = player.shirtNumber; hight = player.hight;
    shoeSize = player.shoeSize; assists = player.assists; blocks = player.blocks; fouls = player.fouls;
    twoPoints = player.twoPoints; triPoints = player.triPoints; sumPoints = player.sumPoints;
    return *this;
}

void Player::Foul(){
    if(fouls < 5)
    {
        if(fouls+1 == 5)
            {
                cout << "This player can't recieve anymore fouls." << endl;
                fouls++;
                return;
            }
        fouls++;
        return;
    }
    cout << "This player reached maxed fouls." << endl;
    return;
}

void Player::Shoot(const Enum _enum, const Bool _bool){
    if(_bool == SUCCESS)
    {
        if(_enum == TWOPOINT){
            sumPoints+= 2;
            twoPoints++;
            return;
        }
        if(_enum == THREEPOINT){
            sumPoints+= 3;
            triPoints++;
            return;
        }
        cout << "Wront prametars.\n";
        return;
    }
    cout << "Good luck next time.\n";
}

void Player::Assist(){
    assists++;
    if(assists >= 10) cout << "Great job!\n";
}

void Player::Block(){
    blocks++;
    if(blocks >= 10) cout << "Great job!\n";
}

bool  Player::operator< (const Player& player) const{
    if(assists < player.assists) return true;
    return false;
}

bool  Player::operator> (const Player& player) const{
    if(assists > player.assists) return true;
    return false;
}

ostream& Player::operator << (ostream& out){
	print(out);
	return out;
}

istream& Player::operator >> (istream& in){
    in >> playerName;
    in >> age;
    in >> shirtNumber;
    in >> hight;
    in >> shoeSize;
    in >> assists;
    in >> blocks;
    in >> fouls;
    in >> twoPoints;
    in >> triPoints;
    in >> sumPoints;
	return in;
}