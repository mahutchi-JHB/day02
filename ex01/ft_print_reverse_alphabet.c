#include <unistd.h>

void ft_putchar(char letter){
	write(1, &letter, 1);
}

void ft_print_reverse_alphabet(void){
	char letter;
	letter = 'z';

	while(letter >= 'a') {
		ft_putchar(letter);
		letter--;
	}
}

int main(void){
	ft_print_reverse_alphabet();
}
