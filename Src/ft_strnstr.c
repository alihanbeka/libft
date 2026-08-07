
#include <stddef.h>

char* ft_strnstr(const char* big, const char* little, size_t len) {

	size_t i;
	size_t j;

	if (little[0]=='\0')
		return ((char*)big));
		i = 0;
		while (big[i] && i < len) {
			j = 0;
			while (big[i + j] != '\0'
				&& little[j] != '\0'
				&& i + j < len
				&& big[i + j] == little[j]) 
			{

				j++;
			}
			if (little[j] == '\0')
				return((char*) &big[i]);


		}


}