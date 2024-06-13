#include <stdio.h>
#include <string.h>

size_t my_strlcat(char *dest, const char *src, size_t dest_size) {
	size_t dest_len = strnlen(dest, dest_size);
	printf("my_strlcat function:dest_len:%zu\n",dest_len);//5
	size_t src_len = strlen(src);
	size_t total_len = dest_len + src_len;

	if (dest_len < dest_size - 1)//5-19
        {
		size_t copy_len = dest_size - dest_len - 1;
		if (copy_len > src_len) {
			copy_len = src_len;
		}

		for (size_t i = 0; i < copy_len; i++) {
			dest[dest_len + i] = src[i];
		}
		dest[dest_len + copy_len] = '\0';
	}

	return total_len;
}

int main() {
	char dest[20] = "Hello";
	const char *src = ", world!";
	size_t dest_size = sizeof(dest);//20
	printf("main dest_size:%zu\n",dest_size);//20

	size_t result = my_strlcat(dest, src, dest_size);

	printf("Resulting string: %s\n", dest);
	printf("Total length of the string tried to create: %zu\n", result);

	return 0;
}

