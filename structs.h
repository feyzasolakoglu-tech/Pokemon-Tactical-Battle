#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct 
{
    char atkName[32];
    char defName[32];
    double multiplier;
}TypeEffect;

typedef struct 
{
    char name[32];
    TypeEffect effects[19];
}Type;

typedef enum{
    PHYSICAL,
    SPECIAL
}Category;

typedef struct {
    char name[32];
    Type type;
    Category category;
    int power;
    int range;
} Move;

typedef struct {
    int x;
    int y;
} Position;

typedef struct {
    char name[32];
    Type types[2];
    int maxHP;
    int currentHP;
    int attack;
    int defense;
    int spAtk;
    int spDef;
    int speed;
    Move moves[4];
} Pokemon;

typedef struct {
    char name[32];
    Pokemon Pokemons[6];
    int currentIndex;
    Position position;
} Player;

typedef struct {
    int roundNumber;
    char summary[200];
} RoundLog;

#endif