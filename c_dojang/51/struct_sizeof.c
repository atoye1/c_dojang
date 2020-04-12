
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stddef.h>

struct PacketHeader {
	char flags;
	int seq;
	long long long_int;
	long long long_int1;
};

int main()
{
	struct PacketHeader header;

	printf("%d\n", offsetof(struct PacketHeader, flags));
	printf("%d\n", offsetof(struct PacketHeader, seq));
	printf("%d\n", offsetof(struct PacketHeader, long_int));
	printf("%d\n\n\n", offsetof(struct PacketHeader, long_int1));

	printf("%ld\n", sizeof(header.flags));
	printf("%ld\n", sizeof(header.seq));
	printf("%ld\n", sizeof(header.long_int));
	printf("%ld\n", sizeof(header));
	printf("%ld\n", sizeof(struct PacketHeader));

	return 0;
}
