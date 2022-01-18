//
// Created by bilai on 04/01/2022.
//

#ifndef MAGIC_CARD_H
#define MAGIC_CARD_H

#include <iostream>
#include <string>
#include <vector>

class Card {
protected:
    std::string name;
    std::vector<int> manaCost; // { Forest Green , Island Blue , Mountain Red, Plain Yellow, Swamp Black, Other }
    std::string color;
    bool isDiscarded = false;
    bool isEngaged = false;
    std::string typeOfCard;

public:
    Card(std::string nm, std::vector<int> mnCt, std::string clr);
    static std::vector<std::string> ColorCode;
    void setName(const std::string &name);
    void engage();
    void disengage();
    void setManaCost(std::vector<int> manaCost);
    void setColor(const std::string &color);
    void setIsDiscarded(bool isDiscarded);
    const std::string &getName() const;
    const std::string getColoredName() const;
    std::vector<int> getManaCost() const;
    const std::string &getColor() const;
    bool getIsDiscarded() const;
    bool getIsEngaged() const;
     ~Card();
    void isStillOperational();
    virtual void print();
    virtual void printLine(int line);
    std::string manaToString();
    static void print(std::vector<Card*> v);

};

#endif //MAGIC_CARD_H
