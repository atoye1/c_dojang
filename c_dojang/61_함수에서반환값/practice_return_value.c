#include <stdio.h>
#include <stdbool.h>

int getMana()
{
	int mana = 222;
	return mana;
}

float getAttackSpeed()
{
	float as = 0.679000f;
	return as;
}

bool isMelee()
{
	bool melee = true;
	return melee;
}

int main()
{
	int mana;
	float attackSpeed;
	bool melee;

	mana = getMana();
	attackSpeed = getAttackSpeed();
	melee = isMelee();

	printf("%d\n", mana);
	printf("%f\n", attackSpeed);
	printf("%d\n", melee);

	return 0;
}
