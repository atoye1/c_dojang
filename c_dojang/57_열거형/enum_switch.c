
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum LuxSkill {
	LightBinding = 1,
	PrismaticBarrier,
	LucentSingularity,
	FinalSpark,
};

int main()
{
	enum LuxSkill skill;

	skill = LightBinding;

	switch (skill)
	{
		case LightBinding:
			printf("LB\n");
			break;
		case PrismaticBarrier:
			printf("PB\n");
			break;
		case LucentSingularity:
			printf("LS\n");
		case FinalSpark:
			printf("FinalSpark\n");
			break;
		default:
			printf("just mv\n");
			break;
	}

	return 0;
}
