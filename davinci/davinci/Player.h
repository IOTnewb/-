#pragma once

class Player
{
private:
	int player[20];
	int count;
public:
	Player()
		: count(0)
	{}
	void Drawcard(int* card);

	int *Getplayer()
	{
		return player;
	}

	int Getcount()
	{
		return count;
	}
	void Addcount()
	{
		count++;
	}
	void Printcard();
	void Drawdummy(int* card);
};