
void _4_8() {
	// The illustrations have the low-order bit on the right
    // These examples assume char has 8 bits, and int has 32

	unsigned char bits = 0233;
	// 10011011
	// 0233 is an octal literal (¡ì 2.1.3, p.38)

	bits << 8;
	// 00000000 00000000 10011011 00000000
	// bits promoted to int and then shifted left by 8 bits

	bits << 31;
	// 10000000 00000000 00000000 00000000
	// left shift 31 bits, left-most bits discarded

	bits >> 3;
	// 00000000 00000000 00000000 00010011
	// Right shift 3 bits, 3 right-most bits discarded

	unsigned char bits = 0227;         // 10010111
	~bits;  // 11111111 11111111 11111111 01101000


	unsigned char b1 = 0145;               // 01100101
	unsigned char b2 = 0257;               // 10101111

	b1& b2;    // 00000000 00000000 00000000 00100101
	b1 | b2;    // 00000000 00000000 00000000 11101111
	b1^ b2;    // 00000000 00000000 00000000 11001010


	unsigned long quiz1 = 0; // we'll use this value as a collection of bits


}