#include <unistd.h>

void ft_putchar(int isnegresult){
	write(1, &isnegresult, 1);
}
//int n = '1';
void ft_is_negative(int n) {
	if (n < '0') {
		int isnegresult = 'N';
		ft_putchar(isnegresult);
	} else{
   		int isnegresult = 'P';
		ft_putchar(isnegresult);
	}
}

//int main(void){
//	int n = -1;
//	ft_is_negative(n);
//}
