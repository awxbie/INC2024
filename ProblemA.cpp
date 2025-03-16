#include<stdio.h>
#include<string.h>

int main() {
	int test; 
	char kata[101]; 
	
	scanf ("%d", &test); 
	for (int i = 0; i < test; i++) {
		scanf ("%s", kata); 
		getchar(); 
		
		for (int j = 0; j < strlen(kata); j++) {
			if (kata[j] == 'c') {
				if (kata[j+1] == '\0' || kata[j+1] == 'a' || kata[j+1] == 'b' || kata[j+1] == 'c' || kata[j+1] == 'd' || kata[j+1] == 'f'
					|| kata[j+1] == 'g' || kata[j+1] == 'j' || kata[j+1] == 'k' || kata[j+1] == 'l' || kata[j+1] == 'm' || kata[j+1] == 'n' || kata[j+1] == 'o'
					|| kata[j+1] == 'p' || kata[j+1] == 'q' || kata[j+1] == 'r' || kata[j+1] == 's' || kata[j+1] == 't' || kata[j+1] == 'u'|| kata[j+1] == 'v' 
					|| kata[j+1] == 'w'|| kata[j+1] == 'x' || kata[j+1] == 'z')  {
					kata[j] = 'k';
				}
				else if (kata[j+1] == 'e' || kata[j+1] == 'i' || kata[j+1] == 'y') {
					kata[j] = 's'; 
				}	
				else if (kata[j+1] = 'h') {
					kata[j] = 'c'; 
					j++; 
				}
			}
		}
		
		int k = 0; 
		char hasil[101] = " "; 
		for (int j = 0; j < strlen(kata); j++) {
			if (kata[j] != 'c') {
				hasil[k] = kata[j];
				k++; 
			}
			else if (kata[j] == 'c' && kata[j+1] == 'h') {
				hasil[k] = kata[j]; 
				k++;
				j++; 
			}
		}
		printf ("%s\n", hasil); 
	}
	
	return 0; 
}
