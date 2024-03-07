# Libft
### Libft project from the 42 cursus.

#### This project entails creating a library of 40+ functions from scratch, many of which are clones of already existing functions. This project is a good way to master the basics of C, while also beginning to learn some more complex concepts for beginners, such as linked lists.

### Part 1 functions

**ft_isalpha(), ft_isdigit(), ft_isalnum(), ft_isascii() and ft_isprint()** are straightforward and simple, returning a 0 or 1 integer depending on if the character sent is alphabetical, numerical, alphanumerical, an ASCII value, or a printable value respectively.

**ft_strlen()** is a simple function that counts the length of a string and returns this length as a size_t. This is the first usage of size_t in the 42 cursus. This is a datatype whose max value is compiler-dependent. The max value of size_t is the max size of an object/array, which is why we use it to measure a string in this function. It will be used in many functions going forward.

**ft_memset() and ft_bzero()** are functions that take a void pointer as a parameter and modifies the values of a specified number of bytes. This is the first usage of void pointers in the 42 cursus. In order to traverse the void pointer and modify every byte individually without any undefined behavior, we typecast it into a string, which is easy to traverse one byte at a time. Of course, this is also the first usage of typecasting in the 42 cursus. Typecasting is simply the action of converting a data type into another data type using a casting operator. ft_memset() traverses the void pointer up to a specified length and changes every value to a specified int. ft_bzero() does not allow us to specify the int, and simply changes the values to 0. Because of this, we can simply call ft_memset() in ft_bzero() and give int 0 as a parameter.

**ft_memcpy() and ft_memmove()** are very similar functions. ft_memcpy() takes two void pointers and copies the contents of the source pointer to the destination pointer, up to a specified length _n_. The copying process starts from byte 0 up to byte _n_. This can cause issues if the pointers happen to overlap with each other, as the final copied value may be incorrect due to the source itself being changed in the copying process. ft_memmove() resolves this by first checking if the destination pointer is placed before or after the source pointer in the memory, and copying either backwards or using ft_memcpy() depending on the destination pointer's position. Of course, we also use typecasting in these functions to traverse the void pointers.

**ft_strlcpy()** essentially does the same thing as ft_memcpy(), but strictly for strings. This function returns the length of the source, regardless of whether the copy was successful or not.

**ft_strlcat()** concatenates a source string onto the end of a destination string, with a specified length of the final string. Similar to ft_strlcpy(), this function returns the length of the string it would have created, regardless of whether it was successful or not (like in a case where the specified length is lesser than the length of the source and destination combined, therefore the concatenation couldn't be completed).

**ft_toupper() and ft_tolower()** simply take an int and check if its value is equal to a lowercase or uppercase ASCII value respectively, and will then convert it to its uppercase or lowercase value.

**ft_strchr() and ft_strrchr()** take a string and an int. The string is traversed one character at a time, and every character is compared to the int. If a value equal to the int is found, its address is returned. ft_strchr() returns the first instance of the int from the beginning of the string, while ft_strrchr() returns the last instance of it. If the int is not found, null is returned.

**ft_strncmp()** takes two strings and compares their values up to a specified number of characters. If a difference is found, it returns the integer difference of the first different characters it encountered. If no difference is found, 0 is returned.

Project completed on November 11 2023 with bonus (125/100).
