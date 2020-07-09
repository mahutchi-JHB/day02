#include <unistd.h>

void ft_putchar(int digit){
	write(1, &digit, 1);
}

void ft_print_numbers(void){
	int digit;
	digit = '0';
	while(digit <= '9'){
		ft_putchar(digit);
		digit++;
	}	
}

int main(void){
	ft_print_numbers();
}

