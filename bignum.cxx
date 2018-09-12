#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>

int main() {
	int carry,digit,op2;
	char bignum[100];
	char result[100];
	op2 = 0;
	carry = 0;
	std::cout<<"enter a big number:";
	std::cin>>bignum;
	std::strcpy(result,bignum);
	std::cout<<"Enter a small number:";
	std::cin>>op2;
	for(int i = std::strlen(result)-1;i>=0;--i) {
		digit = (result[i]-'0')*op2;
		digit = digit + carry;
		if(digit!=0) {
			carry = std::floor(digit/10);
		}
		else {
			carry = 0;
		}
		result[i] = (digit%10)+'0';
	}
	std::cout<<bignum<<" * "<<op2<<" = "<<carry<<result<<"\n";
	return 0;
}
