#include <algorithm>
#include "engine.h"
#include "player.h"
#include "stage.h"
#include "shoot.h"
#include "enemy.h"


namespace {
inline auto signum(int x)
{
    return (x > 0) - (x < 0);
}

Direction randDirection()
{
    auto randEdge = rand() % static_cast<uint8_t>(Direction::UPPER_LEFT);
    return static_cast<Direction>(randEdge);
}
} // namespace


Position generateNewEnemyPosition(int width, int height)
{
    Position position2Generate = Position(rand() % width, rand() % height);

    switch (randDirection()) {
        case Direction::UP:
            position2Generate.y_ = height-1;
            break;
        case Direction::DOWN:
            position2Generate.y_ = 0;
            break;
        case Direction::LEFT:
            position2Generate.x_ = 0;
            break;
        case Direction::RIGHT:
            position2Generate.x_ = width-1;
            break;
        default:
            break;
    }
    return position2Generate;
}


Engine::~Engine() = default;



Engine::Engine(std::size_t stageWidth, std::size_t stageHeight):
    player_(new Player(Direction::RIGHT,Position(stageWidth/2,stageHeight/2))), stage_(new Stage(stageWidth, stageHeight))
{

}

void Engine::update()
{
    updateBullets();
    updateEnemies();
    randEnemies();
}

void Engine::updateBullets()
{

}



void Engine::updateEnemies()
{
    // TODO...
}

void Engine::movePlayerUp()
{
    player_->moveUp();
}

void Engine::movePlayerDown()
{
    // TODO...
}

void Engine::movePlayerLeft()
{
    // TODO...
}
void Engine::movePlayerRight()
{
    player_->moveRight();
}

void Engine::playerShoots()
{
    shoots_.emplace_back(player_->direction(),playerPosition());
    if(player_->direction()==Direction::RIGHT){
        shoots_[0].moveRight();
    }





}

Position Engine::playerPosition() const
{

    return player_->position();
}

Direction Engine::playerDirection() const
{
    // TODO...
    return player_->direction();
}

bool Engine::isPlayerAlieve() const
{
    // TODO...
    return player_->isAlieve();
}

std::size_t Engine::stageWidthCells() const
{

    return stage_->width();
}
std::size_t Engine::stageHeightCells() const
{
    // TODO...
    return stage_->height();
}

void Engine::randEnemies(Position (*positionGenerator)(int,int))
{
    if (enemies_.size() < maxEnemies_)
    {
        //enemies_.push_back(std::make_shared<Enemy>(Enemy(generateNewEnemyPosition(stageWidthCells(),stageHeightCells()),37)));
    }
}
