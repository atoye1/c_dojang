
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stddef.h>

#pragma pack(push, 1)
struct PacketHeader {
	char flags;
	int seq;
	long long seq2;
	long long seq3;
};
#pragma pack(pop)

int main()
{
	struct PacketHeader header;

	printf("%ld\n", sizeof(header.flags));
	printf("%ld\n", sizeof(header.seq));
	printf("%ld\n", sizeof(header));

	printf("%ld\n", offsetof(struct PacketHeader ,flags));
	printf("%ld\n", offsetof(struct PacketHeader ,seq));
	printf("%ld\n", offsetof(struct PacketHeader ,seq2));
	printf("%ld\n", offsetof(struct PacketHeader ,seq3));

	return 0;
}
