

char* ft_strncat(char* dest, char* src, unsigned int nb) {


	unsigned i;
	unsigned j;

	i = 0;
	j = 0;

	while (dest[i]) {

		i++;
		while (src[j]) {

			dest[i] = src[j];
			j++;
			i++;


		}
		dest[i] = '\0';

	}

	return (dest);
}