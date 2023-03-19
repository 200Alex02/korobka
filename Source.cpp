#include <iostream>
#include <string>

using namespace std;


class Box
{
public:

	Box(int v, int weight)
	{
		this->v = v;
		this->weight = weight;
	}

	int GetV()
	{
		return v;
	}

	int GetWeight()
	{
		return weight;
	}

private:

	int v;
	int weight;

};

class Thing
{
public:

	Thing(int v2, int weight2)
	{
		this->v2 = v2;
		this->weight2 = weight2;
	}

	int GetV2()
	{
		return v2;
	}

	int GetWeight2()
	{
		return weight2;
	}

private:

	int v2 = 130;
	int weight2 = 220;
};



int Count(Box& box, Thing& thing)
{
	int countt = 0;
	int v1 = thing.GetV2();
	int v2 = thing.GetV2();
	int weight1 = thing.GetWeight2();
	int weight2 = thing.GetWeight2();

	while (true)
	{
		if (box.GetV() >= v1 && box.GetWeight() >= weight1)
		{
			countt++;
			v1 += v2;
			weight1 += weight2;
		}
		else
		{
			break;
		}
	}

	return countt;
}

int main()
{

	Box one(3000, 1500);

	Thing thing(1000, 500);

	cout << Count(one, thing) << endl;

	return 0;
}