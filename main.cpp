#include<iostream>

using namespace std;

class Player //데이터 타입
{
public:
	int HP;
	int MP;
	int Gold;

	void Collect();
	void Move();
	void Attack();
	void Run();
};

//cpp
void Player::Collect()
{

}

void Player::Move()
{

}

void Player::Attack()
{

}

void Player::Run()
{

}

class MonsterSlime //데이터 타입
{
public:
	int HP;
	int MP;

	void Move();
	void Attack();
	void Run();
};

void MonsterSlime::Move()
{

}

void MonsterSlime::Attack()
{

}

void MonsterSlime::Run()
{

}

class MonsterGoblin //데이터 타입
{
public:
	int HP;
	int MP;

	void Move();
	void Attack();
	void Run();
};

void MonsterGoblin::Move()
{

}

void MonsterGoblin::Attack()
{

}

void MonsterGoblin::Run()
{

}

class MonsterWildpig //데이터 타입
{
public:
	int HP;
	int MP;

	void Move();
	void Attack();
	void Run();
};

void MonsterWildpig::Move()
{

}

void MonsterWildpig::Attack()
{

}

void MonsterWildpig::Run()
{

}

int main()
{
	Player NewPlyer;

	NewPlyer.Gold = 10;
	NewPlyer.HP = 100;
	NewPlyer.MP = 100;
	NewPlyer.Collect();

	MonsterSlime NewMonsterSlime;
	NewMonsterSlime.HP = 50;
	NewMonsterSlime.MP = 50;

	MonsterSlime NewMonsterGoblin;
	NewMonsterGoblin.HP = 60;
	NewMonsterGoblin.MP = 60;

	MonsterSlime NewMonsterWildpig;
	NewMonsterWildpig.HP = 70;
	NewMonsterWildpig.MP = 70;


	return 0;

};
